#include <stdio.h>
#include <math.h>
#define int long long

const int N = 1e6+100;
const int mod = 1e9+7;
int n,k,r = -0x3fff,l = 0;
int a[N];

bool judge(int mid){
	int sum = 0;
	int i;
	for(i = 1; i <= n; i++){
		if(a[i] <= mid) continue;
		sum += ceil((a[i]-mid)*1.0/(k-1)*1.0);
	}
	return sum <= mid;
}

void solve(){
	
	scanf("%d",&n);
	int i;
	for(i = 1; i <= n; i++){
		scanf("%d",&a[i]);
		r = fmax(r,a[i]);
	}
	scanf("%d",&k);
	if(k == 1)
	{
		printf("%d\n",r);
		return ;
	}
	while(l<=r){
		int mid = (l+r)>>1;
		if(judge(mid)) r = mid-1;
		else l = mid+1;
	}
	printf("%d\n",r+1);

	return ;
}

signed main(void){

	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
