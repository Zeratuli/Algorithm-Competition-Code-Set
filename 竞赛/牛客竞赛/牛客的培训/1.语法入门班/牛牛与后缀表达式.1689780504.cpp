class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 给定一个后缀表达式，返回它的结果
     * @param str string字符串 * @return long长整型
     */
    long long legalExp(string str) {
        // write code here
        long long len = str.length();
        stack<long long> st;long long t = 0;
        for(int i = 0; i < len; i++)
        {
            
            if(str[i] >= '0' &&  str[i] <= '9')
            {
                t *= 10;
                t += str[i]-'0';
            }
            else if(str[i] == '#')
            {
                st.push(t);
                t = 0;
            }
            else if(str[i] == '+')
            {
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                st.push(a+b);
            }
            else if(str[i] == '-')
            {
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                st.push(b-a);
            }
            else if(str[i] == '*')
            {
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                st.push(b*a);
            }
            else if(str[i] == '/')
            {
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                st.push(b/a);
            }
        }
        return st.top();
    }
};
