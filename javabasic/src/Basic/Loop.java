package Basic;

public class Loop {
    public static void main(String[] args) {
        // for loop


        for(int i = 1; i<= 10; i = i + 1){
            System.out.println("Ram Kumar");
        }

        System.out.println("Printing counting from 1 to 100");
        for(int i = 1; i<= 100; i++){
            System.out.print(i + " ");
        }
        System.out.println();

        // print sum of 1 to 100 using while loop
        int sum = 0;
        int i = 1;
        while(i <= 100){
            sum  += i;
            i++;
        }

        System.out.println("The sum is " + sum);

        // print table of 2
        System.out.println("Printing table of 2 ");
        for( i = 1; i<= 10; i++){
            System.out.print(i * 2 + " ");
        }
        System.out.println();

        // nested for loop
        for(int count = 1; count <= 5; count++){
            for(int j = 1; j <= 5; j++){
                System.out.print(count + "" +j + " ");
            }
            System.out.println();
        }

    }
}
