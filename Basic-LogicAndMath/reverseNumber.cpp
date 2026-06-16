#include <bits/stdc++.h>
using namespace std;    

int reverse(int x) {
    bool negative = x < 0;
    x = abs(x); 
    
    int rev = 0;
    while (x > 0){
        int LastDigit =x % 10;
        x /= 10;
        rev = rev*10 + LastDigit;
    }

    if (negative) rev = -rev;
    return rev;
}

int main() {
    int x;
    cin >> x;

    cout << reverse(x);
    return 0;
}