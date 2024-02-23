#include<stdio.h>

int linearsearch(int array[], int data, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i]==data)
        {
            printf("\nThus, Your searched valuse %d was found at index number %d \n\n\n",data,i);
            break;
        }
    }    
}

int main()
{
    int data;
    int array[]={54,32,78,45,21,11,89};
    int n= sizeof(array)/sizeof(array[0]);
    printf("Enter any value to be found using Linear Searching -> ");
    scanf("%d",&data);
    linearsearch(array,data,n);
}