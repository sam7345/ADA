//b. Compute the transitive closure of a given directed graph using 
Wars hall’s algorithm.
#include<stdio.h> 
void w(int c[10][10],int n) 
{ 
int i,j,k; 
for(k=1;k<=n;k++) 
for(i=1;i<=n;i++) 
if(c[i][k]==1) 
for(j=1;j<=n;j++) 
c[i][j]=c[i][j]||c[k][j]; 
} 
void main() 
{ 
int c[10][10],i,j,n; 
clrscr(); 
printf("Enter vertices\n"); 
scanf("%d",&n); 
printf("Enter adjacency matrix\n"); 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++) 
scanf("%d",&c[i][j]); 
w(c,n); 
printf("PATH MATRIX\n"); 
for(i=1;i<=n;i++) 
{ 
for(j=1;j<=n;j++) 
printf("%d\t",c[i][j]); 
printf("\n"); 
} 
getch(); 
}