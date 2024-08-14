#include <bits/stdc++.h>

using namespace std;

int a[10100], b[10100],c[10100],d[10100];

int main(void)
{
    int l = -1;
    int n,k,x,y;
    cin >> n;
    for(int i = 1; i <= n; i++)
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    cin >> x >> y;
    for(int i = 1; i <= n; i++)
        if(a[i] <= x && b[i] <= y && a[i] + c[i] >= x && b[i] + d[i] >= y)
            l = i;
    cout << l << endl;
    
    
    return 0;
}

