
#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int g[MAX][MAX];
int n;
int q[MAX], front=-1, rear=-1;
int visited[MAX];

void creategraph();
void dfs(int);
void bfs(int);
void disp();

void main()
{
int op, i;
while(1)
{
printf("\n1.Create\n2.Display\n3.DFS\n4.BFS\n5.Exit\n");
printf("Enter your choice=");
scanf("%d", &op);
for(i=0;i<n;i++)
visited[i]=0;
switch(op)
{
case 1: creategraph();
	break;
case 2: disp();
	break;
case 3: dfs(0);
	break;
case 4: bfs(0);
	break;
default: exit(0);
}
}
}

void creategraph()
{
char type, ch;
int v1, v2;
printf("\nNumber of Vertices=");
scanf("%d", &n);
printf("\nEnter the type of graph(u/d)=");
type=getch();

do
{
printf("\nEnter Edge=");
scanf("%d%d",&v1,&v2);
g[v1][v2]=1;
if(type=='u'||type=='U');
g[v2][v1]=1;
printf("Do you want to continue?(y/n)");
ch=getch();
}while(ch=='y'||ch=='Y');
}

void disp()
{
int i,j;
printf("\nAdjacency matrix is\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d",g[i][j]);
printf("\n");
}
}

void dfs(int v1)
{
int v2;
printf("\n%d",v1);
visited[v1]=1;
for(v2=0;v2<n;v2++)
{
if(g[v1][v2]==1&&visited[v2]==0)
dfs(v2);
}
}

void bfs(int v1)
{
int v2;
rear++;
q[rear]=v1;
visited[v1]=1;
while(front!=rear)
{
front++;
v2=q[front];
printf("\n%d",v2);
for(v1=0;v1<n;v1++)
{
if(g[v2][v1]==1&&visited[v1]==0)
{
rear++;
q[rear]=v1;
visited[v1]=1;
}
}
}
}
