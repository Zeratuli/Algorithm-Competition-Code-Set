#include <iostream>
#include <stack>
using namespace std;

stack<int> st;

int main(void){
	
	int n;

	scanf("%d",&n);
	int a[n];
	for(int i = 1; i <=n; i++)
	{
		scanf("%d",&a[i]);
	}
	int j = 1;
	for(int i = 1; i <= n; i++)
	{
		st.push(i);
		while(!st.empty() && a[j] == st.top())
		{
			st.pop();
			j++;
		}
	}
	if(!st.empty())cout<<"cannot\n";
	else cout << "can\n" ;
	
	return 0;	
}
