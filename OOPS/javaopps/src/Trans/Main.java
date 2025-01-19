package Trans;

public class Main {
    public static void main(String[] args) {
        Car C = new Car("maruti","800",4,4,"Automatic");
        C.startEngine();
        C.startAC();
        C.stopEngine();

        MotorCycle M = new MotorCycle("Hunda","250C",2,"Circular","Manual");
        M.startEngine();
        M.wheelie();
        M.stopEngine();

    }
}
