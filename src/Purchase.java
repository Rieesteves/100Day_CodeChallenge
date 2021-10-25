import java.util.Scanner;


public class Purchase extends Sales
{
    private int noc;
    private double amount;

    public void accept() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter no. of copies purchased: ");
        noc = in.nextInt();
    }

    public void calculate() {
        amount = noc * price;
    }

    public void show() {
        display();
        System.out.println("No. of copies: " + noc);
        System.out.println("Amount: " + amount);
    }

    public static void main(String args[]) {
        Purchase obj = new Purchase();
        obj.input();
        obj.accept();
        obj.calculate();
        obj.show();
    }
}
