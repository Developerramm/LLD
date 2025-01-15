public class MotorCycle extends Vehicle {
    public String handleBarStyle;
    public String suspensionType;

    MotorCycle(String name, String model, int noOfTyres, String handleBarStyle, String suspensionType) {
        super(name, model, noOfTyres);
        this.handleBarStyle = handleBarStyle;
        this.suspensionType = suspensionType;
        System.out.println("MotorCycle ka constructor hu bhai");
    }

    public void wheelie() {
        System.out.println("Motor Cycle is doing whieeling " + name);
    }

}
