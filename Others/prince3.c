#include<stdio.h>
int stack[5],top;

void Push(int N)
{
  int x;
 printf("Enter data to pushed");
scanf("%d",&x);
  if(top == N-1){
    printf("Stack is overflow");
  }
  else
 {
  top++;
  stack[top]=x;
 }
}

void Pop(int N)
{
  int item;
  if(top == -1){
    printf("Stack is underflow");
  }
  else
  {
    item = stack[top];
    top--;
    printf("The popped element is %d",item);
  }
}

void Display(int N)
{  
  if(top>0)
  {
  for(int i=0; i<=N-1; i++)
    printf("%d",stack[i]);
  }
  else
 {
  printf("Stack is empty");
 }
}

int main()
{
  int n,ch;
 printf("Enter the size of stack");
 scanf("%d",&n);
 printf("\n  STACK OPERATIONS USING ARRAY");
 printf("\n\t--------------------------------");
 printf("\n 1.PUSH");
 printf("\n 2.POP");
 printf("\n 3.Display");
 do
{
  printf("\nEnter your choice:");
  scanf("%d",&ch);
switch(ch)
 {
   case 1:
     Push(n);
     break;
   
   case 2:
     Pop(n);
     break;
     
   case 3:
     Display(n);
     break;
    
   default :
     printf("Invalid choice");
     ch=4;
 }
}while(ch<=3);
  return 0;
}