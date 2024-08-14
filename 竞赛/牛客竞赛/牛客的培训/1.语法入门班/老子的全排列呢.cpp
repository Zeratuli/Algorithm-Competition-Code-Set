#include <bits/stdc++.h>

using namespace std;

int main(void){
    int  a[9] = {0,1,2,3,4,5,6,7,8};
    for(int i = 1;i <= 8*7*6*5*4*3*2*1; i++)
    {
        for(int i = 1; i <= 8; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        next_permutation(a+1,a+9);
    }
    
    
    
    return 0;
}
