#include<stdio.h>
#include<conio.h> 
# define size 5
int queue[size] = {};
int rear = -1;
int front = 0;

void push()
{
    int add;
    if (rear==size) printf("\n WARNING : Queue Overflow \n");
    else
    {
        if (rear<=size)
        {
            rear=rear+1;
            printf("Enter the Element : ");
            scanf("%d",&add);
            queue[rear]=add;
            
        }
    }
}

// void pop()
// {
//     int len = sizeof queue[size]/sizeof queue[0];
//     if (front==rear)
//     {
//         /* code */
//     }
    
// }

void display()
{
    printf("\nDISPLAYING QUEUE : \n\n");
    if (rear == -1)    printf("QUEUE EMPTY");
    
    else
    {
        for (int i = 0; i < rear; i++) printf("%d\t",queue[i]);
    }
}

int main()
{
    int a;
    printf("\n\nQUEUE IMPLEMENTATION \n-------------------- \n\n 1.PUSH()\n 2.POP()\n 3.DISPLAY()\nEnter Choice : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        push();
        main();
    case 2:
         break;
    case 3:
        display();
        main();
    default:
        printf("ERROR\n");
        break;
    }
    return 0;
}