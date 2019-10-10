#include <string>
#include <iostream>
using namespace std;

bool isPalindrome(const string& str){
    int length = str.length();
    if(length < 2){
        cout << "true" << endl;
        return true;
    }else if(str[0] != str[str.length()-1]){
        cout << "false" << endl;
        return false;
    }else{
        if(str.at(1) == str.at(length-2)){
            cout << "true" << endl;
            return isPalindrome(str);
        }else{
            cout << "false" << endl;
            return false;
        }
    }
}