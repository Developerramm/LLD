public class DType {
    public static void main(String[] args) {
        // boolean
        boolean pound = true;
        boolean isAvailable = false;

        System.out.println(pound);
        System.out.println(isAvailable);


        // character
        char ch  = 'K';
        System.out.println("My character is " + ch);
        System.out.println((char)(ch + 1));

        // integer
        byte age = 20;
        System.out.println(age);
        short marks = 150;
        int pincode = 343201;
        long price = 1904780342;
        System.out.println(marks);
        System.out.println(pincode);
        System.out.println(price);

        // floating point value
        float value1 = 23432.4232f;
        double principal = 432424.321432d;
        System.out.println(value1);
        System.out.println(principal);

        // implicit conversion
        byte num1 = 12;
        System.out.println(num1);
        short num2 = num1;
        System.out.println(num2);
        int num3 = num2;
        System.out.println(num3);
        long num4 = num3;
        System.out.println(num4);





    }
}
