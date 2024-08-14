#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int mod = 1e9 + 7;
const int N = 1e6+100;

int n;
vector<int> pre;
vector<int> suf;
vector<int> v;

class Solution {
public:

	void deal(int pl, int pr, int sl, int sr, vector<int>& pre, vector<int>& suf){
		if(pl == pr) {v.push_back(pre[pl]); return;}
		int x = pre[pl+1];
		int pos = -1;
		for(int i = sl; i < sr; i++){
			if(suf[i] == x) pos = i;
		}
		deal(pl+1, pl+1+pos-sl, sl, pos, pre, suf);
		v.push_back(pre[pl]);
		if(pos+1 <= sr-1) return deal(pl+1+pos-sl+1,pr,pos+1,sr-1,pre,suf);
	}

    vector<int> solve(int n, vector<int>& pre, vector<int>& suf) {
        deal(0,n-1,0,n-1,pre,suf);
        return v;
    }
};


signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int a;
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> a;
    	pre.push_back(a);
    }
	for(int i = 0; i < n; i++){
    	cin >> a;
    	suf.push_back(a);
    }
    Solution r; 
    r.solve(n,pre,suf);
    for(auto j : v)
    	cout << j << " ";

    return 0;
}


