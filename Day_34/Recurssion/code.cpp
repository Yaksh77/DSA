#include<iostream>
using namespace std;

// Factorial
int factorial(int n){
    // Base case is mandatory and 'return' statement is mandatory in base case
    if(n == 0){
        return 1;
    }

    int smallProblem = factorial(n-1);
    int bigProblem = n * smallProblem;

    return bigProblem;
}

// 2^n

int power(int n){
    if(n == 0){
        return 1;
    }

    int smallerProblem = power(n - 1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;
}

// Print Counting

void counting(int n){
    if(n == 0){  // Base Case
       return ;
    }
    cout << n << " "; // Processing Phase
    counting(n - 1); // Recursive Call
}


int main(){

    int n;
    cin >> n;
    int result  = power(n);
    cout << result << endl;
    counting(n);

    return 0;
}