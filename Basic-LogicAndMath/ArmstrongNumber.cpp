#include <bits/stdc++.h>
using namespace std;

void checkArmstrong(int n){
    int original = n;
    int sum = 0;
    while (n > 0){
        int lastDigit = n % 10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        n /= 10;
    }
    if(sum == original){
        cout<< "Armstrong Number";
    }else {
        cout<< "Not Armstrong Number";
    }
}


int main() {
    int n;
    cin >> n;

    checkArmstrong(n);
    return 0;
}