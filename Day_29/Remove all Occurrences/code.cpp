#include<iostream>
using namespace std;

string removeOccurrence(string str, string part){
    while((str.length() > 0) && (str.find(part) < str.length())){
        str.erase(str.find(part),part.length());
    }
    return str;
}
int main(){

    string str;
    cout << "Enter a string : ";
    getline(cin,str);
    string part;
    cout << "Enter a part to erase : ";
    getline(cin,part);
    cout << removeOccurrence(str,part);
    return 0;
}