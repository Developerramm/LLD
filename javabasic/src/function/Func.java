package function;

public class Func {

    public  static  int getSum(int a , int b){
        int sum = a + b;
        return sum;
//        System.out.println("My name is ram Kumar");
    }

    public static void main(String[] args) {

        int ans = getSum(10,20);
        System.out.println("The sum is " + ans);
//        System.out.println("This is main function here");
        callMyName();
        callMyName("Ram Kumar Maniyari Sitamarhi");
//        System.out.println("This is after function call statement");
    }

    public static void callMyName(){
        System.out.println("Ram Kumar");
        System.out.println(10 + 20);
        System.out.println("Maniyari");

        return;
    }

    public  static  void callMyName(String name){
        System.out.println(name);
    }


}
