#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, reversed;
    str = "bayu putra";
    expectedResult = "artup uyab";

    for(int i = str.length() - 1; i >= 0; i--){
        reversed += str[i];
    }

    cout << "The reversed string is: " << reversed << endl;
  
    if(reversed == expectedResult){
      cout << "TEST SUCCESSFUL" << endl;
    }else{
      cout << "TEST UNSUCCESSFUL" << endl;
    }

    return 0;
}
