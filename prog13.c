//a. Implement Floyd’s algorithm for the All-Pairs- Shortest-Paths 
Problem. 
#include<stdio.h> 
#include<conio.h> 
int i,n,j,k,b[10][10]; 
void f() 
{ 
for(k=1;k<=n;k++) 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++) 
if(b[i][k]+b[k][j]<b[i][j]) 
b[i][j]=b[i][k]+b[k][j]; 
} 
main() 
{ 
clrscr(); 
printf("Enter size\n"); 
scanf("%d",&n); 
printf("Enter graph data\n"); 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++) 
scanf("%d",&b[i][j]); 
f(); 
for(i=1;i<=n;i++) 
b[i][j]=0; 
printf("The shortest path\n"); 
for(i=1;i<=n;i++) 
{ 
for(j=1;j<=n;j++) 
printf("\t%d",b[i][j]);
printf("\n"); 
} 
getch(); 
} 