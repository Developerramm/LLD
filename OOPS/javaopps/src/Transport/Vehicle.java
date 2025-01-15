
public class Vehicle {

    public String name;
    public String model;
    public int noOfTyres;

    // this is default contructor
    Vehicle() {
        this.name = "";
        this.model = "";
        this.noOfTyres = -1;
        System.out.println("This is default constructor of Vehicle");
    }

    // this is parameterized contructor
    Vehicle(String name, String model, int noOfTyres) {
        System.out.println("Parameterized constructor of Vehicle");
        this.name = name;
        this.model = model;
        this.noOfTyres = noOfTyres;
    }

    public void startEngine() {
        System.out.println("Engine is starting of " + name + " " + model);
    }

    public void stopEngine() {
        System.out.println("Engine is stopping of " + name + " " + model);
    }
}
