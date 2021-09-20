public class Student {
    public static  void main(String args[]) {

        subject a = new subject();
        subject b = new subject();

        double avga ;
        double avgb;

        //assign values
        a.sub1 = 20;
        a.sub2 = 20;
        a.sub3 = 60;
        a.sub4 = 20;
        a.sub5 = 10;

        b.sub1 = 30;
        b.sub2 = 20;
        b.sub3 = 50;
        b.sub4 = 50;
        b.sub5 = 50;

        //cacluation
        avga = (a.sub1 + a.sub2 + a.sub3 + a.sub4 + a.sub5) / 5;
        avgb = (b.sub1 + b.sub2 + b.sub3 + b.sub4 + b.sub5) / 5;


        //dispaying values
        System.out.println("AVg is " + avga);
        System.out.println("---------------------");
        System.out.println("AVg is " + avgb);
        
    }
}
