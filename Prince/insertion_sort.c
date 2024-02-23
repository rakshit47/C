#include <stdio.h>
int i, j, n , array[30];

void print_array()
{
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
}

void Insertion_sort()
{
    int temp;
    for (i = 0; i < n; i++)
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

int main()
{
   printf("Enter the length of array :");
   scanf("%d",&n);
   printf("Enter the value of array : ");
   for ( i = 0; i < n; i++)
   {
       scanf("%d",&array[i]);
   }
      printf("Sorted array is : ");
      Insertion_sort();
      print_array();  
    return 0;
}