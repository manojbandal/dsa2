


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}NODE;
NODE *front=NULL;
NODE *rear=NULL;
void insertq(int);
void delq();
void main()
{
int choice,x;
do
{
printf("1.Insert\t2.Delete\t3.Exit");
printf("\nEnter Choice=");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter data=");
       scanf("%d",&x);
       insertq(x);
       break;
case 2:delq();
       break;
default:exit(0);
}
}
while(choice!=3);
getch();
}

void insertq(int x)
{
NODE *ptr;
ptr=(NODE*)malloc(sizeof(NODE));
if(ptr==NULL)
printf("Insufficient memory.");
else
{
ptr->data=x;
ptr->next=NULL;
if(rear==NULL)
front=rear=ptr;
else
{
rear->next=ptr;
rear=ptr;
}
}
}

void delq()
{
int x;
NODE *temp;
temp=front;
if(temp==NULL)
printf("Queue is empty.");
else
{
x=temp->data;
front=front->next;
free(temp);
printf("%d",x);
}
}
