#include<stdio.h>
#include<conio.h>
#define MAX 20
int stk[MAX];
int top=-1;
void push(int);
int pop();
void main()
{
char expr[40];
int i,op1,op2,result;
printf("\n enter expression");
gets(expr);
for(i=0;expr[i]!='\0';i++)
{
if(isdigit(expr[i]))
push(expr[i]-48);
else
{
op2=pop();
op1=pop();
switch(expr[i])
{
case'+':push(op1+op2);
break;
case'-':push(op1-op2);
break;
case'*':push(op1*op2);
break;
case'^':push(op1^op2);
break;
case'/':push(op1/op2);
break;
}
}
}
result=pop();
printf("result is %d",result);
getch();
}
void push(int x)
{
if(top==MAX-1)
printf("stack is full");
else
{
top++;
stk[top]=x;
}
}
int pop()
{
int x;
if(top==-1)
{
printf("\n stack is empty");
return(-9999);
}
else
{
x=stk[top],top--;
return(x);
}
}
