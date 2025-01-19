package Trans;

public class Vehichle {
    public  String name;
    public String model;
    public  int numberOfTyres;

    // default contructor
    Vehichle(){
        System.out.println("Default constructor in Vehicle");
    }
    Vehichle(String name,String model,int numberOfTyres){
        System.out.println("parameterized constructor in Vehicle");
        this.name = name;
        this.model = model;
        this.numberOfTyres = numberOfTyres;
    }

    void startEngine(){
        System.out.println("Engine is starting of " + name + " " + model);
    }

    void stopEngine(){
        System.out.println("Engine is stopping of " + name + " " + model);
    }
}
