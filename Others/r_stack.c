#include <stdio.h>

#define N 5
int stack[5];
int top = -1;
void Push()
{
    int x;
   
    if (top == N - 1)
    {
        printf("Overflow \n");
    }
    else
    {
        printf("\nEnter data \n");
        scanf("%d", &x);
        top = top+1;
        stack[top] = x;
        printf(" \n data inserted \n");
    }
}
void Pop()
{

    int item;
    if (top == -1)
    {
        printf("Underflow \n");
    }
    else
    {
        item = stack[top];
        top = top-1;
        printf("Deleted");
    }
}
void display()
{
    printf("\t \n STACK \n\n");
    for (int i = top; i >= 0; i--)
    {
        printf(" | %d | \n",stack[i]);
    }
}

void peek()
{
    printf("%d", stack[top]);
}
int main()
{
    int num;

    printf("\n");
    printf("\t1. Push() \n");
    printf("\t2. Pop() \n");
    printf("\t3. Display() \n");
    printf("\t4. Peek() \n");
    printf("\tWhich operation do you want to perform\n");
    scanf("%d", &num);
    if (num == 1)
    {
            Push();
            main();
        
    }

    else if (num == 2)
    {
        Pop();
        main();
    }

    else if (num == 3)
    {
        display();
        main();
    }

    else if (num == 4)
    {
        peek();
        main();
    }

    else
    {
        printf("\nInvalid Choice\n");
        main();
    }

    return 0;
}