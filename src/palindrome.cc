#include <string>
#include <iostream>
using namespace std;

bool isPalindrome(const string& str) {

    int n = str.length();

    if (n < 2) {                        //returns true if string is empty or single character
        cout << "true" << endl;
        return true;
    } else if (str[0] != str[n - 1]) {       //returns false if first and last letters are different
        cout << "false" << endl;
        return false;
    }else{
        return isPalindrome(str.substr(1,n-2));         //using substring and recursion to traverse
    }                                                                //the rest of the string
}
