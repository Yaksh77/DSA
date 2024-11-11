#include<iostream>
using namespace std;

void test(int *p){
    p = p + 1;
}
void test1(int *p){
    *p = *p + 1;
}
void test2(int *arr){
   cout << arr << endl;
}
void test3(int *p){  // Pass by reference
   cout << p << endl;
}
int main(){
    // int arr[10] = {1,2,3};
    // cout << arr << endl; // It will print address of the first location of the array

    // char ch[6] = "Yaksh";
    // cout << ch << endl; // It will print entire characters because "cout" will act different for both int and char array

    // char *c = &ch[0];
    // cout << c << endl; // It will also print entire characters

    // char test = 'z';
    // char *ptr = &test; // It will print characters untill it got null '\0' character
    // cout << ptr << endl;

    // char *c = "abcde"; // This will give warning and not recommended to use
    // cout << c << endl;

    // int value = 5;
    // int *p = &value;
    // cout << "Before " << *p << endl;
    // test1(p);
    // cout << "After " << *p << endl;

    // int arr[5] = {1,2,3,4,5};
    // cout << arr << endl;
    // test(arr);

    int val = 10;
    cout << &val << endl;
    test3(&val);

    return 0;
}