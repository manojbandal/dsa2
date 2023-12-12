
#include<stdio.h>
#include<conio.h>
#include<string.h>
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
int search(NODE*, int );
void main()
{
    int choise,x,s;
    NODE *root;
    while(1)
    {
        printf("1.Create\n2.Inorder\n3.Preoder\n4.Postoreder\n5.Search\n6.Exit");
        printf("\nEnter your choise:");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1: root=create();
                    break;
            case 2: inorder(root);
                    break;
            case 3: preorder(root);
                    break;
            case 4: postorder(root);
                    break;
            case 5: printf("Enter number to be searched:");
                    scanf("%d",&s);
                    x=search(root,s);
                    if(x==1)
                    {
                        printf("Number is found");
                    }
                    else
                    {
                        printf("Number is not in tree");
                    }
                    break;
            case 6: exit(0);
                    break;
        }
    }while(choise!=6);
}
NODE* create()
{
    int x,i,n;
    NODE *root1,*ptr,*temp,*prev;
    root1=NULL;
    printf("How many Elements?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n Enter the number");
        scanf("%d",&x);
        ptr=(NODE*)malloc(sizeof(NODE));
        ptr->data=x;
        ptr->lchild=ptr->rchild=NULL;
        if(root1==NULL)
        {
        root1=ptr;
        }
        else
        {
            temp=root1;
            while(temp!=NULL)
            {
                prev=temp;
                if(temp->data>x)
                {
                    temp=temp->lchild;

                }
                else
                {
                    temp=temp->rchild;

                }
            }
            if(prev -> data > x)
            {
                prev->lchild=ptr;
            }
            else
            {
                prev->rchild=ptr;
            }
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
    temp = root1;
    while(temp!=NULL&&temp->data!=x)
    {
        if(temp->data>x)
        {
            temp=temp->lchild;
        }
        else
        {
            temp=temp->rchild;
        }
    }
    if(temp!=NULL)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
OUTPUT:
1.Create
2.Inorder
3.Preoder
4.Postoreder
5.Search
6.Exit
Enter your choise:1
How many Elements?4

 Enter the number4

 Enter the number9

 Enter the number7

 Enter the number2
1.Create
2.Inorder
3.Preoder
4.Postoreder
5.Search
6.Exit
Enter your choise:2
2
4
7
9
1.Create
2.Inorder
3.Preoder
4.Postoreder
5.Search
6.Exit
Enter your choise:3
4
2
9
7
1.Create
2.Inorder
3.Preoder
4.Postoreder
5.Search
6.Exit
Enter your choise:4
2
7
9
4
1.Create
2.Inorder
3.Preoder
4.Postoreder
5.Search
6.Exit
Enter your choise:5
Enter number to be searched:9
Number is found
