//From a given vertex in a weighted connected graph, find shortest paths to other vertices using Dijkstra's algorithm. 
#include<stdio.h> 
#include<conio.h> 
main() 
{ 
int n,i,j,cost[10][10],dist[10],v; 
clrscr(); 
printf("enter the number of nodes\n"); 
scanf("%d",&n); 
printf("enter the cost of matrix\n"); 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++) 
{ 
scanf("%d",&cost[i][j]); 
if(cost[i][j]==0) 
cost[i][j]=999; 
} 
printf("enter the source vertex\n"); 
scanf("%d",&v); 
dij(n,v,cost,dist); 
printf("shortest path from\n"); 
for(j=1;j<=n;j++) 
if(j!=v) 
printf("%d->%d_%d\n",v,j,dist[j]); 
getch();
} 
dij(int n,int v,int cost[10][10],int dist[]) 
{ 
int i,u,c,w,min,f[10]; 
for(i=1;i<=n;i++) 
{ 
f[i]=0; 
dist[i]=cost[v][i]; 
} 
f[v]=1; 
dist[v]=1; 
c=2; 
while(c<=n) 
{ 
min=999; 
for(w=1;w<=n;w++) 
if(dist[w]<min&&!f[w]) 
{ 
min=dist[w]; 
u=w; 
} 
f[u]=1; 
c++; 
for(w=1;w<=n;w++) 
if((dist[u]+cost[u][w]<dist[w])&&!f[w]) 
dist[w]=dist[v]+cost[u][w]; 
} 
}