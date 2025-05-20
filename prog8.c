//Find Minimum Cost Spanning Tree of a given undirected graph using Kruskal's algorithm. 
#include<stdio.h> 
#include<conio.h> 
int min,n_0_ed=1; 
int mincost=0,parent[10],cost[10][10];
int a,b,i,j,u,v,n; 
main() 
{ 
clrscr(); 
printf("\n enter the no of vertices\n"); 
scanf("%d",&n); 
printf("enter cost matrix\n"); 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++) 
{ 
scanf("%d",&cost[i][j]); 
if(cost[i][j]==0) 
cost[i][j]=999; 
} 
while(n_0_ed<n) 
{ 
for(i=1,min=999;i<n;i++) 
for(j=1;j<=n;j++) 
if(cost[i][j]<min) 
{ 
min=cost[i][j]; 
a=u=i; 
b=v=j; 
} 
while(parent[u]) 
u=parent[u]; 
while(parent[v]) 
v=parent[v]; 
if(u!=v)
{ 
n_0_ed++; 
printf("\n %d \t Edge \t(%d->%d)=%d",n_0_ed,a,b,min); 
mincost+=min; 
parent[v]=u; 
} 
cost[a][b]=cost[b][a]=999; 
printf("\n \t mincost=%d",mincost); 
} 
getch(); 
} 