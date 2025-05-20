#include <stdio.h>
#include <conio.h>
#include <time.h>
#define MAX 20

int a[MAX], n;

int bs(int low, int high, int key);
int ls(int key);

void main() {
    int i, key, result_bs, result_ls;
    clock_t start1, end1, start2, end2;
    float time_bs, time_ls;

    clrscr();

    printf("Enter the limit:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
	scanf("%d", &a[i]);
    }

    printf("\nBinary Search\n");
    printf("Enter the key to be searched:\n");
    scanf("%d", &key);

    start1 = clock();
    result_bs = bs(0, n - 1, key);
    end1 = clock();

    if(result_bs == -1)
	printf("Element not found\n");
    else
	printf("Element found at position %d\n", result_bs + 1);

    printf("\nLinear Search\n");
    printf("Enter the element to be searched:\n");
    scanf("%d", &key);

    start2 = clock();
    result_ls = ls(key);
    end2 = clock();

    if(result_ls == -1)
	printf("Element is not found\n");
    else
	printf("Element is found at position %d\n", result_ls + 1);

    time_bs = (float)(end1 - start1) / CLK_TCK;
    time_ls = (float)(end2 - start2) / CLK_TCK;

    printf("\nTime for binary search = %f\n", time_bs);
    printf("Time for linear search = %f\n", time_ls);

    getch();
}

int bs(int low, int high, int key) {
    int mid;
    long int j;

    for(j = 0; j < 1000000; j++);

    if(low > high)
	return -1;

    mid = (low + high) / 2;

    if(a[mid] == key)
	return mid;
    else if(key < a[mid])
	return bs(low, mid - 1, key);
    else
	return bs(mid + 1, high, key);
}

int ls(int key) {
    int i;
    long int j;

    for(j = 0; j < 10000000; j++);

    for(i = 0; i < n; i++) {
        if(a[i] == key)
            return i;
    }

    return -1;
}
