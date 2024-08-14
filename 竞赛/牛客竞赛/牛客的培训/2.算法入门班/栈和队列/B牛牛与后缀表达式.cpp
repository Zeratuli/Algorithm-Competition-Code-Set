#include <bits/stdc++.h>

using namespace std;

int main(void){

    return 0;
}

class Solution {
public:
    long long cal(int l, int r, string A){
        int re = 0;
        for(int i = l; i <= r; i++){
            re += re*10 + (A[i]-'0');
        }
        return re;
    }

    long long legalExp(string str) {
        stack<string> st;
        long long l,r, ans = 0;
        memset(num,0,sizeof(num));
        int len = str.length();
        l = 0;
        int j = 0;
        for(int i = 0; i <= str; i++){
            if(str[i] == '#'){
                r = i-1;
                num[j++] = cal(l,r,str);
                l = i+1;
            }
            else if(str[i] == '+'){
                ans = num[0] + num[1];
                j = 1;
                num[0] = ans;
            }
            else if(str[i] == '-'){
                ans = num[0] - num[1];
                j = 1;
                num[0] = ans;
            }
            else if(str[i] == '*'){
                ans = num[0] * num[1];
                j = 1;
                num[0] = ans;
            }
        }
        return ans;
    }

};