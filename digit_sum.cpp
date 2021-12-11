#include <iostream>
using namespace std;

int main(){
	int T,N;
	cin >> T;
	int sum = 0;
	while(T--){
		cin >> N;
		while(N!=0){
			sum = sum + N%10;
			N = N/10;
		}
		cout << sum <<endl;
		sum = 0;
	}
}
