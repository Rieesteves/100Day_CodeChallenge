public class ATM {

        public static  void main(String[] args)
        {
            double amt_withdraw=20, acc_balance=1000;

            //chk input
            if(amt_withdraw>0&&amt_withdraw<=2000&& amt_withdraw%5==0 &&acc_balance>0&& amt_withdraw<acc_balance)
            {
                acc_balance=acc_balance-amt_withdraw-0.5;
            }
            System.out.println("Balance : "+ acc_balance);

        }
    }

