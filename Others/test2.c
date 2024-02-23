#include<stdio.h>
#include<conio.h> 

void bsort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < i-1-n; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
            
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
    int arr[5] = {3,6,8,5,4};
    printf("After Bubble sort :");
    bsort(arr,5);
    print(arr,5);
    return 0;
}