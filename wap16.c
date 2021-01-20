#include<stdio.h>
void main()
{
	char ch;
	printf("Enter an upper-case character:");
	scanf("%c",&ch);
	switch(ch)
	{
		case'A':printf("Entered Character is Vowel");
		break;
		case'E':printf("Entered Character is Vowel");
		break;
		case'I':printf("Entered Character is Vowel");
		break;
		case'O':printf("Entered Character is Vowel");
		break;
		case'U':printf("Entered Character is Vowel");
		break;
		default:printf("Entered Character is Consonent");
	}
}
