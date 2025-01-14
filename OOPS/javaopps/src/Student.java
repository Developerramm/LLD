public class Student {

    // attribute
    private int id;
    private int age;
    private String name;
    private int subject;

    private String gf;

    public String getName() {
        return this.name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getAge() {
        return this.age;
    }

    // default constructor
    public Student() {
        System.out.println("This is default constructor");
    }

    // parameterized constructor
    public Student(int id, int age, String name, int subject, String gf) {
        System.out.println("parameterized constructor called");
        this.id = id;
        this.age = age;
        this.name = name;
        this.subject = subject;
        this.gf = gf;
    }

    // copy constructor
    public Student(Student srcobj) {
        System.out.println("Copy constructor is called");
        this.id = srcobj.id;
        this.age = srcobj.age;
        this.name = srcobj.name;
        this.subject = srcobj.subject;
    }

    // method
    public void study() {
        System.out.println(name + "Studing");
    }

    public void sleep() {
        System.out.println(" Sleeping");
    }

    public void bunk() {
        System.out.println(" Bunking here");
    }

    private void gfChatting() {
        System.out.println("Gf Chatting here");
    }
}