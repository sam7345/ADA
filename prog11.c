//a. Implement Horspool algorithm for String Matching. 
#include<stdio.h> 
#include<string.h> 
#define max 256 
char p[max],t[max],ta[max]; 
int m,n,i,j,k; 
void shifttable() 
{ 
int in; 
for(i=0;i<max;i++) 
ta[i]=m; 
for(j=0;j<m-1;j++) 
{ 
in=(int)p[j]-'0'; 
ta[in]=m-1-j; 
} 
} 
int horsepool_algo() 
{ 
int index;
shifttable(); 
i=m-1; 
for(;i<=n-1;) 
{ 
k=0; 
while((k<=m-1)&&(p[m-1-k]==t[i-k])) 
k++; 
if(k==m) 
return i-m+1; 
else 
{ 
index=(int) t[i]-'0'; 
i=i+ta[index]; 
} 
} 
return -1; 
} 
void main() 
{ 
int found; 
clrscr(); 
printf("enter the text\n"); 
gets(t); 
printf("enter the pattern\n"); 
scanf("%s",p); 
n=strlen(t); 
m=strlen(p); 
found=horsepool_algo(); 
if(found==-1)
printf("pattern not found\n"); 
else 
printf("pattern found at %d position",found); 
getch(); 
}