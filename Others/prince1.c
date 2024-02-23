#include<stdio.h>

void printarray(int A[],int n)
{
  for(int i=0; i<n; i++)
  {
    printf(" %d",A[i]);
  }
  printf("\n");
}
void selectionsort(int A[],int n)
{
  int min,swap;
 for(int i=0; i<n-1; i++)
  {
    min=i;
    for(int j=i+1; j<n; j++)
    {
      if(A[min]>A[j])
      min=j;
    }
      if(min != i)
     {
       swap=A[i];
       A[i]=A[min];
       A[min]=swap;
     }
  }
 }
 int main()
 {
  /*int i,n,A[30];
  printf("Enter the length of array:");
  scanf("%d",&n);
  printf("Enter the value of array:\n");
  for(i=0; i<n; i++)
  scanf("%d",&A[i]);*/
  int A[]={5,2,9,1,3,6};
  int n=6;
   printf("Unsorted array is:");
   printarray(A,n);
   printf("Sorted array is:");
   selectionsort(A,n);
   printarray(A,n);
   return 0;
 }