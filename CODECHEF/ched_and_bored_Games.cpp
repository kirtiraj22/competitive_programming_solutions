#include <bits/stdc++.h>

using namespace std;



int main(){
	
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int t;
	cin >> t;
	while(t--){
		int n,sum = 0;
		cin >> n;	
		if(n % 2 == 0){
			for(int i = 0 ; i <= n ; i = i + 2){
				sum = sum + i*i;
			}	
		}
		
		
		else{
			for(int i = 1 ; i <= n ; i = i + 2){
				sum = sum + i*i;
			}	
			
		}
		
		cout << sum << endl;
	
	}	
	
	return 0;
}
