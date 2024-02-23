#include <stdio.h>
int i, j, n, array[30];

void print_array()
{
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

void Selection_sort();

int main()
{
    printf("Enter the length of array :");
    scanf("%d", &n);
    printf("Enter the value of array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Sorted array is : ");
    Selection_sort();
    print_array();
    return 0;
}