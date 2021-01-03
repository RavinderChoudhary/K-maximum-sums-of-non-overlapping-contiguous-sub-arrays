#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {4, 1, 1, -1, -3, -5, 6, 2, -6, -2};
	int n = arr.size();
	int k = 3;
	
	for(int i=0;i<k;i++){
	    int si=0,ei=0,s=0;
	    int sum = 0;
	    int mx = INT_MIN;
	    for(int j=0;j<n;j++){
	        sum += arr[j]; 
            if (mx < sum) 
            { 
                mx = sum; 
                si = s; 
                ei = j; 
            } 
            if (sum < 0) 
            { 
                sum = 0; 
                s = j + 1; 
            } 
	    }
	    cout<<mx<<" "<<si<<" "<<ei<<endl;
	    for(int j=si;j<=ei;j++)
	       arr[j] = INT_MIN;
	}
	
	return 0;
}
