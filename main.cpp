#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: " << endl;
    cin >> n;
    int so = n;
    int i, n1 = 0, du;
    while (n > 0){
        du = n % 10;
        n = n /10;
        n1 = n1 * 10 + du;
    }
    if(n1 == so){
        cout << so << " là số polinom!";
    } else {
        cout << so << " không phải là số polinom!";
    }
    return 0;
}

