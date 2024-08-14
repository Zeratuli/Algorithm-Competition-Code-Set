#include <bits/stdc++.h>

using namespace std;

int arr[999][999],a[999][999],b[999][999],c[999][999],d[999][999];


int main(void)
{
	int n,e;
	cin >> n;
	e = n;
	for(n; n >= 0; n--)
	{
		int Square = 1;
		for(int i = 0 ; i < n; i++)
			Square *= 2;	
		int arr[Square][Square],a[Square][Square],b[Square][Square],c[Square][Square],d[Square][Square];
		memset(arr,1,sizeof(arr));
		for(int i = 0; i < Square/2; i++)
			for(int j = 0; j < Square/2; j++)
				a[i][j] = 0;
		for(int i = Square/2; i < Square; i++)
			for(int j = Square/2; j < Square; j++)
				b[i][j] = 1;
		for(int i = 0; i < Square/2; i++)
			for(int j = Square/2; j < Square; j++)
				c[i][j] = 1;
		for(int i = Square/2; i < Square; i++)
			for(int j = 0; j < Square/2; j++)
				d[i][j] = 1;

		for(int i = 0; i < Square/2; i++)
			for(int j = 0; j < Square/2; j++)
				arr[i][j] = a[i][j];
		for(int i = 0; i < Square/2; i++)
			for(int j = Square + 1; j < 2*Square; j++)
				arr[i][j] = a[i][j];
		for(int i = Square + 1; i < Square*2; i++)
			for(int j = 0; j < Square/2; j++)
				arr[i][j] = a[i][j];
		for(int i = Square + 1; i < Square*2; i++)
			for(int j = Square + 1; j < Square*2; j++)
				arr[i][j] = a[i][j];
				
		for(int i = Square/2; i < Square; i++)
			for(int j = Square/2; j < Square; j++)
				arr[i][j] = b[i][j];
		for(int i = 0; i < Square/2; i++)
			for(int j = Square + 1; j < 2*Square; j++)
				arr[i][j] = b[i][j];
		for(int i = Square + 1; i < Square*2; i++)
			for(int j = 0; j < Square/2; j++)
				arr[i][j] = b[i][j];
		for(int i = Square + 1; i < Square*2; i++)
			for(int j = Square + 1; j < Square*2; j++)
				arr[i][j] = b[i][j];		
				
				
		for(int i = 0; i < Square/2; i++)
			for(int j = Square/2; j < Square; j++)
				arr[i][j] = c[i][j];
		for(int i = 0; i < Square/2; i++)
			for(int j = Square + 1; j < 2*Square; j++)
				arr[i][j] = c[i][j];
		for(int i = Square + 1; i < Square*2; i++)
			for(int j = 0; j < Square/2; j++)
				arr[i][j] = c[i][j];
		for(int i = Square + 1; i < Square*2; i++)
			for(int j = Square + 1; j < Square*2; j++)
				arr[i][j] = c[i][j];
				
				
				
		for(int i = Square/2; i < Square; i++)
			for(int j = 0; j < Square/2; j++)
				arr[i][j] = d[i][j];
		for(int i = 0; i < Square/2; i++)
			for(int j = Square + 1; j < 2*Square; j++)
				arr[i][j] = d[i][j];
		for(int i = Square + 1; i < Square*2; i++)
			for(int j = 0; j < Square/2; j++)
				arr[i][j] = d[i][j];
		for(int i = Square + 1; i < Square*2; i++)
			for(int j = Square + 1; j < Square*2; j++)
				arr[i][j] = d[i][j];	
			
			for(int i = 0; i < Square; i++)
			{
				for(int j = 0; j < Square; j++)
					cout << arr[i][j] << " ";
				cout << "\n";
			}

		if(n == 0)
		{
			int Square = 1;
			for(int i = 0; i < e; i++)
				Square = Square * 2;
	
			for(int i = 0; i < Square; i++)
			{
				for(int j = 0; j < Square; j++)
					cout << arr[i][j] << " ";
				cout << endl;
			}
			break;
		}
	}
	return 0;
}


