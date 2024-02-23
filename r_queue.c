#include<stdio.h>
#define size 5
int queue[size];
int rear = -1;
int front = -1;

void insertq(int arr[size]);
void deleteq();
void isempty();
void isfull();
void display();


int main() {

    int num;
        printf("\nQueue Operations \n");
        printf("__________________________\n");
        printf("\n");
        printf("\t1. Insert \n");
        printf("\t2. Delete \n");
        printf("\t3. IsEmpty \n");
        printf("\t4. IsFull \n");
        printf("\t5. Display \n");
        printf("\t6. Exit \n");
        printf("\t \nWhich operation do you want to perform ?\n");
        scanf("%d", &num);
        if (num == 1)
        {
            insertq(queue);
            main();
        }

        else if (num == 2)
        {
            deleteq();
            main();
        }
        else if (num == 3)
        {
            isempty();
            main();
        }
        else if (num == 4)
        {
            isfull();
            main();
        }

        else if (num == 5)
        {
            display();
            main();
        }
        else if (num == 6)
        {
              printf("\n T  E  R  M  I  N  A  T  I  N  G \n");
           goto end;
        }

        else
        {
            printf("\n Invalid Choice \n");
            main();
        }
 
        end:
   
    return 0;
}



void display(){
   
    for (int i = 0; i < 5; i++)
    {
        printf("%2d",queue[i]);
    }
    
}

void isempty(){

        if (front == -1 && rear == -1 )
        {
            printf("Queue is empty !!");
            
        }
        else{
            printf("Queue is having elements");
        }
        
}

void isfull(){
    if (rear >= size-1)
    {
        printf("Queue is Full !!");
    
    }
    else{
        printf("Queue is still waiting keep inserting ");
    }
   
}

void insertq(int arr[size]){

    if(rear >= size-1)
    {
       printf("sorry queue is full");
       goto end; 
    }
    else{
    int data;
    rear++;
    printf("\nEnter the data you wanna insert : ");
    scanf("%d",&data);
    arr[rear] = data;
    printf("\nData Inserted Successfully\n ");
     end:
     printf("");
    }
}

void deleteq(){
  
        printf("%d is deleted from queue \n",queue[front]);
        for (int i = 0; i < size; i++)
        {
            queue[i]=queue[i+1];
             printf("\n Data Deleted Successfully \n");
        }
}