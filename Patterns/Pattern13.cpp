#include<bits/stdc++.h>
using namespace std;

void pattern13(int n){
    int ctr = 1;
    for (int i = 1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<< ctr;
            ctr++;
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    pattern13(n);
}