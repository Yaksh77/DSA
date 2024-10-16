#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> books, int n, int students, int maxAllocation){
    int stud = 1,pages = 0;

    for(int i = 0; i < n; i++){

        if(books[i] > maxAllocation){
            return false;
        }else if(pages + books[i] <= maxAllocation){
            pages += books[i];
        }else{
            stud++;
            pages = books[i];
        }
    }
    if(stud > students){
        return false;
    }else{
        return true;
    }
}

int bookAllocation(vector<int> books,int n, int students){
    int start = 0, sum = 0, ans = -1;
    if(students > n){
        return -1;
    }
    for(int val : books){
        sum += val;
    }
    int end = sum;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if(isValid(books,n,students,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return ans;
    
}

int main(){
    vector<int> books = {2,1,3,4};
    int n = 4, students = 2;
    int result = bookAllocation(books,n,students);
    cout << result;
    return 0;
}