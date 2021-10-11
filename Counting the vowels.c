//count vowels

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,count=0;
	char str[100];
	printf("\nEnter the required string:\n");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'
		||str[i]=='O'||str[i]=='U')
		{
			count++; //increment he count
		}	
		
	}
	
	printf(" the number of vowels are  = %d \n", count);

	
	return 0;
}

