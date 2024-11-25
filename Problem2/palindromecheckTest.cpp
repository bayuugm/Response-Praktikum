#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, reversed;
    str = "racecar";
    
    for(int i = str.length() - 1; i >= 0; i--){
        reversed += str[i];
    }
    
    bool testPassed = true;
    
    if(reversed == str){
        cout << str << " is a palindrome." << endl;
        testPassed = true;
    }else{
        cout << str << " is not a palindrome." << endl;
        testPassed = false;
    }

    if(testPassed){
        cout << "TEST SUCCESSFUL!" << endl;
    }else{
        cout << "TEST UNSUCCESSFUL!" << endl;
    }

    return 0;
}
