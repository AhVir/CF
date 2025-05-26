#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> nums;
		for(int i=0; i<n; i++){
			int temp; cin >> temp;
			nums.push_back(temp);
		}
		
		int needed = (n%2 == 0) ? (n/2 - ):(n/2);
		cout << "needed: " << needed << endl;
	}
	
	return 0;
}