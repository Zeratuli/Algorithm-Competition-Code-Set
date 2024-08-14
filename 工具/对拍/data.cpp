#include<bits/stdc++.h>
#define ll long long

ll Random(ll mod)
{
    ll ans = 2147483647;
    return ans = ans * rand() % mod + 1;
}

int main()
{
    struct _timeb T;
    _ftime(&T);
    srand(T.millitm);
    
    ll n;
    int t = 100000;
    int j = 10000;
    while(t--){
        int k = j;
        printf("%d\n",j++);
        while (k--);
        {
            n = Random(1000);
            printf("%lld ", n);
        }
    }
    return 0;
}
