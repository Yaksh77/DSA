#include <iostream>
using namespace std;

int main(){
// ====== 231. Power of Two ======

    //     class Solution {
    // public:
    //     bool isPowerOfTwo(int n) {
    //         int ans = 1;
    //         for(int i=0; i <= 30; i++){
    //             if(ans == n){
    //                 return true;
    //             }
    //             if(ans < INT_MAX/2)
    //              ans = ans * 2;
    //         }
    //         return false;
    //     }
    // };

// ===== 7. Reverse Integer ======

    // class Solution {
    // public:
    //     int reverse(int x) {
    //         int ans = 0;
    //         int rem = 0;
            
    //         while(x !=0){
    //             if(ans > INT_MAX/10 || ans < INT_MIN/10){
    //              return 0;
    //             }
    //             rem = x % 10;
    //             ans = (ans*10)+rem;
    //             x /= 10;
    //         }
    //         return ans;
    //     }
    // };

// ====== 1009. Complement of Base 10 Integer ======

    //     class Solution {
    // public:
    //     int bitwiseComplement(int n) {
    //         int m = n;
    //         int mask = 0;
    //         int ans = 0;
    //         if(n == 0){
    //             return 1;
    //         }
    //          while(m != 0){
    //             mask = (mask << 1) | 1;
    //             m = m >> 1;
    //          }
    //          ans = (~n) & mask;
    //          return ans;
    //     }
    // };
}

