#include<stdio.h>
#include<conio.h>
#include<string.h>

struct User
{
	int date,month,year;
	char name[50];	
};

void validate(int date,int month,int year)
{
	int i,age;
	//year valid check
	if(year>=1924 && year<=2024)
	{
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		{
			if(date>=1 && date<=31)
			{
				for(i=year; i<=2024; i++)
				{
					age++;
				}
				printf("Age : %d",age-3);
			}
			else
			{
				printf("Your entered invalid date please enter date between 1 to 31 !\n");
			}
		}
		else if(month==4 || month==6 || month==9 || month==11)
		{
			if(date>=1 && date<=30)
			{
				for(i=year; i<=2024; i++)
				{
					age++;
				}
				printf("Age : %d",age-3);
			}
			else
			{
				printf("Your entered invalid date please enter date between 1 to 30 !\n");
			}
		}
		else if(year%4==0)
		{
			if(month==2)
			{
				if(date>=1 && date<=29)
				{
					for(i=year; i<=2024; i++)
					{
						age++;
					}
					printf("Age : %d",age-3);
				}
				else
				{
					printf("Your entered invalid date please enter date between 1 to 29 !\n");
				}
			}
		}
		else
		{
			if(month==2)
			{
				if(date>=1 && date<=28)
				{
					for(i=year; i<=2024; i++)
					{
						age++;
					}
					printf("Age : %d",age-3);
				}
				else
				{
					printf("Your entered invalid date please enter date between 1 to 28 !\n");
				}
			}
		}
	}
	else
	{
		printf("Your entered the invalid year please enter the year between 1942 to 2024 !\n");
	}
}
void main()
{
	int n,i;//n size of user array and i for loop counter
	printf("Enter how many users age you want to calculate : ");
	scanf("%d",&n);
	char a[50];//to store string of structure
	struct User user[n];//n number of user
	
	for(i=0; i<n; i++)
	{
		printf("\nUser %d \n",i+1);
		printf("Enter your name : ");
		scanf(" %[^\n]",a);
		strcpy(user[i].name,a);
		printf("Enter your date of birth : ");
		scanf("%d",&user[i].date);
		printf("Enter your birth month : ");
		scanf("%d",&user[i].month);
		printf("Enter your birth year : ");
		scanf("%d",&user[i].year);
		validate(user[i].date,user[i].month,user[i].year);
	}
	FILE *fp;
	fp = fopen("data.txt","w");
	for(i=0; i<n; i++)
	{
		printf("\n\nUser %d \n",i+1);
		printf("Name : %s\n",user[i].name);
		printf("Birth Date : %d/%d/%d\n",user[i].date,user[i].month,user[i].year);
		validate(user[i].date,user[i].month,user[i].year);
		fprintf(fp,"User %d \n",i+1);
		fprintf(fp,"Name : %s\n",user[i].name);
		fprintf(fp,"Birth Date : %d/%d/%d\n",user[i].date,user[i].month,user[i].year);
	}
}