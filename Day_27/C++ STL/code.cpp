#include<iostream>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;

// Custom comparators
bool ascendingComparator(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first < p1.first) return true;
    else return false;
}
int main(){
    
    // pair<int,int> p = {1,2};
    // cout << p.first << " " << p.second << endl;
    
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);

    // stack<int> s2;
    // s2.swap(s);
    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << s2.size();

    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // while(!q.empty()){
    //     cout << q.front() << " ";
    //     q.pop(); 
    // }

    // priority_queue<int> pq;
    // pq.push(5);
    // pq.push(10);
    // pq.push(4);
    // pq.push(3);
    // while(!pq.empty()){
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    // Gives elements in ascending order 
    // priority_queue<int,vector<int>,greater<int>> pq;
    // pq.push(5);
    // pq.push(10);
    // pq.push(4);
    // pq.push(3);
    // while(!pq.empty()){
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    // map<string,int> m;
    // m["tv"] = 10;
    // m["laptop"] = 20;
    // m["toy"] = 30;
    // m["bottle"] = 50;
    // m["camera"] = 100;
    // m.insert({"watch",200});
    // m.insert({"pencil",300});

    // for(auto val : m){
    //     cout << val.first << " " << val.second << endl;
    // }
    // cout << "Camera count = " << m.count("camera") << endl;
    // cout << "Value of pencil = " << m["pencil"] << endl;
    // cout << "Size of the Map = " << m.size() << endl;

    // if(m.find("camera") != m.end()){
    //     cout << "Find the element\n";
    // }else{
    //     cout << "Not found\n";
    // }

    // multimap<string,int> mm;
    // mm.emplace("tv",100); 
    // mm.emplace("tv",1000); 
    // mm.emplace("tv",1000); 
    // mm.emplace("tv",10000); 

    // // mm.erase("tv");
    // mm.erase(mm.find("tv"));
    // for(auto val: mm){
    //     cout << val.first << " " << val.second << endl;
    // }

    // unordered_map<string,int> um;
    // um.insert({"tv",1000});
    // um.insert({"laptop",1000});
    // // um.insert({"tv",1000}); // Duplicate keys not allowed
    // um.insert({"Compass",1000});
    // um.insert({"bottle",1000});
    
    // for(auto val : um){
    //     cout << val.first << " " << val.second << endl;
    // }
    // cout << um.size();

    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);

    // for(int val : s){
    //     cout << val << " ";
    // }
    // cout << endl;
    // cout << s.size() << endl;
    // cout << *(s.lower_bound(4)) << endl; // 4
    // cout << *(s.upper_bound(4)) << endl; // 5

    // multiset<int> mm;
    // mm.insert(1); 
    // mm.insert(2); 
    // mm.insert(3); 
    // mm.insert(4); 
    // mm.insert(1); 
    // mm.insert(2); 

    // for(int val : mm){
    //     cout << val << " ";
    // }

// Gives elements in unsorted manner
    // unordered_set<int> um;
    // um.insert(1);
    // um.insert(2);
    // um.insert(3);
    // um.insert(4);
    // um.insert(5);

    // for(int val : um){
    //     cout << val << " ";
    // }

    // int arr[] = {5,3,4,6,2,1};
    // sort(arr,arr+6);
    // for(int val : arr){
    //     cout << val <<  " ";
    // }

    // vector<int> vec = {2,6,2,4,5,3,2};
    // sort(vec.begin(),vec.end());
    // for(int val : vec){
    //     cout << val << " ";
    // }

    // vector<int> vec = {2,6,2,4,5,3,2};
    // sort(vec.begin(),vec.end(),greater<int>());
    // for(int val : vec){
    //     cout << val << " ";
    // }

    // Custom Comparator or functor

    // vector<pair<int,int>> vec;
    // vec.push_back({1,2});
    // vec.push_back({4,1});
    // vec.push_back({3,5});
    // vec.push_back({2,3});
    // vec.push_back({8,1});
    // // sort(vec.begin(),vec.end(),greater<pair<int,int>>());
    // sort(vec.begin(),vec.end(),ascendingComparator);
    // for(auto p : vec){
    //     cout << p.first << " " << p.second << endl;
    // }

    // vector<int> vec = {1,2,3,4,5};
    // reverse(vec.begin(),vec.end());
    // for(int val : vec){
    //     cout << val << " ";
    // }

    // string s = "abc";
    // next_permutation(s.begin(),s.end());
    // cout << s << endl;
    // s = "bca";
    // prev_permutation(s.begin(),s.end());
    // cout << s << endl;

    // int a = 10, b = 20;
    // cout << max(a,b)<<endl;
    // cout << min(a,b)<< endl;
    // swap(a,b);
    // cout << "a = "<< a << endl;
    // cout << "b = "<< b << endl;

    // vector<int> vec = {2,3,10,30,40,23};
    // cout << *(max_element(vec.begin(),vec.end())) << endl;
    // cout << *(min_element(vec.begin(),vec.end())) << endl;

    // cout << binary_search(vec.begin(),vec.end(),2);

    return 0;
}