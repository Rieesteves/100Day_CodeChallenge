import java.util.Scanner;

public class Employee {
    String name,city;
    float salary;
    int yoj;

    public void getInfo(String name, String city, float salary,int yoj)

    {
        this.name = name;
        this.city = city;
        this.salary = salary;
        this.yoj = yoj;
    }
    public void printInfo()
    {
        System.out.println(name  + "\t\t" + city + "\t\t" + salary + "\t\t" +yoj );
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String [] name = new String[2];
        int [] yoj = new int[2];
        float [] salary = new float [2];
        String [] city = new String[2];

        for (int i = 0; i <3; i++)
        {
            System.out.println("\n---Enter Employee " +(i+1)+" Information: ---");
            System.out.println("Enter the name of Employee: ");
            name[i]=sc.nextLine();
            System.out.println("Enter Year of Joining: ");
            yoj[i]=sc.nextInt();
            System.out.println("Enter Salary: ");
            salary[i]=sc.nextFloat();
            sc.nextLine();
            System.out.println("Enter City: ");
            city[i]=sc.nextLine();
        }

        Employee em1 = new Employee();
        em1.getInfo(name[0],city[0],salary[0], yoj[0]);
        Employee em2 = new Employee();
        em2.getInfo(name[1],city[1],salary[1], yoj[1]);
        System.out.println("Name \t\tAddress \tddSalary   \tYear Of Joining");
        em1.printInfo();
        em2.printInfo();

    }

}

