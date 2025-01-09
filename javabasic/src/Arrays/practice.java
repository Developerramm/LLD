package Arrays;

public class practice {
    public static void main(String[] args) {
        int arr[] = {10,20,30,40,50};

        int sum = 0;
        for(int number : arr){
            sum += number;
        }

        System.out.println("The sum of array is " + sum);

        // multiplication of array element
        long multiplication = 1;
        for(int number : arr){
            multiplication *= number;
        }
        System.out.println(multiplication);

        int arr1[] = {1,3,5,98,2,43,234,53,6,32,2};
        int minValue = arr1[0];
        int maxValue = arr1[0];

        for(int number : arr1){
            if(number < minValue){
                minValue = number;
            }

            if(number > maxValue)
                maxValue = number;
        }

        System.out.println("Min value is " + minValue);
        System.out.println("Max value is " + maxValue);

        System.out.println(Integer.MAX_VALUE);
        System.out.println(Integer.MIN_VALUE);

        System.out.println("2D Array in java");

        int brr[][] = {
                {1,2,3,4,5,5},
                {2,4,6,8,10,12},
                {6,5,4,3,2,1}
        };
        int rowSize = brr.length;
        int colSize = brr[0].length;

        System.out.println("Printing using for loop ");
        for(int rowIndex = 0; rowIndex<rowSize; rowIndex++){
            for(int colIndex = 0; colIndex <colSize; colIndex++){
                System.out.print(brr[rowIndex][colIndex] + " ");
            }
            System.out.println();
        }

        System.out.println("printing using for each loop");
        for(int[] temp :brr){
            for(int num : temp){
                System.out.print(num + " ");
            }
            System.out.println();
        }

    }
}
