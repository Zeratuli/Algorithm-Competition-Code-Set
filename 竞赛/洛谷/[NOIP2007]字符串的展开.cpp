#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p1,p2,p3,m = 0,n = 1,x1 = 0,x2 = 0,x3 = 0,x4;
    cin >> p1 >> p2 >> p3;
    string A;
	char B[11000],D[1100];
    cin >> A;
    for(int i = 0; i <= A.length(); i++){
        if(A[i] == '-'){
        	if(A[i+1] - A[i-1] > 1 && A[i] != A[i+1] && A[i] != A[i-1] && (A[i-1] >= 48 && A[i-1] <= 57 && A[i+1] >= 48 && A[i+1] <= 57 || A[i-1] >= 'a' && A[i-1] <= 'z' &&  A[i+1] >= 'a' && A[i+1] <= 'z')){
        		if(p3 == 1){
		            if(p1 == 1){
		               m = i-1;
		               while(x2 < p2*(A[i+1]-A[i-1]-1)){
		                    for(int k = 0; k < p2; k++){
		                        D[x2] = A[m]+ n;
		                        x2++;
		                    }
		                    n++;
		               }
		               n = 1;
			           	for(int i = 0; i < x2; i++){
			           		B[x3++] = D[i];
			           	}
			        	x2 = 0;
		            }
		            if(p1 == 2){
		                m = i-1,n = -31;
		                if(A[i-1] >= 48 && A[i-1] <= 57 && A[i+1] >= 48 && A[i+1] <= 57)
		                	n = 1;
		                while(x2 < p2*(A[i+1]-A[i-1])-p2){
		                    for(int k = 0; k < p2; k++){
		                        D[x2] = A[m] + n;
		                        x2++;
		                    }
		                    n++;
		              	}
		              	n = 1;
			           	for(int i = 0; i <= x2; i++){
			           		B[x3++] = D[i];
//			           		cout << B[i];
			           	}
			           	x3--;
			           	x2 = 0;
		            }
		        }
		    	else{
		    		if(p1 == 1){
		               m = i-1;
		               while(x2 < p2*(A[i+1]-A[i-1]-1)){
		                    for(int k = 0; k < p2; k++){
		                        D[x2] = A[m]+ n;
		                        x2++;
		                    }
		                    n++;
		               }
		               n = 1;
			           	for(int i = x2 - 1; i >= 0; i--){
			           		B[x3++] = D[i];
			           	}
			        	x2 = 0;
			        }
			        if(p1 == 2){
		                m = i-1,n = -31;
		                if(A[i-1] >= 48 && A[i-1] <= 57 && A[i+1] >= 48 && A[i+1] <= 57)
		                	n = 1;
		                while(x2 < p2*(A[i+1]-A[i-1])-p2){
		                    for(int k = 0; k < p2; k++){
		                        D[x2] = A[m] + n;
		                        x2++;
		                    }
		                    n++;
		              	}
		              	n = 1;
			           	for(int i = x2 - 1; i >= 0; i--){
			           		B[x3++] = D[i];
			           	}
			           	x2 = 0;
			        }
		    	}
	            if(p1 == 3){
	                while(x2 < p2*(A[i+1]-A[i-1])-p2){
	                 D[x2] = '*';
	                 x2++;
	                }
	           	for(int i = 0; i < x2; i++)
	           		B[x3++] = D[i];
	           		
	           	x2 = 0;
	            }
			}
			else if(A[i+1] - A[i-1] == 1 && A[i] != A[i+1] && A[i] != A[i-1])
				continue;
			else{
				B[x3++] = A[i];
//				cout << B[i];
			}
		}
    	else{
    		B[x3++] = A[i];
//    		cout << B[x3-1];
    	}
	}
	
	cout << B;
	
    return 0;
}
