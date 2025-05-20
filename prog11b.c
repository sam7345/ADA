//B) Binomial Co-efficient 
#include<stdio.h> 
void main() 
{ 
int i,j,n,min,k,c[10][10]; 
clrscr(); 
printf("enter n and k values\n"); 
scanf("%d%d",&n,&k); 
for(i=0;i<=n;i++) 
for(j=0;j<=k;j++) 
c[i][j]=0; 
if(n>k) 
{ 
for(i=0;i<=n;i++) 
{ 
min=(i<j)?i:j; 
for(j=0;j<=min;j++) 
if(j==0||(i==j)) 
c[i][j]=1; 
else 
c[i][j]=c[i-1][j-1]+c[i-1][j]; 
} 
printf("the binomial coefficient\n"); 
for(i=0;i<n;i++) 
{ 
for(j=0;j<k;j++) 
if(i>=j) 
printf("%4d",c[i][j]); 
printf("\n"); 
} 
printf("the value of c(%d %d) is %d",n,k,c[n-1][k-1]+c[n-1][k]); 
} 
else 
printf("n must greater than k\n"); 
getch(); 
}