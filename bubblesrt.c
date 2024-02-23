#include<stdio.h>
#include<conio.h>

void bsort(int array[], int n)
{
    int i, j, temp;
   for (i = 0; i < n-1; i++)      
     {
       for (j = 0; j < n-i-1; j++) 
           if (array[j] > array[j+1])
           {
             temp = array[j];
             array[j]=array[j+1];
             array[j+1]=temp;
           }
     }
}

void print(int array[], int n)
{
    int i;
    printf("\n\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {24, 11, 7, 82, 16, 33};
    int n = sizeof(array)/sizeof(array[0]);
    printf("\nBefore sorting :");
    print(array, n);
    bsort(array, n);
    printf("\nAfter sorting :");
    print(array, n);
    return 0;
}