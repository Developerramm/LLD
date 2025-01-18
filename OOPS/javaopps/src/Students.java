public class Students {

    // attribute
    public  int id;
    public  int age;
    public  String name;
    public int numberOfSubjects;

    // constructor

    // default constructor
    public  Students(){
        System.out.println("Students default constructor");
    }

    // parameterized constructor
    public Students(int id,int age,String name, int numberOfSubjects){
        System.out.println("Parameterized constructor");
        this.id = id;
        this.age = age;
        this.name = name;
        this.numberOfSubjects = numberOfSubjects;
    }

    // copy constructor in java
    public Students(Students srcobj){
        System.out.println("copy  constructor");
        this.id = srcobj.id;
        this.age = srcobj.age;
        this.name = srcobj.name;
        this.numberOfSubjects = srcobj.numberOfSubjects;
    }

    // behaviour
    public  void study(){
        System.out.println(name + " Studying ");
    }

    public  void sleep(){
        System.out.println(name + " Sleeping ");
    }

    public  void  bunk(){
        System.out.println(name + " Bunking ");
    }

    

}
