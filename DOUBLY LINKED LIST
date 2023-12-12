#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int data;
  struct node *next,*prev;
}NODE;

NODE* create();
void  display(NODE*);
NODE* insert (NODE*,int,int);
NODE* del (NODE*,int);
int search(NODE*,int);

int main()
{
    NODE *head=NULL;
    int ch,x,p;
    do
{     printf("\n1.create\n2.display\n3.insert\n4.Delete.\n5.Search\n6.Exit");
     printf("Enter your choice");
     scanf("%d", &ch);
     switch(ch)
      {
        case 1:head=create();               
        break;
        case 2: display(head);                
        break;
        case 3: printf("Enter data and Position");
                scanf("%d%d",&x,&p);
                head=insert(head,x,p);    
                break;
       case 4:printf("Enter node no" );
                scanf("%d",&p);
                head=del(head, p);                
                break;
      case 5: printf("Enter data to be searched");
                scanf("%d",&x);
                p=search(head,x);
                if (p>0)
                      printf("found at %d",p);
                else
                      printf("not found");        
                         break;
                  }
}while(ch!=6);
return 0;
}	NODE*  create()
{
NODE *head=NULL,*temp, *newnode;
int i, n, x;
printf("Enter no of nodes=");
 scanf("%d",&n);
for (i=1;i<=n;i++)
{
 printf("Enter data=");
 scanf("%d",&x);

 newnode=(struct node*) malloc (sizeof(struct node));
 newnode->data=x;
 newnode->next=newnode->prev=NULL;

 if(head==NULL)
     head=newnode;

 else
 {
     temp->next=newnode;
      newnode->prev=temp;
 }

 temp=newnode;
}
return  (head);
}
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int data;
  struct node *next,*prev;
}NODE;

NODE* create();
void  display(NODE*);
NODE* insert (NODE*,int,int);
NODE* del (NODE*,int);
int search(NODE*,int);

int main()
{
    NODE *head=NULL;
    int ch,x,p;
    do
{     printf("\n1.create\n2.display\n3.insert\n4.Delete.\n5.Search\n6.Exit");
     printf("Enter your choice");
     scanf("%d", &ch);
     switch(ch)
      {
        case 1:head=create();               
               break;
        case 2: display(head);                 
               break;
        case 3: printf("Enter data and Position");
                scanf("%d%d",&x,&p);
                head=insert(head,x,p);   
                break;
       case 4:printf("Enter node no" );
                scanf("%d",&p);
                head=del(head, p);                
                 break;
      case 5: printf("Enter data to be searched");
                scanf("%d",&x);
                p=search(head,x);
                if (p>0)
                      printf("found at %d",p);
                else
                      printf("not found");       
                    break;
                  }
}while(ch!=6);
return 0;
}	NODE*  create()
{
NODE *head=NULL,*temp, *newnode;
int i, n, x;
printf("Enter no of nodes=");
 scanf("%d",&n);
for (i=1;i<=n;i++)
{
 printf("Enter data=");
 scanf("%d",&x);

 newnode=(struct node*) malloc (sizeof(struct node));
 newnode->data=x;
 newnode->next=newnode->prev=NULL;

 if(head==NULL)
     head=newnode;

 else
 {
     temp->next=newnode;
      newnode->prev=temp;
 }

 temp=newnode;
}
return  (head);
}
void display (NODE *temp)
{

printf("DLL in forward direction\n") ;

 while(temp->next!=NULL)
        {
 	 printf("%d->", temp->data);
  	temp=temp->next;
       }

    printf("%d->NULL\n",temp->data);


printf("\nDLL in reverese direction\n");

while(temp!=NULL)
        {
 	 printf("%d<-", temp->data);
  	   temp=temp->prev;
       }
printf("NULL");

 }
void display (NODE *temp)
{

printf("DLL in forward direction\n") ;

 while(temp->next!=NULL)
        {
 	 printf("%d->", temp->data);
  	temp=temp->next;
       }

    printf("%d->NULL\n",temp->data);


printf("\nDLL in reverese direction\n");

while(temp!=NULL)
        {
 	 printf("%d<-", temp->data);
  	   temp=temp->prev;
       }
printf("NULL");

 }	int search(NODE *head, int x)
{

 NODE *temp;
 int c=1;
 temp=head;

 while(temp->data!=x&&temp!=NULL)
	{
	temp=temp->next;
	c++;
	}
 if(temp!=NULL)

	return (c);
 else
	return (0);
}
NODE* insert(NODE *head,int x,int p)
{
NODE *newnode,*temp=head;
int i=1;
while(i<p&&temp!=NULL)
	{
	temp=temp->next;
	i++;
	}
if(temp!=NULL)
	{
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=x;
	newnode->next=newnode->prev=NULL;
		if(p==0)
		  {
		  newnode->next=temp;
		   temp->prev=newnode;
		  head=newnode;
		  }
		else
		 {
		 newnode->next=temp->next;
		 temp->next->prev=newnode;
		 temp->next=newnode;
		 newnode->prev=temp;
		 }
	}
return(head);
}
NODE* insert(NODE *head,int x,int p)
{
NODE *newnode,*temp=head;
int i=1;
while(i<p&&temp!=NULL)
	{
	temp=temp->next;
	i++;
	}
if(temp!=NULL)
	{
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=x;
	newnode->next=newnode->prev=NULL;
		if(p==0)
		  {
		  newnode->next=temp;
		   temp->prev=newnode;
		  head=newnode;
		  }
		else
		 {
		 newnode->next=temp->next;
		 temp->next->prev=newnode;
		 temp->next=newnode;
		 newnode->prev=temp;
		 }
	}
return(head);
}	NODE* del(NODE *head,int p)
{
 NODE *temp;
 int i=1;
 temp=head;
 while(i<p && temp!=NULL)
	{

	temp=temp->next;
	i++;
	}
 if(temp!=NULL)
	{
	if(p==1)
		{
		head=head->next;
		head->prev=NULL;
		free(temp);
		}
	else
		{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
		}
	}
 else
	{
	printf("INVALID POSITION");
	}
 return(head);
}

