#include <iostream>
using namespace std;

int main(){

    int budget;
    cout << "Enter your budget: ";
    cin >> budget;

    if(budget > 200000){
        cout << "You can buy Scorpio" << endl;
    }else{
        cout << "you can not a car" << endl;
    }

    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age > 18){
        cout << "You can vote" << endl;
    }


    int marks;
    cout << "Enter your marks" << endl;
    cin >> marks;

    if(marks > 90){
        cout << "Grade A" << endl;
    }else if(marks > 80){  // 80 < marks <= 90
        cout << "Grade B" << endl;

    }else if(marks > 70){  // 70 < marks <= 80  
        cout << "Grade C" << endl;  
    }else if(marks > 60){  // 60 < marks <= 70  
        cout << "Grade D" << endl;  
    }else{
        cout << "You are failed grade" << endl;
    }


    int height;
    cout << "Enter your height: ";
    cin >> height;
    int weight;
    cout << "Enter your weight: ";
    cin >> weight; 

    if(height > 5){
        if(weight > 50){
            cout << "You are healthy" << endl;
        }else{
            cout << "Bhai tumse na ho payega" << endl;
        }
    }else{
        cout << "complan dila du" << endl;
    }
    
    
    return 0;
}