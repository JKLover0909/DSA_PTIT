#include<bits/stdc++.h>
using namespace std;

int n, m;
long long kernel[3][3], image[300][300], resmatrix[298][298];

int main(){
	int t; cin >> t;
	while(t--){
		memset(kernel, sizeof(kernel), 0);
		memset(image, sizeof(image), 0);
		memset(resmatrix, sizeof(resmatrix), 0);
		long long res=0, res2 = 0;
		cin >> n >> m;
		for(int i = 0; i<n; i++){
			for(int j = 0; j<m; j++){
				cin >> image[i][j];
			}
		}
		for(int i = 0; i<=2; i++){
			for(int j = 0; j<=2; j++){
				cin >> kernel[i][j];
			}
		}
	    for(int i = 0; i<n-2; i++){
	    	for(int j = 0; j<m-2; j++){
	    		resmatrix[i][j] = 0;
	    		for(int k = 0; k<3;k++ ){
	    			for(int l = 0; l<3 ;l++){
	    				resmatrix[i][j]+=kernel[k][l]*image[k+i][l+j];
					}
				}
				
			}
		}
		
		for(int i=0; i<n-2; i++){
			for(int j = 0; j<m-2; j++){
				res+=resmatrix[i][j];
			}
		}
		
		
		cout << res << endl;
	}
}