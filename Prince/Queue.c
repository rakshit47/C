#include<stdio.h>
#include<conio.h> 
#define size 5
int queue[size],front=-1,rear=-1;
void insert()
{
  int a;
  if(rear >= size-1)
  printf("queue is over flow");
  else
  {
  front = 0;
  printf("Enter data to insert ");
  scanf("%d",&a);
  rear++;
  queue[rear] = a;
  }
}
void delete()
{
if(front == -1 || front > rear)
printf("Queue is under  flow");
else
{
printf("Deleted data is:%d",queue[front]);
front++;
}
}
void display()
{
     if(rear == -1 || front > rear) 
     printf("Queue is empty");
     else  
     {
     for(int i = 0; i <= rear; i++)
     printf("%3d",queue[i]);
   }
}
int main()
{  
   int ch;
   x :
   {
     printf("\n 1. Insert");
     printf("\n 2. Delete");
     printf("\n 3. Display");
     printf("\n 4. Exit");
     printf("\nEnter your choice");
     scanf("%d",&ch);
     if(ch>=0 && ch<5)
     {
     if (ch==1)
     insert();
     else if (ch==2)
     delete();
     else if (ch==3)
     display();
     else if (ch==4)
     printf("");
   }
   }
   goto x;
     return 0;
     }