#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int str_len_ptr(char*);
void str_copy_ptr(char*,char*);
void str_rev_ptr(char*,char*);
int compare(char*, char*);
void str_substr(char*, char*);
void str_cat_ptr(char*,char*);
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
 int len=str_len_ptr(&str1);
 printf("length of string is=%d",len);
 break;
 case 2:
 printf("Enter first string\n");
 scanf("%s",str1);
 str_copy_ptr(&str2,&str1);
 printf("copied string is=%s",str2);
 break;
 case 3:
 printf("Enter first string\n");
 scanf("%s",str1);
 str_rev_ptr(&str2,&str1);
 printf("reversed string is=%s",str2);
 break;
 case 4:
 printf("Enter first string\n");
 scanf("%s",str1);
 printf("Enter second string\n");
 scanf("%s",str2);
 //flag=str_cmp(str1,str2);
 flag=compare(&str1, &str2);
 if(flag==0)
 printf("Both strings are not equal");
 else
 printf("Both strings are equal");
 break;
 case 5:
 printf("Enter first string\n");
 scanf("%s",str1);
 str_substr(&str1,&str2);
 break;
 case 6:
 printf("Enter first string\n");
 scanf("%s",str1);
 str_copy_ptr(&str2,&str1);
 str_rev_ptr(&str3,&str1);
 if(compare(str2,str3)==0)
 printf("\nThe string is not palindrome");
 else
 printf("\nThe string is palindrome");
 break;
 case 7:
 printf("Enter first string\n");
 scanf("%s",str1);
 printf("Enter second string\n");
 scanf("%s",str2);
 str_cat_ptr(&str1,&str2);
 break;
 }
 return 0;
}
int str_len_ptr(char *ptr)
{
 int count=0,i;
 for(i=0; *ptr!='\0';i++)
 {
 count++;
 ptr++;
 }
 return count;
}
void str_copy_ptr(char *op,char *ip)
{
 int count=0,i;
 for(i=0; *ip!='\0';i++)
 {
 *op++=*ip++;
 }
 *op='\0';
}
void str_rev_ptr(char *op,char *ip)
{
 int i,j=0,n;
 n=str_len_ptr(ip);
 for(i=n-1;i>=0;i--)
 {
 //*(op+j)=*(ip+i);
 *op++=*(ip+i);
 j++;
 }
 *(op+j)='\0';
}
int compare(char *ip, char *op)
{
int i;
for (i = 0; *ip!='\0'; i++)
{
if (*ip++ != *op++) //if mismatch
 {
 return 0;
 }
}
return 1;
}
void str_substr(char *ip, char *op)
{
int len, position,i,j=0,k;
len=str_len_ptr(ip);
printf("Enter position=");
scanf("%d",&position);
for (i=0; i<len-position;i++)
{
 k=position+i;
 *(op+j)=*(ip+k);
 j++;
}
op[j]='\0';
printf("Substring is %s", op);
}
void str_cat_ptr(char *ip,char *op)
{
 int i,j;
 for(i=0;*(ip+i)!='\0';i++);
 for(j=0;*(op+j)!='\0';j++)
 {
 *(ip+i)=*(op+j);
 i++;
 }
 *(ip+i)='\0';
 printf("After concatenation string is = %s", ip);
}
