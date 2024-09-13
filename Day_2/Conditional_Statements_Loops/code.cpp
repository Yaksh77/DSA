#include <iostream>
using namespace std;

int main(){

    // ----- if-else -----
    int age;
    cout << "Enter your age : ";
    cin>> age;

    if(age >=18){
        cout << "You can vote\n";
    } else{
        cout << "You cannot vote\n";
    }

    // ----- else=-if -----
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if(marks >= 90){
        cout << "You have got A\n";
    } else if(marks >=80 && marks < 90){
        cout << "You have got B\n";
    } else{
        cout << "You have got C\n";
    }

    // Practice-1

    char input;
    cout << "Enter any character : ";
    cin >> input;

    if(input >= 'a' && input <='z'){
        cout << "Lowercase character\n";
    } else{
        cout << "Uppercase Character\n";
    }

    // ----- Ternary Statement -----
    int num = 10;
    cout << (num >= 0? "Positve\n" : "Negative\n");

    // ----- Loops -----

    // -- while loop --

    int i = 1;
    while(i <= 5){
        cout << i << endl;
        i++;
    }

    // -- for loop --
    
    for(int j = 1;i <= 5; i++){
        cout << i << "\n";
    }

    // Practice-1

    int sum = 0;
    int n;
    cout << "Enter number you want sum of : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        sum += i;
        // -- break statement --
        if(i == 5){
            break;
        }
    }
    cout << "Sum = " << sum << "\n";

    // Practice-2

    int userNum;
    int oddSum = 0;
    int evenSum = 0;
    cout << "Enter number : ";
    cin >> userNum;

    for(int j=1;j <=userNum;j++){
        if(j % 2 != 0){
            oddSum += j;
        } else{
            evenSum += j;
        }
    }

    cout << "Sum of odd numbers : " << oddSum << "\n";
    cout << "Sum of even numbers : " << evenSum << "\n";

    // ----- do-while loop -----
    int numEnt = 10;
    int k = 1;
    do{
        cout << k << " ";
        k++;
    }while(k <= numEnt);

    // Practice-1

    int enterNum;
    bool isPrime = true;
    cout << "Enter number to check wheather number is prime or not : ";
    cin >> enterNum;

    // -- Optimized way --

    for(int i = 2; i * i  <= enterNum; i++){
        if(enterNum % i == 0){
            isPrime = false;
        }
    }
    if(isPrime == true){
        cout << "Prime number";
    }else{
        cout << "Non prime number";
    }
    
    // ----- Nested loops -----
    int inputNum;
    cout << "Enter number for stars : ";
    cin >> inputNum;
    for(int i=0; i< 5; i++){
        for(int j=0; j < inputNum; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0; 
}
