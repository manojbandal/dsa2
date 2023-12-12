/*Singly linked List*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}NODE;
NODE* create();
void display(NODE*);
NODE* insert(NODE*,int,int);
NODE* del(NODE*,int);
void search(NODE*,int);
int main()
{
NODE *head=NULL;
int choice,p,x;
while(1)
{
printf("\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Search\n6.Exit\nENTER YOUR
CHOICE:");
scanf("%d",&choice);
switch(choice)
{
case 1: head=create();
break;
case 2: display(head);
break;
case 3: printf("\nEnter Data and Position:");
scanf("%d%d",&x,&p);
head=insert(head,x,p);
display(head);
break;
case 4: printf("Enter Node no. To be Deleted:");
scanf("%d",&p);
head=del(head,p);
display(head);
break;
case 5: printf("Enter No. To be Searched");
scanf("%d",&x);
search(head,x);
break;
default:exit(0);
}
}
return 0;
}
NODE* create()
{ NODE *head,*temp,*newnode;
int i,n,x;
head=NULL;
printf("\nEnter How Many No.s=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ printf("\nEnter Data:");
scanf("%d",&x);
newnode=(NODE*)malloc(sizeof(NODE));
newnode->data=x;
newnode->next=NULL;
if(head==NULL)
{ head=newnode;
}
else
{ temp->next=newnode;
}
temp=newnode;
}
return(head);
}
void display(NODE *temp)
{ while(temp!=NULL)
{ printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL");
}
NODE* insert(NODE *head1,int x,int p)
{ NODE *newnode,*temp=head1;
int i=1;
while(i<p&&temp!=NULL)
{ temp=temp->next; i++;
}
if(temp!=NULL)
{ newnode=(NODE*)malloc(sizeof(NODE));
 newnode->data=x;
if(p==0)
 { newnode->next=head1;
 head1=newnode;
 }
else { newnode->next=temp->next;
 temp->next=newnode;
}
} return(head1);
}
NODE* del(NODE *head1,int p)
{ NODE *temp,*prev;
int i=1;
temp=head1;
while(i<p&&temp!=NULL)
{ prev=temp;
temp=temp->next;
i++;
}
if(temp!=NULL)
{ if(p==1)
{
head1=head1->next;
free(temp);
}
else {
prev->next=temp->next;
free(temp);
}
}
else {
printf("INVALID POSITION");
}
return(head1);
}
void search(NODE *head1,int x)
{
NODE *temp;
int c=1;
temp=head1;
while(temp->data!=x&&temp!=NULL)
{
temp=temp->next;
c++;
}
if(temp!=NULL)
{
printf("No. is Found at Location %d",c);
}
else
{
printf("No. is Not Found:");
}
}
