#include<iostream>
#include<vector>
using namespace std;

  // ---- Linear search in vector ----
    int search(vector<int> &nums, int target){
      for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << "\t" << i << endl;
        if(nums[i] == target){
            return i;
        }
      }
    }

int main(){

    // vector<int> vec; 

    // vector<int> vec = {1,2,3};

    // vector<int> vec(5,0);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;

    // vector<char> vec = {'a','b','c','d'};
    // for(char val : vec){
    //     cout << val << endl;
    // }

    // vector<int> vec;

    // cout << "Size of vec : " << vec.size() << endl;

    // vec.push_back(25);
    // vec.push_back(30);
    // vec.push_back(35);
    // vec.push_back(40);

    // for(int val : vec){
    //     cout << val << endl;
    // }

    // cout << "Size of vec after push_back : " << vec.size() << endl; 

    // vec.pop_back();
    // for(int val : vec){
    //     cout << val << endl;
    // }

    // cout << "Vectors front and back elements : " << endl; 
    // cout << vec.front() << endl;
    // cout << vec.back() << endl;

    // cout << "at() method for specific value in vector : " << endl;
    // cout << vec.at(2);

    vector<int> vec;
    vec.push_back(25);
    vec.push_back(30);
    vec.push_back(35);
    vec.push_back(40);
    vec.push_back(10);
    vec.push_back(45);

    // cout << "Size of a vector : " << vec.size() << endl; 
    // cout << "Capacity of a vector : " << vec.capacity() << endl; // 25 30 35 40 45 _ _ _

  int resultIndex = search(vec,10);
  cout << "Targeted element is at positions is : " << resultIndex << endl;



    return 0;
}