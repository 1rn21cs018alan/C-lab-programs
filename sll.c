#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node * link;
};

typedef struct node * NODE;

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

NODE insert_front(NODE first,int elem)
{
	NODE temp;
	temp=getNode();
	temp->info=elem;
	temp->link=first;
	return temp;
}

NODE delete_front(NODE first)
{
	if(first==NULL)
	{
		printf("No elements\n");
		return NULL;
	}
	printf("%d deleted\n",first->info);
	NODE temp=first->link;
	free(first);
	return temp;
}


NODE insert_rear(NODE first,int elem)
{
	NODE temp;
	temp=getNode();
	temp->info=elem;
	temp->link=NULL;
	if(first==NULL)
	{
		return temp;
	}
	NODE cur=first;
	while(cur->link!=NULL)
	{
		cur=cur->link;
	}
	cur->link=temp;
	return first;
}

NODE delete_rear(NODE first)
{
	if(first==NULL)
	{
		printf("No elements\n");
		return NULL;
	}
	if(first->link==NULL)
	{
		printf("%d deleted\n",first->info);
		free(first);
		return NULL;
	}	
	NODE cur=first,prev=first;
	while(cur->link!=NULL)
	{
		prev=cur;
		cur=cur->link;
	}
	printf("%d deleted\n",cur->info);
	prev->link=NULL;
	free(cur);
	return first;
}

void display(NODE first)
{
	if(first==NULL)
	{
		printf("No elements\n");
		return;
	}
	NODE cur=first;
	printf("Elements of SLL are \n");
	while(cur!=NULL)
	{
		printf("%d\n",cur->info);
		cur=cur->link;
	}

}

int count(NODE first)
{
	int count=0;
	NODE cur=first;
	while(cur!=NULL)
	{
		count++;
		cur=cur->link;
	}
	return count;
}

NODE copy(NODE first)
{
	NODE cur=first,second=NULL;
	while(cur!=NULL)
	{
		second=insert_rear(second,cur->info);
		cur=cur->link;
	}
	return second;
}

NODE concat(NODE first, NODE second)
{
	NODE cur=first,merge=NULL;
	while(cur!=NULL)
	{
		merge=insert_rear(merge,cur->info);
		cur=cur->link;
	}
	cur=second;
	while(cur!=NULL)
	{
		merge=insert_rear(merge,cur->info);
		cur=cur->link;
	}
	return merge;
}

NODE clear(NODE first)
{
	NODE prev,cur=first;
	while(cur!=NULL)
	{
		prev=cur;
		cur=cur->link;
		free(prev);
	}
	return NULL;
}

void search(NODE first)
{
	if(first==NULL)
	{
		printf("No elements\n");
		return;
	}
	printf("Enter the search value\n");
	int key,count=0;
	scanf("%d",&key);
	NODE cur=first;
	while(cur!=NULL)
	{
		count++;
		if(key==cur->info)
		{
			printf("element found at pos %d\n",count);
			return;
		}
		cur=cur->link;
	}
	printf("Element not found\n");
}

NODE insert(NODE first,int elem, int pos)
{
	if(pos<=0)
		return insert_front(first,elem);
	if(first==NULL)
		return insert_front(first,elem);
	int length=count(first);
	printf("%d,%d\n",pos,length);
	if(pos>=length)
		return insert_rear(first,elem);
	printf("check1\n");
	NODE temp,cur=first;
	temp=getNode();
	temp->info=elem;
	while(pos>1)
	{
		pos--;
		cur=cur->link;
	}
	printf("check1-%d\n",cur->info);
	temp->link=cur->link;
	cur->link=temp;
	return first;
}

int main()
{
  NODE first=NULL,second,third;
  int elem,ch,pos;
  while(1)
  {
     printf("\n\n1.InsFr\n2.InsRe\n3.DelFr\n4.Delre\n5.display\n6.count\n7.copy\n8.concat\n-1.Clear SLL\n");
     printf("9.Search\n");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:
        printf("Enter the element\n");
        scanf("%d",&elem);
        first=insert_front(first,elem);
        break;
        
        case 2:
        printf("Enter the element\n");
        scanf("%d",&elem);
        first = insert_rear(first,elem);
        break;
        
        case 3:
        first=delete_front(first);
        break;
        
        case 4:
        first=delete_rear(first);
        break;
        
        case 5:
        display(first);
        break;     
        
        case 6:
        printf("length = %d",count(first));
        break; 
        
        case 7:
		second=copy(first);
		display(second);
        break;
        
        case 8:
        third=concat(first,second);
        display(third);
        break;
        
        case 9:
        search(first);
        break;
        
        case 10:
        printf("Enter the element\n");
        scanf("%d",&elem);
        printf("Enter the index\n");
        scanf("%d",&pos);
        first=insert(first,elem,pos);
        break;
        
        case -1:
        first=clear(first);
        break;
        default:
        exit(0);
      }
   }
}
       

































































