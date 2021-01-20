#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("Sum of first %d natural number=%d",n,sum);
}
