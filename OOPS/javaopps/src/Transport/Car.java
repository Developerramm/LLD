public class Car extends Vehicle {

    public int noOfDoors;
    public String transmissionType;

    Car(String name, String model, int noOfTyres, int noOfDoors, String transmissionType) {
        super(name, model, noOfTyres);
        this.noOfDoors = noOfDoors;
        this.transmissionType = transmissionType;
        // super.startEngine();
        System.out.println("parameterized constructor of Car");
    }

    public void startAc() {
        System.out.println("Ac started of " + name);
    }

}
