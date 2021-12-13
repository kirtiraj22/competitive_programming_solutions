#include <iostream>

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    int len1 = a.size();
    int len2 = b.size();

    string conct = a + b;
    char z =a[0];

    a[0] = b[0];
    b[0] = z;
  
    cout << len1 << " " << len2 << endl;
    cout << conct << endl;
    cout << a <<" ";
    cout << b << endl;

    return 0;
}

