#include<conio.h>
#include<stdio.h>
int main()
{
	int sum=0;
	int n;
	printf("Enter the length of array: "); //max 50
	scanf("%d",&n);
	int arr[n];
	printf("\n Enter the elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("The sum of all elements is %d",sum);
	return 0;
}



