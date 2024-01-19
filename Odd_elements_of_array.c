#include<stdio.h>
#include<conio.h>

void odd(int n,int a[n])
{
    int i;
    printf("Odd elements in the array : \n");
    for(i=0; i<n; i++)
    {
        if(a[i]%2==1)
        {
            printf("%d",a[i]);//printing odd elements of the array
        }
    }
}

void main()
{
    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);//size of array
    int a[n];
    
    for(i=0; i<n; i++)
    {
        printf("a[%d] - ",i);
        scanf("%d",&a[i]);//user input of the elements
    }
    odd(n,a);//passing the size of array and array elements
}
