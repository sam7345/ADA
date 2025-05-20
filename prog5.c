//Implement 0/1 Knapsack problem using dynamic programming 
#include<stdio.h> 
#include<conio.h> 
int i,n,cap,maxprofit,w[25],p[25]; 
main() 
{ 
clrscr(); 
printf("Enter the number of objects\n"); 
scanf("%d",&n); 
printf("Enter the weights\n"); 
for(i=1;i<=n;i++) 
scanf("%d",&w[i]); 
printf("Enter the profit\n"); 
for(i=1;i<=n;i++) 
scanf("%d",&p[i]); 
printf("Enter the capacity\n"); 
scanf("%d",&cap); 
maxprofit=sack(0,cap); 
printf("Maximum profit is %d",maxprofit); 
getch(); 
} 
max(int x,int y) 
{ 
return(x>y?x:y); 
} 
sack(int i,int y) 
{ 
if(i==n) 
if(y<w[n]) 
return 0; 
else 
return p[n]; 
if(y<w[i]) 
return sack(i+1,y); 
return max(sack(i+1,y),sack(i+1,y-w[i])+p[i]); 
}