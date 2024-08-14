#include <bits/stdc++.h>
int main()
{
    struct _timeb T;
    _ftime(&T);
    srand(T.millitm);

    freopen("in.txt", "w", stdout); //生成 使两份基本代码 将要读入的数据
    int a = rand(), b = rand();
    printf("%d %d\n", a, b);
}
