//Sort a given set of elements using Quick sort method and determine the time required to sort the elements.
#include<stdio.h> 
#include<conio.h> 
#include<time.h> 
qsort(int a[20],int low,int high); 
main() 
{ 
int i,n,a[20],clock_t,start,end; 
clrscr(); 
start=clock(); 
printf("Enter the number of elements\n"); 
scanf("%d",&n); 
printf("Enter the elements\n"); 
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
qsort(a,0,n-1); 
end=clock(); 
printf("Sorted list\n"); 
for(i=0;i<n;i++) 
printf("%d\n",a[i]); 
printf("time=%f",(end-start)/CLK_TCK); 
getch(); 
} 
qsort(int a[20],int low,int high) 
{ 
int i,j,temp,key; 
if(low<high) 
{ 
key=low; 
i=low; 
j=high; 
while(i<j) 
{ 
while(a[i]<=a[key]&&i<high) 
i++; 
while(a[j]>a[key]) 
j--; 
if(i<j) 
{ 
temp=a[i]; 
a[i]=a[j]; 
a[j]=temp; 
} 
} 
temp=a[key]; 
a[key]=a[j]; 
a[j]=temp; 
qsort(a,low,j-1); 
qsort(a,j+1,high); 
} 
}