package Arrays;

public class ArrayBasic {
    public static void main(String[] args) {

        // declaration of array
        int arr[];

        int []brr;

        // allocation
        arr = new int[10];
        brr = new int[10];

        int marks[] = {100,99,98,100,99};
        System.out.println(marks.length);
        System.out.println(marks[0]);
        System.out.println(marks[1]);
        System.out.println(marks[2]);


        // traversing of array
        System.out.println("For loop ");
        for(int i = 0; i<marks.length; i++){
            System.out.print(marks[i] + " ");
        }
        System.out.println();

//        System.out.println(marks[6]);

        // for each loop in java
        System.out.println("for each loop ");
        for(int mark : marks){
            System.out.print(mark + " ");
        }
        System.out.println();

        



    }
}
