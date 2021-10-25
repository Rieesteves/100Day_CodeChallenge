import java.util.Scanner;

public class Sales
{
    protected String title;
    protected String author;
    protected String publication;
    protected double price;

    public void input() {
        
        Scanner in = new Scanner(System.in);
        System.out.print("Enter book title: ");
        title = in.nextLine();
        System.out.print("Enter book author: ");
        author = in.nextLine();
        System.out.print("Enter publication name: ");
        publication = in.nextLine();
        System.out.print("Enter book price: ");
        price = in.nextDouble();
    }

    public void display() {
        System.out.println("Book Title: " + title);
        System.out.println("Book Author: " + author);
        System.out.println("Publication: " + publication);
        System.out.println("Price: " + price);
    }
}
