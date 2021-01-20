#include<stdio.h>
int main()
{
	float x,y,result;
	char ch;
	printf("Enter two numbers:");
	scanf("%f%f",&x,&y);
	printf("Enter the arithmetic operation(+,-,*,/,%):");
	scanf(" %c",&ch);
	switch(ch)
	{
		case'+':result=x+y;
			break;
		case'-':result=x-y;
			break;
		case'*':result=x*y;
			break;
		case'/':result=x/y;
			break;
		case'%':result=(int)x%(int)y;
			break;
		default:printf("Invalid Operation\n");
	}
	printf("Result:%f%c%f=%f",x,y,ch,result);
	return 0;
}

