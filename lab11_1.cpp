#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    string text,grade;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.\n";
    int factor = rand()%9;
    for(int i = 0; i<3; i++){
        getline(cin,text);
    }
    if(factor == 1){
        grade = "A";
    }
    else if(factor == 2){
        grade = "B+";
    }else if(factor == 3){
        grade = "B";
    }else if(factor == 4){
        grade = "C+";
    }else if(factor == 5){
        grade = "C";
    }else if(factor == 6){
        grade = "D+";
    }else if(factor == 7){
        grade = "D";
    }else if(factor == 8){
        grade = "F";
    }else if(factor == 0){
        grade = "W";
    }
    cout << "You will get "<<grade<<" in this 261102.";
}