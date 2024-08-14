#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int num = 5;
	deque<int> dq;//创建一个deque双端队列
	dq.push_back(5);  //在双端队列末尾插入5这个元素
	dq.push_front(6); //在双端队列队头插入6这个元素
	cout << dq.empty() << endl;//判断双端队列是否为空
	int len = dq.size();//输出双端队列的大小
	cout << len << endl;
	//back为5，front为6
	cout << dq.back() << endl;
	cout << dq.front() << endl;
	dq.resize(num);//重新规定双端队列的长度为num，若之前比num长则舍去后面超出的，若比num短则加上初始化的内容
	//num=1,下面的back和front都为6,num=5,back为0，front为6
	cout << dq.back() << endl;
	cout << dq.front() << endl;
	//int q = dq.insert(1,8);//插入值8
	deque<int>::iterator it;
	for(it = dq.begin(); it != dq.end(); it++)//遍历操作
		cout << *it << " ";
	cout << endl;

	return 0;
}
