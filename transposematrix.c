// transpose//
#include<conio.h>
#include<stdio.h>

int main ()
{
  int r, c;
  printf ("Enter the number of rows: ");
  scanf ("%d", &r); 
  printf ("\nEnter the number of columns: ");
  scanf ("%d", &c); 
  
  int arr[r][c];
  printf ("Enter the elements of matrix \n");
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  scanf ("%d", &arr[i][j]);
	}
    }
  printf ("\nOriginal matrix\n");
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d", arr[i][j]);
	}
      printf ("\n");
    }
  printf ("\nTransposed matrix \n");
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d", arr[j][i]);
	}
      printf ("\n");
    }
  return 0;
}

