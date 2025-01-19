package Trans;

public class MotorCycle extends Vehichle {
    public String handleBarStyle;
    public String suspensionType;

    MotorCycle(){
        System.out.println("Motor Cycle default constructor is called");
    }

    MotorCycle(String name,String model,int numberOfTyres,String handleBarStyle,String suspensionType){
        super(name,model,numberOfTyres);
        this.handleBarStyle = handleBarStyle;
        this.suspensionType = suspensionType;
        System.out.println("Motor Cycle parameterized constructor is called");
    }

    public  void wheelie(){
        System.out.println("Motorcycle is doing wheelie " + name);
    }
}
