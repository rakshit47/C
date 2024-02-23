#include<stdio.h>
#include<conio.h>

int main()
{
    int a,k =8;
    a=k++;
    printf("%d k = %d",a,k++-k++);
    return 0;
}