#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int str_length(char[]);
void str_copy(char str2[],char str1[]);
void str_rev(char str2[],char str1[]);
int str_cmp(char str1[],char str2[]);
void str_substr(char str1[], char str2[]);
void str_cat(char str1[],char str2[]);
int main()
{
char str1[10], str2[10],str3[10];
 int len,choice,flag;
 printf("Enter Choice 1-Length, 2-Copy, 3-Reverse,4-Compare,5- substring,6-Palindrome,7-
Concatenation\n");
 printf("Enter choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 printf("Enter first string\n");
 scanf("%s",str1);
 len=str_length(str1);
 printf("length of string is=%d",len);
 break;
 case 2:
 printf("Enter first string\n");
 scanf("%s",str1);
 str_copy(str2,str1);
 printf("copied string is=%s",str2);
 break;
 case 3:
 printf("Enter first string\n");
 scanf("%s",str1);
 str_rev(str2,str1);
 printf("reversed string is=%s",str2);
 break;
 case 4:
 printf("Enter first string\n");
 scanf("%s",str1);
 printf("Enter second string\n");
 scanf("%s",str2);
 flag=str_cmp(str1,str2);
 if(flag==0)
 printf("Both strings are equal");
 else
 printf("Both strings are not equal");
 break;
 case 5:
 printf("Enter first string\n");
 scanf("%s",str1);
 str_substr(str1,str2);
 break;
 case 6:
 printf("Enter first string\n");
 scanf("%s",str1);
 str_copy(str2,str1);
 str_rev(str3,str1);
 if(str_cmp(str2,str3)==0)
 printf("\nThe string is palindrome");
 else
 printf("\nThe string is not palindrome");
 break;
 case 7:
 printf("Enter first string\n");
 scanf("%s",str1);
 printf("Enter second string\n");
 scanf("%s",str2);
 str_cat(str1,str2);
 printf("concatenated string is=%s",str1);
 break;
 }
 return 0;
}
int str_length(char str1[])
{
 int i, count=0;
 for (i=0;str1[i]!='\0';i++);
 //count=count+1;
 return i;
}
void str_copy(char str2[],char str1[])
{
 int i,j=0;
 for(i=0;str1[i]!='\0';i++)
 {
 str2[j]=str1[i];
 j=j+1;
 }
 str2[j]='\0';
}
void str_rev(char str2[],char str1[])
{
 int i,j=0,n;
 n=str_length(str1);
 for(i=n-1;i>=0;i--)
 {
 str2[j]=str1[i];
 j=j+1;
 }
 str2[j]='\0';
}
int str_cmp(char str1[],char str2[])
{
 int i=0,j=0,flag=0;
 for(i=0;str1[i]!='\0';i++)
 {
 if (str1[i]==str2[j])
 j=j+1;
 else
 {
 flag=1;
 break;
 }
 }
 if(flag==1)
 return 1;
 else
 return 0;
}
void str_substr(char str1[], char str2[])
{
int len, position,i,j=0;
len=str_length(str1);
printf("Enter position=");
scanf("%d",&position);
for (i=0; i<len-position;i++)
{
 str2[j]=str1[position+i];
 j=j+1;
}
str2[j]='\0';
printf("Substring is %s", str2);
}
void str_cat(char str1[],char str2[])
{
 int i,j;
 for(i=0;str1[i]!='\0';i++);
 for(j=0;str2[j]!='\0';j++)
 {
 str1[i++]=str2[j];
 }
 str1[i]='\0';
}
