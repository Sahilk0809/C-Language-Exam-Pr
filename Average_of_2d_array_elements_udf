#include<stdio.h>
#include<conio.h>

// Function to calculate the average of elements in a 2D array
float calculateAverage(int n, int a[n][n]) 
{
    float sum = 0,count = 0;

    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++) 
        {
            sum += a[i][j];
            count++;
        }
    }
    return sum / count;
}

void main() 
{
    int n,i,j;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n][n];
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d] - ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // Calculate and print the average
    float average = calculateAverage(n, a);
    printf("\nThe average of all elements is : %.2f\n",average);
}
