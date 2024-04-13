#include<bits/stdc++.h>
using namespace std;
int X[100005], n;

bool check(){
	for(int i = 1; i<n; i++){
		if(X[i-1]>X[i]) return 0;
	}
	return 1;
}
int main(){
    cin >> n;
    int count = 0 ;
	for(int i = 0; i<n; i++){
		cin >> X[i];
	}
	while(!check()){
            int min_pos = count;
            for (int j = count + 1; j < n; j++){
            if (X[j] < X[min_pos]){
                min_pos = j;
                }
            }
            swap(X[count],X[min_pos]);
            cout << "Buoc "<<count+1<<": ";
            for(int k=0; k<n; k++){
        	    cout <<X[k]<<" ";
		        }
		    cout << endl;
		    count++;
	    }
}

