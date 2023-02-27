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
	if(head->link==head)
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
	temp->link=head;
	NODE cur=head;
	while(cur->link!=head)
	{
		cur=cur->link;
	}
	cur->link=temp;
}

void delete_rear(NODE head)
{
	if(head->link==head)
	{
		printf("No elements\n");
		return;
	}
	NODE cur=head,prev=head;
	while(cur->link!=head)
	{
		prev=cur;
		cur=cur->link;
	}
	printf("%d deleted\n",cur->info);
	prev->link=head;
	free(cur);
}

void display(NODE head)
{
	if(head->link==head)
	{
		printf("No elements\n");
		return;
	}
	NODE cur=head->link;
	printf("Elements of SLL are \n");
	while(cur!=head)
	{
		printf("%d\n",cur->info);
		cur=cur->link;
	}

}

int count(NODE head)
{
	int count=0;
	NODE cur=head->link;
	while(cur!=head)
	{
		count++;
		cur=cur->link;
	}
	return count;
}


void insert(NODE head,int elem, int pos)
{
	if(pos<=0)
	{
		insert_front(head,elem);
		return;
	}
	int length=count(head);
//	printf("%d,%d\n",pos,length);
	if(pos>=length)
	{
		insert_rear(head,elem);
		return;
	}
	//printf("check1\n");
	NODE temp,cur=head->link;
	temp=getNode();
	temp->info=elem;
	while(pos>1)
	{
		pos--;
		cur=cur->link;
	}
	//printf("check1-%d\n",cur->info);
	temp->link=cur->link;
	cur->link=temp;
}

void delete(NODE head, int pos)
{
	if(head->link==head)
	{
		printf("No elements\n");
		return ;
	}
	if(pos<=0)
	{
		delete_front(head);
		return;
	}
	int length;
	length=count(head);
	//printf("%d,%d\n",pos,length);
	if(pos>=length)
	{
		delete_rear(head);
		return;
	}
	//printf("check1\n");
	NODE temp=head,cur=head;
	while(pos--)
	{
		//printf("loopchk1");
		temp=cur;
		cur=cur->link;
	}
	printf("%d deleted \n",cur->info);
	temp->link=cur->link;
	free(cur);
}

void search(NODE head)
{
	if(head->link==head)
	{
		printf("No elements\n");
		return;
	}
	printf("Enter the search key\n");
	int key,pos=1;
	scanf("%d",&key);
	NODE cur=head->link;
	while(cur!=head)
	{
		if(cur->info==key)
		{
			printf("Key found at pos %d\n",pos);
			return;
		}
		cur=cur->link;
		pos++;
	}
	printf("Key not found\n");
	
}

int main()
{
	NODE head;
	head=getNode();
	head->link=head;
	int elem,ch,pos;
	while(1)
	{
		printf("\n\n1.InsFr\n2.InsRe\n3.DelFr\n4.Delre\n5.display\n6.count\n7.NdxIns\n8.NdxDel\n9.search\n");
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
       
        
			case 7:
			printf("Enter the element\n");
			scanf("%d",&elem);
			printf("Enter the index\n");
			scanf("%d",&pos);
			insert(head,elem,pos);
			break;
        
			case 8:
			printf("Enter the index\n");
			scanf("%d",&pos);
			delete(head,pos);
			break;

			case 9:
			search(head);
			break;
			
			default:exit(0);
		}
	}
}
