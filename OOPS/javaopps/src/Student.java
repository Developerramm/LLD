public class Student {

    // attribute
    public int id;
    public int age;
    public String name;
    public int subject;

    // default constructor
    public Student() {
        System.out.println("This is default constructor");
    }

    // parameterized constructor
    public Student(int id, int age, String name, int subject) {
        System.out.println("parameterized constructor called");
        this.id = id;
        this.age = age;
        this.name = name;
        this.subject = subject;
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
}