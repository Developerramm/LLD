import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        // create an Object for Scanner class to take input
        Scanner input = new Scanner(System.in);
        System.out.println("Enter Your name : ");

        // takes input from the keyword
        String name = input.nextLine();

        // print the name
        System.out.println("My name is " + name);

        // close the scanner
        input.close();
    }
}
