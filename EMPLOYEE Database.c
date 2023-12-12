
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#define MAX 100
typedef struct employee
{
int id;
char name[20];
int age;
}emp;
emp e[MAX];
int n;
void create();
void display();
void modify();
void append();
void search();
void sort();
int main()
{
int choice;
while(1)
 {
 printf("\n1.Create\n2.Display\n3.Modify\n4.Append\n5.Search\n6.Sort\n7.EXIT");
 printf("\nEnter Your Choice:");
 scanf("%d",&choice);
 switch (choice)
{
case 1:create();
break;
case 2:display();
break;
case 3:modify();
break;
case 4:append();
break;
case 5:search();
break;
case 6:sort();
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
printf("Enter ID no.,Name,Age:");
scanf("%d%s%d",&e[i].id,e[i].name,&e[i].age);
}
}
void display()
{
int i;
printf("ID\tNAME\tAGE");
for(i=0;i<n;i++)
{
printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].age);
}
}
void modify()
{
int rec,id_new,age_new;
char name_new[20];
printf("Enter The Record No. To be Modified:");
scanf("%d",&rec);
rec--;
printf("Enter new Name:");
scanf("%s",name_new);
printf("Enter new Age:");
scanf("%d",&age_new);
printf("Enter new id:");
scanf("%d",&id_new);
e[rec].id=id_new;
e[rec].age=age_new;
strcpy(e[rec].name,name_new);
display();
}
void append()
{
int rec,m,i;
printf("Enter no. of Records To be Appended:");
scanf("%d",&rec);
m=n+rec;
for(i=n;i<m;i++)
{
printf("Enter ID NAME AGE of Employee:");
scanf("%d%s%d",&e[i].id,e[i].name,&e[i].age);
}
n=m;
display();
}
void search()
{
int id,i,flag=0;
printf("Enter the ID of Employee:");
scanf("%d",&id);
for(i=0;i<n;i++)
{
if(e[i].id==id)
{
printf("\nRecord is Found!!");
printf("\nDetails of Employee are as follows\nID\tNAME\tAGE");
printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].age);
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
emp temp;
int i,j;
for(i=0;i<=n-2;i++)
{
for(j=i+1;j<=n-1;j++)
{
if(e[i].id>e[j].id)
{
temp=e[i];
e[i]=e[j];
e[j]=temp;
}
}
}
printf("SORTED LIST IS AS FOLLOWS\n");
display();
}
/*OUTPUT:
1.Create
2.Display
3.Modify
