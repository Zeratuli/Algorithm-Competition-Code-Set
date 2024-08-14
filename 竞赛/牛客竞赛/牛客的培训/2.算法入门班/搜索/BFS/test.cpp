#include<bits/stdc++.h>
using namespace std;
const int N = 21, M = 1e6 + 10;
string a[N], b[N], op, ed;
map<string, int> mp1, mp2;
queue<string> q1, q2;
int step[M], cnt, k;

int extend(queue<string> &q, map<string, int> &mp1, map<string, int> &mp2, string a[], string b[]) {
    int size = q.size();
    for(int z = 0;z < size;z++) {
        auto s = q.front();
        q.pop();
        for(int i = 0;i < s.size();i++) {
            for(int j = 1;j <= k;j++) {
                int pos = s.find(a[j], i);
                if(pos != s.npos) {
                    string t = s;
                    t.replace(pos, a[j].size(), b[j]);
                    cout << t << "<-t,s->" << s << endl;
                    if(mp2.find(t) != mp2.end()){
                        return step[mp2[t]] + step[mp1[s]] + 1;
                    }
                    if(mp1.find(t) == mp1.end()) {
                        mp1[t] = ++cnt;
                        step[cnt] = step[mp1[s]] + 1;

                        q.push(t);
                    }
                }
            }
        }
    }
    return 21;
}

int bfs() {
    q1.push(op);q2.push(ed);
    mp1[op] = ++cnt, mp2[ed] = ++cnt;
    while(q1.size() && q2.size()) {
        int x = -1;
        if(q1.size() <= q2.size()) {
            x = extend(q1, mp1, mp2, a, b);
        }
        else x = extend(q2, mp2, mp1, b, a);
        if(x < 21) return x;
    }
    return -1;
}

void solve() {
    cin >> op >> ed;
    cin >> k;
    for(int i = 1; i <= k; i++){
        cin >> a[i] >> b[i];
    }
    int ans = bfs();
    if(ans == -1) cout << "NO ANSWER!" << '\n';
    else cout << ans << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T = 1;
    //cin >> T;
    while(T -- ) {
        solve();
    }
    return 0;
}