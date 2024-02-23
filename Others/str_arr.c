#include<stdio.h>
#include<conio.h> 
#include<string.h>

int main()
{
    char name[5];
    
    printf("Enter Nme for 5 Student");

    for (int i = 0; i < 5; i++)
    {
        printf("\n Enter %d Number",i+1);
        scanf("%s",&name[i]);
    }
    printf("\n Displaying all names \n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s \t",name[i]);
    }
    return 0;
}