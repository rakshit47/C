#include <stdio.h>

void selectionsort(int array[],int n)
{
  int min,swap;
 for(int i=0; i<n-1; i++)
  {
    min=i;
    for(int j=i+1; j<n; j++)
    {
      if(array[min]>array[j])
      min=j;
    }
      if(min != i)
     {
       swap=array[i];
       array[i]=array[min];
       array[min]=swap;
     }
  }
 }
void print(int array[], int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}
int main()
{
	int array[] = {24, 75, 15, 62, 59, 11};
	int n = sizeof(array)/sizeof(array[0]);
	printf("\nBefore Selection Sort:\n");
	print(array,n);
	selectionsort(array, n);
	printf("\nAfter Selection Sort:\n");
	print(array,n);
	return 0;

}
