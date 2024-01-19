#include<stdio.h>
#include<conio.h>

// Function to find even elements using pointers
void even(int *arr, int n) //array taken as pointer
{
    int i;
    printf("\nEven elements in the array: ");

    for(i=0; i<n; i++) 
    {
        if(*(arr + i)%2==0) 
        {
            printf("%d ",*(arr + i));//printing even numbers
        }
    }
}

void main() 
{
    int n,i;//size of array and loop counter
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];//array declare
    
    for(i=0; i<n; i++)
    {
        printf("a[%d] - ",i);
        scanf("%d",&a[i]);//user input of elements
    }

    // Call the function to find even elements
    even(a,n);
}
