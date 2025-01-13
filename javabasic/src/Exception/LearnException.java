package Exception;

public class LearnException {
    public static void main(String[] args) {
//        int a = 5 / 0;
//

        System.out.println("Before");

        try{
//            int a = 5/ 0;
            int arr[] = new int[5];
            System.out.println(arr[8]);
        }catch (ArithmeticException e){
            System.out.println(e.getMessage());
            System.out.println(e.getStackTrace());
            System.out.println(e);
        }catch (ArrayIndexOutOfBoundsException err){
            System.out.println("Array Exception here");
            System.out.println(err);
        }finally {
            System.out.println("This code is always executed");
        }


        System.out.println("After");
    }

}
