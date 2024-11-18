#include<iostream>
using namespace std;

bool isSorted(int *arr,int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }

}
bool linearSearch(int *arr, int size, int key){
    if(arr == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }else{
        bool ans = linearSearch(arr+1,size-1,key);
        return ans;
    }
}
int sumOfArray(int *arr, int size){
    if(size == 0){
        return 0;
    }if(size == 1){
        return arr[0];
    }

    int sum = arr[0] + sumOfArray(arr+1,size-1);
    return sum;
    
}

void print(int *arr, int s, int e){
    for(int i = s; i <= e; i++){
        cout << arr[i] << " ";
    }cout << endl;
}
int binarySearch(int *arr, int s, int e, int k){
    print(arr,s,e);
    if(s > e){
        return false;
    }
    int mid = s + (e - s)/2;
    cout << "Value of mid is : " << mid << endl;
    if(arr[mid] == k){
        return mid;
    }
    if(k > arr[mid]){
        return binarySearch(arr,mid+1,e,k);
    }else{
        return binarySearch(arr,s,mid-1,k);
    }
}


int main(){

int arr[5] = {1,2,3,4,5};
// bool ans = isSorted(arr,5);
// if(ans){
//     cout << "Array is sorted";
// }

// int total = sumOfArray(arr,5);
// cout << total << endl;

// bool ans = linearSearch(arr,5,3);
// if(ans){
//     cout << "Present" << endl;
// }else{
//     cout << "Absent" << endl;
// }

int ans = binarySearch(arr,0,4,5);
cout << ans << endl;
    return 0;
}