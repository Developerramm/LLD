public class Main {
    public static void main(String[] args) {
        Car C = new Car("Maruti", "800", 4, 5, "Automatic");

        MotorCycle M = new MotorCycle("Honda", "Gondai 400", 2, "Two", "Automatic");

        C.startEngine();
        C.startAc();
        C.stopEngine();
        System.out.println(C.name);

        M.startEngine();
        M.wheelie();
        M.stopEngine();
        System.out.println(M.name);
    }
}
