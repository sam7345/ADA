//Find a subset of a given set S = {sl,s2 ...... ,sn} of n Positive  
integers whose sum is equal to a given positive integer d.  For 
example, if S= {1, 2, 5, 6, 8} and d=9 there are two solutions {l, 
2,6}and{l,8}.A suitable message is to be displayed if the given 
//problem instance doesn't have a solution. 

#include<stdio.h> 
int w[10],i,d,n,c,x[10]; 
void so (int s,int k,int r) 
{ 
x[k]=1; 
if(s+w[k]==d) 
{ 
printf("\nsubset %d=",++c); 
for(i=0;i<=k;i++) 
if(x[i]) 
printf("%d",w[i]); 
} 
else 
if(s+w[k]+w[k+1]<=d) 
so(s+w[k],k+1,r-w[k]); 
if((s+r-w[k]>=d)&&(s+w[k+1]<=d)) 
{ 
x[k]=0; 
so(s,k+1,r-w[k]); 
} 
} 
void main() 
{ 
int su=0,k; 
clrscr(); 
printf("enter the number of elements");
scanf("%d",&n); 
printf("enter the elements in ascending order\n"); 
for(i=0;i<n;i++) 
scanf("%d",&w[i]); 
printf("enter the sum\n"); 
scanf("%d",&d); 
for(i=0;i<=n;i++) 
x[i]=0; 
for(i=0;i<n;i++) 
su=su+w[i]; 
if(su<d||w[0]>d) 
printf("the number of subset possible are\n"); 
else 
so(0,0,su); 
getch(); 
}