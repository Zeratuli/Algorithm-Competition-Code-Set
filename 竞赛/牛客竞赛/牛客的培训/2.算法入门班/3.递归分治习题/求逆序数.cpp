#include <bits/stdc++.h>
using namespace std;
#define int long long;
const int mod = 1e9 + 7;
const int N = 1e6+100;

int n,ans = 0;
int a[N];

void merge_sorting(int l, int r){
    if(l == r)
    
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(false);cout.tie(false);

    memset(a,0,sizeof(a));
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    merge_sorting(0,n-1);

    return 0;
}