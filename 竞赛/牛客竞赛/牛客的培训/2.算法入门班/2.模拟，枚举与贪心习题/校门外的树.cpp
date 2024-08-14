#include <bits/stdc++.h>

using namespace std;

int  l, m;

struct ty
{
	int x,y;
}a[1000];


bool comp(ty a,ty b)
{
	if(a.x<b.x) return 1;
	return 0;	
}
int main(void)
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> l >> m;
    for(int i = 1; i <= m; i++)
	{
    	cin >> a[i].x >> a[i].y;
    }
    
    sort(a+1,a+1+m,comp);
//    for(int i = 1; i <= m; i++)
//	{
//    	cout << a[i].x << " " <<a[i].y << endl;;
//    }
    int cnt = l+1;
    int l=a[1].x;
//  cout << l  << endl;
//  cout << cnt << endl;
	int r=a[1].y;
//	cout << " r" << r << endl;
	for(int i = 2; i <= m; i++)
	{
		if(a[i].x < r){
			r = max(r,a[i].y);
//			cout <<  "r: " << r << " " << endl;	
		}
		else
		{
			cnt -= (r-l+1);
			l = a[i].x,r = a[i].y;
//			cout << "cnt " <<cnt << endl;
		}
	}
	cnt -= (r-l+1);
	cout << cnt;
	
    return 0;
}
