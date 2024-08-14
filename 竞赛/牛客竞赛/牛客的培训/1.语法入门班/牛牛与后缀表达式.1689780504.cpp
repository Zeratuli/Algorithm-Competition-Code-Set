class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * ����һ����׺���ʽ���������Ľ��
     * @param str string�ַ��� * @return long������
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
