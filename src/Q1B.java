import java.io.*;

class Addition {

    // adding three integer values.
    public int add(int a, int b, int c)
    {

        int sum = a + b + c;
        return sum;
    }

    // adding three double values.
    public double add(double a, double b, double c)
    {

        double sum = a + b + c;
        return sum;
    }
}

class Q1B {
    public static void main(String[] args)
    {

        Addition ob = new Addition();

        int sum2 = ob.add(1, 2, 3);
        System.out.println(
                "sum of the three integer value :" + sum2);
        double sum3 = ob.add(1.0, 2.0, 3.0);
        System.out.println("sum of the three double value :"
                + sum3);
    }
}
