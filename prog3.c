//Sort a given set of elements using Merge sort method and determine the time required to sort the elements.  
#include<stdio.h> 
#include<conio.h> 
#include<time.h> 
int a[25],b[25]; 
main() 
{ 
int i,x; 
clock_t start,end; 
clrscr();
start=clock(); 
printf("Enter the limit\n"); 
scanf("%d",&x); 
printf("Enter the elements\n"); 
for(i=1;i<=x;i++) 
scanf("%d",&a[i]); 
mergesort(1,x); 
end=clock(); 
printf("Sorted array\n"); 
for(i=1;i<=x;i++) 
printf("%d\n",a[i]); 
printf("\ntime=%f",(end-start)/CLK_TCK); 
getch(); 
} 
mergesort(int low,int high) 
{ 
int mid; 
if(low<high) 
{ 
mid=(low+high)/2; 
mergesort(low,mid); 
mergesort(mid+1,high); 
merge(low,mid,high); 
} 
} 
merge(int low,int mid,int high) 
{ 
int i,j,k,h; 
h=i=low;
j=mid+1; 
while(h<=mid&&j<=high) 
{ 
if(a[h]<a[j]) 
b[i++]=a[h++]; 
else 
b[i++]=a[j++]; 
} 
if(h>mid) 
{ 
for(k=j;k<=high;k++) 
b[i++]=a[k]; 
} 
else 
{ 
for(k=h;k<=mid;k++) 
b[i++]=a[k]; 
} 
for(k=low;k<=high;k++) 
a[k]=b[k]; 
}