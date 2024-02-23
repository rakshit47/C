#include<stdio.h>
#include<conio.h>

void bsort(float array[], int n)
{
    int i, j;
    float temp;
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

void print(float array[], int n)
{
    int i;
    printf("\n\n");
    for(i = 0; i < n; i++)
    {
        printf("%.2f ",array[i]);
    }
    printf("\n");
}

int main()
{
    float array[] = {24.5, 24.1, 24.2, 24.7, 24.9, 24.4};
    int n = sizeof(array)/sizeof(array[0]);
    printf("\nBefore sorting : (float type)");
    print(array, n);
    bsort(array, n);
    printf("\nAfter sorting : (float type)");
    print(array, n);
    return 0;
}