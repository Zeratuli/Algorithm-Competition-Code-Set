#include <bits/stdc++.h>
using namespace std;

int ans = 0, cnt[100000];

int solve(int n){
    if(n==1) return 1;
    ans += n + solve(n-1);
    return 0;
}

int main(void){
    int n;
    cin >> n;
    for(int i = 1; i <= 1000; i++){
        solve(i);
        cnt[i] = ans;
    }
    cout << cnt[n]+1 << endl;
    return 0;
}