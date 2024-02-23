#include <stdio.h>
 
int main()
{
    int A = 105;
    int *ptr = &A;

    printf("Value of A = %d\n", *ptr);
    printf("Address of A = %p\n", ptr);

    *ptr = 20; 
 
    printf("After doing *ptr = 20, *ptr is %d\n", *ptr);
 
    return 0;
}