#include<stdio.h>
void main()
{
int x,y,max;
printf("Enter two numbers:");
scanf("%d%d",&x,&y);
max=(x>y)?x:y;
printf("Larger number is:%d",max);
}
