#include<stdio.h>
void main()
{
	char sx,ms;
	int age;
	printf("Enter age, sex(M/F) &  marital status(Y/N):");
	scanf("%d\n%c\n%c",&age,&sx,&ms);
	if(ms=='Y')
	{
		printf("Driver is Assured");
	}
	else
	{
		if(sx=='M')
		{
			if(age>30)
			{
				printf("Driver is Assured");
			}
			else
			{
				printf("Driver is NOT Assured");
			}
		}
		else
		{
			if(age>25)
			{
				printf("Driver is Assured");
			}
			else
			{
				printf("Driver is NOT Assured");
			}
		}
	}
}
