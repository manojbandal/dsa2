#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#define MAX 100
typedef struct student
{
int rollno;
char name[20];
int marks;
 float percent;
}
st;
st e[MAX];
int n;
void create();
void display();
void search();
void sort();
int main()
{
int choice;
while(1)
 {
 printf("\n1.Create\n2.Display\n3.Search\n4.Sort\n7.EXIT");
 printf("\nEnter Your Choice:");
 scanf("%d",&choice);
 switch (choice)
{
case 1:create();
break;
case 2:display();
break;
case 3:search();
break;
case 4:sort();
break;
default:exit(0);
}
 }
getch();
}
void create()
{
int i;
printf("Enter The No. of New Records to Be Created:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter rollno no.,Name,marks,percentage:");
scanf("%d%s%d%f",&e[i].rollno,e[i].name,&e[i].marks,&e[i].percent);
}
}
void display()
{
int i;
printf("rollno\tNAME\tmarks\tpercentage");
for(i=0;i<n;i++)
{
printf("\n%d\t%s\t%d\t%f",e[i].rollno,e[i].name,e[i].marks,e[i].percent);
}
}
void search()
{
int rollno,i,flag=0;
printf("Enter the rollno of student:");
scanf("%d",&rollno);
for(i=0;i<n;i++)
{
if(e[i].rollno==rollno)
{
printf("\nRecord is Found!!");
printf("\nDetails of student are as follows\nrollno\tNAME\tmarks\tpercentage");
printf("\n%d\t%s\t%d\t%f",e[i].rollno,e[i].name,e[i].marks,e[i].percent);
flag=1;
break;
}
}
if(flag==0)
{
printf("\nRECORD NOT FOUND");
}
}
void sort()
{
st tst;
int i,j;
for(i=0;i<=n-2;i++)
{
for(j=i+1;j<=n-1;j++)
{
if(e[i].percent<e[j].percent)
{
tst=e[i];
e[i]=e[j];
e[j]=tst;
}
}
}
printf("SORTED LIST IS AS FOLLOWS\n");
display();
}
