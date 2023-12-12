#include<stdio.h>
#include<conio.h>
#define MAX 10
typedef struct poly
{ int coeff;
int power;
}POLY;
void main()
{
int m,n,i,j,k;
POLY pa[MAX],pb[MAX],pc[MAX];
printf("Enter number of terms of first polynomial=");
scanf("%d",&m);
printf("Coefficient and Power of first polynomial=");
for(i=0;i<m;i++)
scanf("%d%d",&pa[i].coeff,&pa[i].power);
printf("First polynomial=");
for(i=0;i<m-1;i++)
{
printf("%dx^%d+",pa[i].coeff,pa[i].power);
}
if(pa[i].power==0)
printf("%d",pa[i].coeff);
else
printf("%dx^%d",pa[i].coeff,pa[i].power);
printf("\nEnter number of terms of second polynomial=");
scanf("%d",&n);
printf("Coefficient and Power of second polynomial=");
for(i=0;i<n;i++)
scanf("%d%d",&pb[i].coeff,&pb[i].power);
printf("Second polynomial=");
for(i=0;i<n-1;i++)
{
printf("%dx^%d+",pb[i].coeff,pb[i].power);
}
if(pb[i].power==0)
printf("%d",pb[i].coeff);
else
printf("%dx^%d",pb[i].coeff,pb[i].power);
i=0;j=0;k=0;
while(i<m&&j<n)
{
if(pa[i].power==pb[j].power)
{
pc[k].coeff=pa[i].coeff+pb[j].coeff;
pc[k].power=pa[i].power;
i++;j++;k++;
}
else
{
if(pa[i].power>pb[j].power)
{
pc[k]=pa[i];
i++;k++;
}
else
{
pc[k]=pb[j]+;
j++;k++;
}
}
}
while(i<m)
{
pc[k]=pa[i];
i++;k++;
}
while(j<n)
{
 pc[k]=pb[i];
 j++;k++;
}
printf("\nAddition of two polynomial=");
for(i=0;i<k-1;i++)
{
printf("%dx^%d+",pc[i].coeff,pc[i].power);
}
if(pc[i].power==0)
printf("%d",pc[i].coeff);
else
printf("%dx^%d",pc[i].coeff,pc[i].power);
getch();
}
