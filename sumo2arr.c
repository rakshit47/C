#include<stdio.h>
#include<conio.h> 

int main()
{
    int a[5]={};
    int b[5]={};
    int c[5]={};
    printf("Enter 5 Elements for First Array : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);   
    }
    printf("\nEnter 5 Elements for Second Array : \n");
    for ( int i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);   
    }

    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("\nFirst Array : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t",a[i]);   
    }

    printf("\nSecond Array : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t",b[i]);   
    }

    printf("\nSum of Both Array : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t",c[i]);   
    }
    return 0;
}