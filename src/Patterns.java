import java.util.Scanner;

public class Patterns {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);

            System.out.println("Enter the number of rows : "); //takes input from user

            int rows = sc.nextInt();

            for (int i = 1; i <= rows; i++)
            {
                for (int j = rows; j > i; j--)
                {
                    System.out.print(" ");
                }
                for (int k = 1; k <= i; k++) {
                    System.out.print(k + " ");
                }
                System.out.println();
                sc.close();
            }
        }
    }

