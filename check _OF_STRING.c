#include<stdio.h>
#include<conio.h>

int main()
{
	int i, v=0, c=0, n=0, s=0;
	char str[50];
	printf("\nEnter the required string:\n");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			v++;
		else  if ((str[i]>='a' && str[i] <= 'z') || (str[i] >=65 && str[i]<=90))
			c++;
		
		else  if (str[i]>=48 && str[i] <=57)
			n++;
	
		else  if (str[i]==' ')
			s++;
	}
	printf("\nThe number of vowels are:\t%d\n", v);
	printf("\nThe number of consonents are:\t%d\n", c);
	printf("\nThe number of digits are:\t%d\n", n);
	printf("\nThe number of spaces are:\t%d\n", s);
	
	return 0;
}



