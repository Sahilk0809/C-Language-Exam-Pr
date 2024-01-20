#include<stdio.h>
#include<string.h>

struct Laptop
{
    char company_name[50];
    char processor[50];
    int price;
};

void main()
{
    int n,i;//i loop counter
    printf("Enter the number of laptops : ");
    scanf("%d",&n);//n number of laptops
    struct Laptop laptop[n];
    char a[50],b[50];

    printf("\n");
    for(i=0; i<n; i++)
    {
        //details of laptops
        printf("Details of Laptop%d\n",i+1);
        printf("Enter company of laptop : ");
        scanf(" %[^\n]",a);
        strcpy(laptop[i].company_name,a);
        printf("Processor of laptop : ");
        scanf(" %[^\n]",b);
        strcpy(laptop[i].processor,b);
        printf("Price of laptop : ");
        scanf("%d",&laptop[i].price);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        //printing details
        printf("Laptop %d\n",i+1);
        printf("Laptop company : %s\n",laptop[i].company_name);
        printf("Processor : %s\n",laptop[i].processor);
        printf("Price : %d\n\n",laptop[i].price);
    }
}