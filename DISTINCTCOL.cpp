#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    int i;
	    for(i=0;i<n;i++){
	        cin >> a[i]; 
	    }
	     int max=a[0];
	    for(i=0;i<n;i++){
	        if (a[i]>max){
	            max=a[i];
	        }
	    }
	    cout << max << endl;
	}

}
