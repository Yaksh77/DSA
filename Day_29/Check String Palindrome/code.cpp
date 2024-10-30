#include<iostream>
#include<string>
using namespace std;

// bool isAplhaNum(char ch){
    // if((ch > '0' && ch <= '9')||(tolower(ch) > 'a' && tolower(ch) <= 'z')){
    //     return true;
    // }else{
    //     return false;
    // }

// }
bool checkPalindrome(string str){
    int start = 0, end = str.length() - 1;
    while (start < end)
    {
        if(!isalnum(str[start])){
            start++;
            continue;
        }else if(!isalnum(str[end])){
            end--;
            continue;
        }
        if(tolower(str[start])!=tolower(str[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
    
}
int main(){
    string str;
    cout << "Enter a string : ";
    getline(cin,str);
    if(checkPalindrome(str)){
        cout << "String is palindrome";
    }else{
        cout << "String is not palindrome";
    }

    return 0;
}