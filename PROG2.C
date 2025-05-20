#include <stdio.h>
#include <conio.h>
#include <time.h>

void heapcom(int a[], int n) {
    int i, j, k, item;
    for (i = 1; i <= n; i++) {
	item = a[i];
	j = i;
	k = j / 2;
	while (k > 0 && item > a[k]) {
	    a[j] = a[k];
	    j = k;
	    k = j / 2;
	}
	a[j] = item;
    }
}

void adjust(int a[], int n) {
    int item, i, j;
    j = 1;
    item = a[j];
    i = 2 * j;

    while (i < n) {
	if (a[i] < a[i + 1])
	    i++;

	if (item < a[i]) {
	    a[j] = a[i];
	    j = i;
	    i = 2 * j;
	} else {
	    break;
	}
    }

    a[j] = item;
}

void heapsort(int a[], int n) {
    int i, temp;
    heapcom(a, n);
    for (i = n; i >= 2; i--) {
	temp = a[1];
	a[1] = a[i];
	a[i] = temp;
	adjust(a, i - 1);
    }
}

void main() {
    int a[20], n, i, ch = 1;
    clock_t start, end;
    float time_taken;

    clrscr();

    while (ch) {
	printf("\nEnter the number of elements to sort: ");
	scanf("%d", &n);

	printf("Enter the elements:\n");
	for (i = 1; i <= n; i++)
	    scanf("%d", &a[i]);

	start = clock();
	heapsort(a, n);
	end = clock();

	printf("\nThe sorted list of elements is:\n");
	for (i = 1; i <= n; i++)
	    printf("%d ", a[i]);

	time_taken = (float)(end - start) / CLK_TCK;
	printf("\nTime taken: %f CPU cycles\n", time_taken);

	printf("\nDo you want to sort again? (1-Yes / 0-No): ");
	scanf("%d", &ch);
    }

    getch();
}
