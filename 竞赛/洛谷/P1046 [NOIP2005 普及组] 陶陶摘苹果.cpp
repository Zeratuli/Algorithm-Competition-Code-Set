#include <iostream>

using namespace std;

int arr[20],h,s;
int main()
{
    for(int i=0;i<10;i++)
		cin >> arr[i];
    cin >> h;
    h += 30;
    for(int i=0;i<10;i++)
		s += (h>=arr[i]);
    cout << s;
    return 0;
}
