
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
	{
	int data;
	struct node *lchild,*rchild;
	}NODE;
NODE* create();
void inorder(NODE*);
void preorder(NODE*);
void postorder(NODE*);
int search(NODE*,int);

void main()
{
int choice, x, s;
NODE *root;
clrscr();
do
	{
	printf("\n 1.Create \n 2.Inorder \n 3.Preorder \n 4.Postorder \n 5.Search \n 6.Exit \n");
	printf("enter choice=");
	switch(choice)
		{
		case 1:root=create();
		break;
		case 2:inorder(root);
		break;
		case 3:preorder(root);
		break;
		case 4:postorder(root);
		break;
		case 5:printf("Enter no. to be searched=");
		scanf("%d",&s);
		if(x==1)
			printf("no is found");
		else
			printf("no is not in tree");
		default:exit(0);
		}
	}while(choice!=6);
getch();
}

NODE* create()
{
int x,i,n,flag;
NODE *root1,*ptr,*temp,*prev;
root1=NULL;
printf("\n How many elements?");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n Enter the no=");
scanf("%d",&x);
ptr=(NODE*)malloc(sizeof(NODE));
ptr->data=x;
ptr->lchild=ptr->rchild=NULL;
if(root1==NULL)
root1=ptr;
else
{
temp=root1;
while(temp!=NULL)
{
prev=temp;
if(temp->data>x)
{
temp=temp->lchild;
flag=0;
}
else
{
temp=temp->rchild;
flag=0;
}
}
if(flag==1)
prev->lchild=ptr;
else
prev->rchild=ptr;
}
}
return(root1);
}

void inorder(NODE *temp)
{
if(temp!=NULL)
{
inorder(temp->lchild);
printf("%d\n",temp->data);
inorder(temp->rchild);
}
}

void preorder(NODE *temp)
{
if(temp!=NULL)
{
printf("%d\n",temp->data);
preorder(temp->lchild);
preorder(temp->rchild);
}
}

void postorder(NODE *temp)
{
if(temp!=NULL)
{
postorder(temp->lchild);
postorder(temp->rchild);
printf("%d\n",temp->data);
}
}

int search(NODE *root1,int x)
{
NODE *temp;
temp=root1;
while(temp!=NULL&&temp->data!=x)
{
if(temp->data>x)
temp=temp->lchild;
else
temp=temp->rchild;
}
if(temp!=NULL)
return(1);
else
return(0);
}

