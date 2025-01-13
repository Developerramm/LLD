package Exception;

public class ThrowException {
    public  static  void  printName(String name) throws ArithmeticException {
        if(name.equalsIgnoreCase("ram kumar")){
            throw  new NullPointerException("Bhai sahab name galat hai fir se kosis karo");
        }
        System.out.println("Ram Kumar");
        System.out.println(name);
//        int a = 5 / 0;
    }
    public static void main(String[] args) {

        try{
            printName("ram kumar");
            printName("Maniyari");
        }catch (Exception e){
            System.out.println(e.getMessage());
        }finally {
            System.out.println("Badiya chal raha hai");
        }

    }
}
