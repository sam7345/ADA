//B) DFS METHOD  
#include<stdio.h> 
int a[20][20],vis[20],n,i,s,l[10],lab=0,k,j; 
void init() 
{ 
for(i=1;i<=n;i++) 
vis[i]=0; 
l[i]=0; 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++) 
a[i][j]=0; 
} 
void getdata() 
{ 
printf("enter the adjacency matrix\n"); 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++) 
scanf("%d",&a[i][j]); 
} 
void dfs(int v) 
{ 
vis[v]=1; 
l[v]=lab; 
for(i=1;i<=n;i++) 
if(a[v][i]&&vis[i]==0)\ 
dfs(i); 
}
void clab() 
{ 
int i; 
for(i=1;i<=n;i++) 
if(l[i]==0) 
{ 
lab++; 
for(k=1;k<=n;k++) 
vis[i]=0; 
dfs(i); 
} 
if(lab>1) 
printf("disconnected graph\n"); 
else 
printf("connected graph\n"); 
printf("\n No of components %d\n",lab); 
for(i=1;i<=n;i++) 
printf("\n vertex %d belongs to component=%d",i,l[i]); 
} 
void main() 
{ 
clrscr(); 
printf("enter the no of vertices\n"); 
scanf("%d",&n); 
init(); 
getdata(); 
clab(); 
getch(); 
} 