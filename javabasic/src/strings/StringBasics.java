package strings;

public class StringBasics {
    public static void main(String[] args) {
        String name = "Ram Kumar";
        System.out.println(name);

        String firstName = new String("Ram");
        System.out.println(firstName);

        System.out.println(firstName + name);

        firstName = "O";
        System.out.println(firstName);

        String str1 = "ram";
        String str2 = "ram";
        String str3 = new String("ram");


        if(str1.equals(str3)){
            System.out.println("String are equal");
        }else {
            System.out.println("String are not equal");
        }

        if(str1 == str3){
            System.out.println("String are equal");
        }else {
            System.out.println("String are not equal");
        }

    }
}
