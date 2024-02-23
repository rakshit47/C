#include<stdio.h>

int mid;
int binarysearch(int array[], int data, int n)
{
    int low=0;
    int up=n-1;
    while(low < up)
    {
        mid=(low+up)/2;
        if (data == array[mid]) return mid;
        else if(data < array[mid]) up = mid-1;
        else low = mid+1;
    }

}

int main()
{
    int array[]={2,7,14,20,34,49,55,62,73};
    int n= sizeof(array)/sizeof(array[0]);
    int data = 55;
    binarysearch(array,data,n);
    printf("\n Thus your searched value %d is found at index number %d",data,mid);
    return 0;
}