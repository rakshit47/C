#include<stdio.h>
#include<conio.h> 
# define size 5
int queue[size] = {};
int rear = 0;

void insert()
{
    if (rear<size)
    {
        printf("Enter the Element : ");
        scanf("%d",&queue[rear]);
        rear=rear+1;
    }
    else printf("\n WARNING : QUEUE OVERFLOW \n");
}

void delete()
{
    if (rear>0) 
    {
        for (int i = 0; i < rear; i++) queue[i] = queue[i + 1];
        rear -=1;
    }
    else printf("\nQUEUE UNDERFLOW");
}

void display()
{
    printf("\nDISPLAYING QUEUE : \n\n");
    if (rear == 0) printf("QUEUE EMPTY");
    else for (int i = 0; i < rear; i++) printf("%d\t",queue[i]);
}

int main()
{
    int a;
    printf("\n\nQUEUE IMPLEMENTATION \n-------------------- \n\n 1.INSERT()\n 2.DELETE()\n 3.DISPLAY()\n\nEnter Choice : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        insert();
        main();
        break;
    case 2:
        delete();
        main();
        break;
    case 3:
        display();
        main();
        break;
    default:
        printf("ERROR\n");
        break;
    }
    return 0;
}