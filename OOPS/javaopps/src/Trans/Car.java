package Trans;

public class Car extends Vehichle{
    public  int numberOfDoors;
    public  String transmissionType;

    Car(){
        System.out.println("Car default constructor is called");
    }

    Car(String name,String model,int numberOfTyres,int numberOfDoors,String transmissionType){
        super(name,model,numberOfTyres);
        this.numberOfDoors = numberOfDoors;
        this.transmissionType = transmissionType;
        System.out.println("Car parameterized constructor is called");
    }

    public  void startAC(){
        System.out.println("AC starting of " + name + " " + model);
    }
}
