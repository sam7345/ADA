//Sort a given set of elements using Selection sort and determine the time required to sort elements. 
#include<stdio.h> 
#include<conio.h> 
#include<time.h> 
int a[25]; 
main() 
{ 
int i,n; 
clock_t start,end; 
clrscr(); 
start=clock(); 
printf("\nEnter the number of elements\n"); 
scanf("%d",&n); 
printf("Enter the elements\n"); 
for(i=1;i<=n;i++) 
scanf("%d",&a[i]); 
selsort(n); 
printf("\nSorted elements are\n"); 
for(i=1;i<=n;i++) 
printf("%d\n",a[i]); 
end=clock(); 
printf("\ntime=%f",(end-start)/CLK_TCK); 
getch(); 
} 
selsort(int x) 
{ 
int i,j; 
for(i=1;i<=x;i++) 
{ 
for(j=i+1;j<=x;j++) 
if(a[i]>a[j]) 
swap(&a[i],&a[j]); 
}
} 
swap(int *c,int *d) 
{ 
int temp; 
temp=*c; 
*c=*d; 
*d=temp; 
}