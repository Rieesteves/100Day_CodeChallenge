import java.util.Scanner;

public class Pattern
{
        public static void main(String[] args)
        {
            Scanner sc= new Scanner(System.in);


            System.out.println("Enter the number of rows : "); //takes input from user

            int rows= sc.nextInt();

            for (int i = rows; i >= 1; i--)
            {
            for (int j = 1; j < i; j++)
            {
                System.out.print(" ");
            }
            for (int k = i; k <= rows; k++)
            {
                System.out.print(k + " ");
            }
            System.out.println();
        }
    }
}
