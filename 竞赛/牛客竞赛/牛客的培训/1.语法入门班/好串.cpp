#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
 
using namespace std;
 
stack<char> w;
int main()
{
    string s;
    cin >> s;
    if(s.size() & 1 ||s[0] != 'a' || s[s.size() - 1] != 'b')
        cout << "Bad" << endl;
    else
    {
        for(int i = 0; i < s.size(); i++ )
        {
            if(w.empty())
            w.push(s[i]);
            else
            {
                if(w.top() == 'a' && s[i] == 'b')
                w.pop();
                else
                w.push(s[i]);
            }
        }
        if(w.empty())
        cout << "Good" << endl;
        else
        cout << "Bad" << endl;
    }
    return 0;
 }
