#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node * link;
};

typedef struct node * NODE;
NODE getNode();
void insert_front(NODE head,int elem);
void delete_front(NODE head);
void insert_rear(NODE head,int elem);
void delete_rear(NODE head);
void display(NODE head);
int count(NODE head);
//////////////////////////////////////
NODE getNode()
{
	NODE x;
	x=(NODE)malloc(sizeof(struct node));
	if(x==NULL)
	{
		printf("NO SPACE AVAILABLE");
		exit(0);
	}
	return x;
}

void insert_front(NODE head,int elem)
{
	NODE temp;
	temp=getNode();
	temp->info=elem;
	temp->link=head->link;
	head->link=temp;
}

void delete_front(NODE head)
{
	if(head->link==NULL)
	{
		printf("No elements\n");
		return;
	}
	NODE temp=head->link;
	head->link=temp->link;
	printf("%d deleted\n",temp->info);
	free(temp);
}


void insert_rear(NODE head,int elem)
{
	NODE temp;
	temp=getNode();
	temp->info=elem;
	temp->link=NULL;
	NODE cur=head;
	while(cur->link!=NULL)
	{
		cur=cur->link;
	}
	cur->link=temp;
}

void delete_rear(NODE head)
{
	if(head->link==NULL)
	{
		printf("No elements\n");
		return;
	}
	NODE cur=head,prev=head;
	while(cur->link!=NULL)
	{
		prev=cur;
		cur=cur->link;
	}
	printf("%d deleted\n",cur->info);
	prev->link=NULL;
	free(cur);
}

void display(NODE head)
{
	if(head->link==NULL)
	{
		printf("No elements\n");
		return;
	}
	NODE cur=head->link;
	printf("Elements of SLL are \n");
	while(cur!=NULL)
	{
		printf("%d\n",cur->info);
		cur=cur->link;
	}

}

int count(NODE head)
{
	int count=0;
	NODE cur=head->link;
	while(cur!=NULL)
	{
		count++;
		cur=cur->link;
	}
	return count;
}


int main()
{
  NODE head;
  head=getNode();
  head->link=NULL;
  int elem,ch,pos;
  while(1)
  {
     printf("\n\n1.InsFr\n2.InsRe\n3.DelFr\n4.Delre\n5.display\n6.count\n");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:
        printf("Enter the element\n");
        scanf("%d",&elem);
        insert_front(head,elem);
        break;
        
        case 2:
        printf("Enter the element\n");
        scanf("%d",&elem);
        insert_rear(head,elem);
        break;
        
        case 3:
        delete_front(head);
        break;
        
        case 4:
        delete_rear(head);
        break;
        
        case 5:
        display(head);
        break;     
        
        case 6:
        printf("length = %d",count(head));
        break; 
	   
	   default:exit(0);
	}
  }
}
