#include <iostream>

using namespace std;

int main(){

    cout << "Do while loop in cpp " << endl;

    int i = 1;
    
    do{
        cout << i << " ";
        i = i + 1;
    }while(i <= 5);

    cout << endl;

    for(int i = 1; i<= 3; i++){
        for(int j = 1; j <= 3; j++){
            cout << i << j << " ";
        }
        cout << endl;
    }


    return 0;
}