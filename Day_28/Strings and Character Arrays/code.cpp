#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){

    // string str = "Hello World";
    // char str1[] = "Hello World";

    // char str2[100];
    // cout << "Enter string for array : ";
    // cin >> str2;
    // cout << str << endl;
    // cout << str1 << endl;
    // cout << str2 << endl; // Display Hello only

    // char str3[12];
    // cout << "Enter string for array : ";
    // // cin.getline(str3,100);
    // cin.getline(str3,12); // It takes strings until string gets the value '^'

    // // cout << str3 << endl;
    // for(char c : str3){
    //     cout << c << " ";
    // }
    // cout << endl;

    // string str = "Yaksh";
    // cout << str[0] << endl;
    // int length = 0;
    // for(int i = 0; i<str[i] != '\0'; i++){
    //     length++;
    // }
    // cout << length << endl;

    // string str4 = "Hello";
    // string str5 = "world";
    // cout << str4 + str5 << endl;

    // Geting string input using getline() method
    // string str6;
    // getline(cin,str6);
    // cout << str6 << endl;
    // cout << str6.length() << endl;

    char arr[] = "Yaksh";
    int start = 0, end = 5-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(char ch : arr){
        cout << ch << " ";
    }

    string str = "Yaksh";
    reverse(str.begin(),str.end());
    cout << str << endl;



    


    return 0;
}