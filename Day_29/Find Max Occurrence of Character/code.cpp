#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
char maxCharacter(string str){
    vector<int> vec(26,0);
    int idx = 0;
    for(int i = 0; i < str.length(); i++){
        idx = str[i] - 'a';
        vec[idx]++;
    }
    int maxIdx = -1, ans = 0;
    for(int i = 0; i<26; i++ ){
        if(maxIdx < vec[i]){
            ans = i;
            maxIdx = vec[i];
        }
    }
    return ans + 'a';

}
int main(){
    string str = "test";
   char result=  maxCharacter(str);
   cout << result << endl;
    return 0;
}