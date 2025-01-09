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
        
    }
}
