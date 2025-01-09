package Basic;

public class Operator {
    public static void main(String[] args) {
        // arithmetic operator
        int num1 = 10;
        int num2 = 20;
        System.out.println(num2 + num1);
        System.out.println(num2 - num1);

        System.out.println(num2 * num1);
        System.out.println((num2 / num1));
        num1 = 10;
        System.out.println( (double) num2 % num1);

        // relational operator
        num1 = 5;
        num2 = 7;
        System.out.println(num2 > num1);
        System.out.println(num2 < num1);
        System.out.println(num2 >= num1);
        System.out.println(num2 <= num1);
        System.out.println(num2 != num1);
        System.out.println(num2 == num1);

        // logical operator
        boolean first = true;
        boolean second = false;

        if(first && second){
            System.out.println("All true here ");
        }else{
            System.out.println("Koi bhi sahi nahi hai");
        }

        if(first || second){
            System.out.println("Ek bhi toh sahi hai");
        }

        if(first != second){
            System.out.println("Chalo bhai sahi hai");
        }


        // unary increment / decrement operator
        int age = 20;
        System.out.println(++age);
        System.out.println(--age);

    }
}
