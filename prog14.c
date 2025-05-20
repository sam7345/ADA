//Implement N Queen's problem using Back Tracking. 
#include<stdio.h> 
int s[50][50]; 
void dis(int m[],int n) 
{ 
register int i,j; 
for(i=0;i<n;i++) 
s[i][m[i]]=1; 
for(i=0;i<n;i++) 
{ 
for(j=0;j<n;j++) 
if(s[i][j]) 
printf("Q"); 
else 
printf("X"); 
printf("\n"); 
}
getch(); 
exit(1); 
} 
int place(int m[],int k) 
{ 
int i; 
for(i=0;i<k;i++) 
if(m[i]==m[k]||(abs(m[i]-m[k])==abs(i-k))) 
return 0; 
return 1; 
} 
void main() 
{ 
int m[25],n,k; 
clrscr(); 
printf("Enter the number of QUEENS\n"); 
scanf("%d",&n); 
if(n==2||n==3) 
printf("NO SOLUTION\n"); 
else 
printf("The solution are\n"); 
n--; 
for(m[0]=0,k=0;k>=0;m[k]+=1) 
{ 
while(m[k]<=n&&!place(m,k)) 
m[k]+=1; 
if(m[k]<=n) 
if(k==n) 
dis(m,n+1); 
else 
k++,m[k]=-1; 
else 
k--; 
} 
getch(); 
} 