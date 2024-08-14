#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;

int a,k = 0,d = 0;
map<int,int> mp;

vector<int> v;

void solve(){
    map<int,int>::iterator it;
    int count = 0, num = -1, num2 = 0, num22 = 0;//count记录奇数数量，num记录奇数位置的数字，num2记录出现的数字的种类，num22记录出现的数字的总数
    for(it = mp.begin(); it != mp.end(); it++){
        int temp = it->second;
        if(it->second & 1){
            count++; 
            num = it->first;
        }
        if(it->second != 0){
            num2++;
            num22 += it->second;
        }
        if(count >= 2){
            cout << -1; 
            return ;
        }
        else {
            if(it->second >= 2) 
                temp = it->second/2; 
            while(temp-- > 0){
                v.push_back(it->first);
            }
        }
    }
    it = mp.begin();
    //cout << it->first << " " << it->second << endl;
    if(num22 == 1) {
        cout << v[0]; return ;
    }
    if(count >= 2 || count == 1 && (it->second > 1) && num2 == 2 && (num22-it->second) < 2){
        cout << -1; 
        return ;
    }
    while(v[k] == 0){
        k++;
    }
    if(it->second == 1 && num2 > 1) 
        v.erase(v.begin());
    if(it->second >= 1 && num2 > 1) 
        swap(v[0],v[k]);
    
    
    for(auto j:v) cout << j;
    if(num != -1) cout << num;
    reverse(v.begin(),v.end());
    for(auto j:v) cout << j;
    
}

signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    for(int i = 0; i < 10; i++){
        cin >> a;
        mp.insert(pair<int,int>(i,a));
    }
    solve();

    return 0;
}