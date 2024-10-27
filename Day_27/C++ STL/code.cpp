#include<iostream>
#include<stack>
#include<queue>
#include<map>


using namespace std;
int main(){
    
    pair<int,int> p = {1,2};
    cout << p.first << " " << p.second << endl;
    
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

    map<string,int> m;
    m["tv"] = 10;
    m["laptop"] = 20;
    m["toy"] = 30;
    m["bottle"] = 50;
    m["camera"] = 100;
    m.insert({"watch",200});
    m.insert({"pencil",300});

    for(auto val : m){
        cout << val.first << " " << val.second << endl;
    }
    cout << "Camera count = " << m.count("camera") << endl;
    cout << "Value of pencil = " << m["pencil"] << endl;
    cout << "Size of the Map = " << m.size() << endl;

    if(m.find("camera") != m.end()){
        cout << "Find the element\n";
    }else{
        cout << "Not found\n";
    }


    return 0;
}