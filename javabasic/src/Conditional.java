import java.util.Scanner;

public class Conditional {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int age;
        System.out.println("Enter Your age : ");
        age = input.nextInt();
        System.out.println("Do you know driving ?");
        boolean drive = input.nextBoolean();

        if(age > 18){
            if(drive){
                System.out.println("You can get driving licence and algo eligible to vote");
            }else{
                System.out.println("Bhai pahle driving sikh kar aoo");
                System.out.println("You are eligible to vote but not get driving licence");
            }
        }else{
            System.out.println("You are not eligible to both");
        }

        if(age > 18){
            System.out.println("You are eligible to vote");
        }else{
            System.out.println("You are not eligible to vote ");
        }

        // ternary operator
        String result = age > 18 ? "You are eligible" : "You are not eligible";
        System.out.println(result);


        input.close();
    }
}
