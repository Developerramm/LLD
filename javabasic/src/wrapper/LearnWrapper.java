package wrapper;

public class LearnWrapper {
    public static void main(String[] args) {
        int a = 5;
        double b = 5.65;

        Integer aObj = Integer.valueOf(a);
        Double bObj = Double.valueOf(b);

        if(aObj instanceof Integer){
            System.out.println("An object of Integer is created");
        }

        if(bObj instanceof Double){
            System.out.println("An object of Double is created");
        }

        // auto boxing -
        Integer m = 10;
        if(m instanceof Integer){
            System.out.println("hahahaha");
        }
    }
}
