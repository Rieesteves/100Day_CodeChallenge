import java.util.Scanner;
class AreaOfTriangle
{
    public static void main(String args[])
    {

        Scanner s= new Scanner(System.in);

        System.out.println("Enter the base of the Triangle:");
        double bse= s.nextDouble();

        System.out.println("Enter the height of the Triangle:");
        double height= s.nextDouble();

       ///area formula
        double area=(bse*height)/2;
        System.out.println("\n -----------------------------------\n");
        System.out.println("\n    Area of Triangle is: " + area);
    }
}