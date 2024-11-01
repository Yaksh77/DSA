#include<iostream>
#include<string>
using namespace std;

// string replaceWhitespaces(string str){
//     string temp = "@40";
//     for(int i = 0; i < str.length(); i++){
//       if(str[i] == ' '){
//         for(int j = 0, k = i; j < temp.length(); j++, k++){
            
//             str[k] = temp[j]; 
//         }
//       }
//     }
//     return str;
// }


string replaceWhitespaces(string str){
    string temp = "";
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}


int main(){
    string str;
    cout << "Enter a string : ";
    getline(cin,str);
    string outString = replaceWhitespaces(str);
    cout << outString << endl;

    return 0;
}