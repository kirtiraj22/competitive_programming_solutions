#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    float y;
    float a = 0.50;
    cin >> x >> y;
    if(0<x<=2000 && 0<y<=2000 && y>=x+a && x%5==0){
            cout << (y-x-a) << setprecision(2);
        }
    else{
            cout << y<< setprecision(2);
        }
    return 0;
}
