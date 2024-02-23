#include<stdio.h>
#include<conio.h>
# define size 5
int stack[size];
int top = -1;
void push()
{
    if (top<size-1)
    {
        int x;
        printf("\nENTER ELEMENT TO PUSH \n");
        scanf("%d",&x);
        top = top + 1;
        stack[top] = x;
        printf("\nELEMENT PUSHED !"); 
    }
    else printf("\n\n STACK OVERFLOW ! \n");
}
void pop()
{
    if (top >= 0)
    {
        printf("ELEMENT POPED %d",stack[top]);
        stack[top] = stack[top+1];
        // printf("%d",top);
        top--;
    }
    else printf("\n\nSTACK UNDERFLOW !\n");
}
void peek()
{
    printf("STACK AT PEEK : %d",stack[top]);
}
void display()
{
    printf("STACK ELEMENTS : \n\n");
    for (int i = top; i >= 0; i--) printf("\t |%d| \n",stack[i]);
}
int main()
{
    int a;
    printf("\n\n  STACK: \n\n\t1.PUSH \n\t2.POP \n\t3.PEEK \n\t4.DISPLAY \n\t5.EXIT\n\n\tInput >> ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        push();
        main();
        break;
    case 2:
        pop();
        main();
        break;
    case 3:
        peek();
        main();
        break;
    case 4:
        display();
        main();
        break;
    default:
        printf("\n\n   ERROR!");
        break;
    }
    return 0;
}