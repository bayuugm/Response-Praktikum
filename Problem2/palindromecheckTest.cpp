#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, reversed;
    cout << "Enter a string/word: ";
    getline(cin,str);

    for(int i = str.length() - 1; i >= 0; i--){
        reversed += str[i];
    }

    if(reversed == str){
        cout << str << " is a palindrome." << endl;
    }else{
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
