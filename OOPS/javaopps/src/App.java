public class App {
    public static void main(String[] args) throws Exception {

        Students A = new Students(1,20,"Ranu",5);
        System.out.println(A.name);
//        A.name = "Ramu";
        A.sleep();
        A.study();
        A.bunk();

        Students B = new Students(A);
        System.out.println(B.name);
        B.bunk();

//        Student A = new Student(1, 30, "Ram Kumar", 5, "piku");
//        System.out.println(A.getName());
//        System.out.println(A.getAge());
//        A.setAge(50);
//        System.out.println(A.getAge());
        // System.out.println(A.age);
        // System.out.println(A.id);
        // System.out.println(A.subject);

        // A.gfChatting();

//        A.study();
//        A.bunk();
//        A.sleep();
//
//        Student B = new Student(A);
//        B.bunk();

        // System.out.println("Hello, World!");
        // System.out.println("Ram Kumar Maniyari");

        // Student A = new Student();
        // A.id = 1;
        // A.name = "Ram Kumar";
        // A.age = 30;
        // A.subject = 6;

        // System.out.println(A.name);
        // System.out.println(A.age);
        // System.out.println(A.id);
        // System.out.println(A.subject);

        // A.study();
        // A.bunk();
        // A.sleep();
    }
}
