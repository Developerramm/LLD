package function;

import java.util.Scanner;

public class practiceFunction {

    public  static  void printName(int n){
        for(int i = 1; i<=n; i++){
            System.out.println("Ram Kumar");
        }
    }

    public  static  void  printSum(int n){
        int sum = 0;
        for(int i = 1; i<=n; i++)
            sum += i;

        System.out.println("The sum is " + sum);
    }

    public  static  double getAvg(int a, int b){
        double avg = (double) (a + b)/2;

        return avg;

    }

    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        int n ;
//        System.out.println("Enter the value of n : ");
//        n = sc.nextInt();
//        printName(n);
//        printSum(n);

        double avg = getAvg(5,7);
        System.out.println("Average is " + avg);
    }
}
