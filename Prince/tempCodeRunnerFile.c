#include<stdio.h>
#include<conio.h> 

int main()
{
    int a = 5,*b,*c;
    *b= &a;
    *c = &b;
    printf("a = %d \n b = %d \n c = %d",a,b,c);
    return 0;
}