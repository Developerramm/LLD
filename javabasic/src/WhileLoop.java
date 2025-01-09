public class WhileLoop {
    public static void main(String[] args) {
        System.out.println("While loop in java");
        System.out.println("Print table of 2");

        int i = 1;
        while(i <= 10){
            System.out.print(i * 2 + " ");
            i = i + 1;
        }
        System.out.println();


        // printing table of 10 using do while loop
        System.out.println("Printing table of 10");
        i = 1;
        do{
            System.out.print(i * 10 + " ");
            i = i + 1;
        }while (i <= 10);
    }
}
