#include <stdio.h>

void InsertionSort(int array[], int n)
{
	int i, temp, j;
	for (i = 1; i < n; i++) 
    {
		temp = array[i];
		j = i - 1;
        while (j >= 0 && array[j] > temp) 
        {
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = temp;
	}
}

void Print(int array[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("\n");
}

int main()
{
	int array[] = { 14, 2, 7, 5, 3 };
	int n = sizeof(array) / sizeof(array[0]);
    int i;
	printf("\nBefore Insertion Sort :");
    for ( i = 0; i < n; i++)
    {
		printf("%d ", array[i]);
    }
    printf("\n\nAfter Insertion Sort :");
	InsertionSort(array, n);
	Print(array, n);
	return 0;
}