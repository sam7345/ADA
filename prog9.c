//a) Print all the nodes reachable from a given starting node in a digraph using BFS method. 
#include<stdio.h> 
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1,t; 
void bfs(int v) 
{ 
for(i=1;i<=n;i++) 
if(a[v][i]&&!visited[i]) 
q[++r]=i; 
if(f<=r) 
visited[q[f]]=1,bfs(q[f++]); 
} 
void main() 
{ 
int v; 
clrscr(); 
printf("enter the no of vertices\n"); 
scanf("%d",&n); 
for(i=1;i<=n;i++) 
q[i]=0,visited[i]=0;
printf("enter the adjacency matrix\n"); 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++) 
scanf("%d",&a[i][j]); 
printf("enter the starting vertex\n"); 
scanf("%d",&v); 
bfs(v); 
printf("the nodes which are reachable\n"); 
for(i=1;i<=n;i++) 
if(visited[i]) 
printf("%d\n",i); 
getch(); 
}