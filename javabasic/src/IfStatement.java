import java.util.Scanner;

public class IfStatement {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int income;
        System.out.println("Enter your income: ");

        income = input.nextInt();

        if(income > 100000){
            System.out.println("You are count in a Rich family");
        }else{
            System.out.println("You are count in low middle class family ");
        }
        
        input.close();

    }
}
