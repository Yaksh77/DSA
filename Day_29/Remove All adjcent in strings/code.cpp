#include<iostream>
#include<string>
using namespace std;

string removeAdjacent(string str){
    string ans;
    for(char ch: str){
        if(!ans.empty() && ch == ans.back()){
            ans.pop_back();
        }else{
            ans.push_back(ch);
        }
    }


    return ans;

}
int main(){
    string str;
    cout << "Enter a string : ";
    getline(cin,str);
    cout << removeAdjacent(str);
    return 0;
}