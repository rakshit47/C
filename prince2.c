#include<stdio.h>
int linear_search(int a[],int n,int data)
{
  for(int i=0; i<n; i++)
 {
  if(a[i]==data)
  {  
   printf("%d found at location %d",data,i);
   break;
  }
  else
  {
    printf("%d can't found at any location",data);
   }
  }
}

int main()
{
  int a[]={1,23,5,16,8,9,4,32,3,15,11,10,18,12,20};
  int n=15;
  int i,data;
  printf("The value of the array:\n");
  for(i=0; i<n; i++)
  printf("%3d",a[i]);
  printf("\nEnter data to search:");
  scanf("%d",&data);
  printf("\n");
  linear_search(a,n,data);
  return 0;
}