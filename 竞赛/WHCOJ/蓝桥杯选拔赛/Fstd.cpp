#include <bits/stdc++.h>

using namespace std;

const int N = 200010;
int n, m;
int p[N], sz[N], st[N];

int find(int x){
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

void merge(int a, int b){
    a = find(a), b = find(b);
    if (a == b)
        return;
    p[a] = b;
    sz[b] += sz[a];
}

int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        p[i] = i, sz[i] = 1;
    for (int i = 1; i <= m; i++){
        int a, b;
        cin >> a >> b;
        merge(a, b);
    }
    int q;
    cin >> q;
    int res = 0;
    while (q--){
        int op, x;
        cin >> op >> x;
        if (op == 1){
            x = find(x);
            if (!st[x])
                st[x] = 1, res += sz[x];
        }
        else{
            x = find(x);
            if (st[x])
                st[x] = 0, res -= sz[x];
        }
        cout << res << endl;
    }

    return 0;
}