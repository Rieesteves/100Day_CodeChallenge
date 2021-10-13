import java.util.Scanner;
public class Circle {

    public static void main(String[] args) {

            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the number of radius: ");
            int radius = sc.nextInt();

            double perimeter = 2 * Math.PI * radius; //perimeter
            double area = Math.PI * radius * radius; //area

            System.out.println("Perimeter is = " + perimeter); 
            System.out.println("Area is = " + area);
        }
    }
