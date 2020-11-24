#include<stdio.h>
main()
{
	printf("Pick an item:\n1. Pizza,Rs.239\n2. Burger,Rs.129\n3. Pasta,Rs.179\n4. French Fries,Rs.99\n5. Sandwich,Rs.149\n");
	printf("Enter your choice from 1-5: ");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Food Item-Pizza\n");
			printf("Price-Rs.239");
			break;
		case 2:
			printf("Food Item-Burger\n");
			printf("Price-Rs.129");
			break;
		case 3:
			printf("Food Item-Pasta\n");
			printf("Price-Rs.179");
			break;
		case 4:
			printf("Food Item-French Fries\n");
			printf("Price-Rs.99");
			break;
		case 5:
			printf("Food Item-Sandwich\n");
			printf("Price-Rs.149");
			break;
		default: printf("Invalid Choice!");
	}
}
