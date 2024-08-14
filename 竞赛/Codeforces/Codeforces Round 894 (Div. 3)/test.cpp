#include <iostream>
 
using namespace std;
int main(){
    int t,n,m;
    bool v;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        v= false;
        cin>>n>>m;
        char y[n][m];
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                cin >> y[j][k];
            }
        }
        if (m<4){
            cout<<"NO"<<endl;
        } else {
            for (int k1 = 0; k1 < m - 3; ++k1) {
                for (int j1 = 0; j1 < n; ++j1) {
                    if (y[j1][k1] == 'v') {
                        for (int k2 = k1+1; k2 < m - 2; ++k2) {
                            for (int j2 = 0; j2 < n; ++j2) {
                                if (y[j2][k2] == 'i') {
                                    for (int k3 = k2+1; k3 < m - 1; ++k3) {
                                        for (int j3 = 0; j3 < n; ++j3) {
                                            if (y[j3][k3] == 'k') {
                                                for (int k4 = k3+1; k4 < m; ++k4) {
                                                    for (int j4 = 0; j4 < n; ++j4) {
                                                        if (y[j4][k4] == 'a') {
                                                            v = true;
                                                            goto lab1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            lab1:
            if (v) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
