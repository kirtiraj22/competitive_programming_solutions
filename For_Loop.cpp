#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    int n = 0;
    string num[10]={"","one","two","three","four","five","six","seven","eight","nine"};
    
    cin >> a >> b;
    
    for(n=a;n<=b;n++){
       if (n>9){
           n % 2 ==0 ? cout << "even \n" : cout << "odd \n";
       } 
       else {
           cout << num[n] <<endl;
       }
    }
}
        
    
