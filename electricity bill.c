//electricity bill
#include<stdio.h>
int main()
{
	int units;
	printf("\n     ****BILL****    ");
	printf("\n--------------------------------");
	printf("\nEnter the number of units consumed: ");//enter units
	scanf("%d",&units);
	//calculation
	if (units <= 100)
	{
		printf("\n No charge as united consumed is less!!");
	}
	else if (units <= 200)
	{
		printf("\n Your electricity bill is Rs. %d",((units-100) * 5));
	}
	else if (units > 200)
	{
			printf("\n Your electricty bill is Rs. %d",(100*5)+((units-100) * 10));
	}

	return 0;
}




