#include<bits/stdc++.h>
using namespace std;

void pattern3(int n){
    for (int i=0; i<n; i++){
        int val =1;
        for (int j=0;j<=i; j++){
            cout<<val;
            val++;
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    pattern3(n);
}