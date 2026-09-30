#include <iostream>
#include <cmath>
using namespace std;

int UCLN(int a, int b) {
    a = abs(a);
    b = abs(b);

    while(b != 0) {
        int k = a % b;
        a = b;
        b = k;
    }

    return a;
}

void rutgon(int a, int b, int ucln) {
    int tu = a / ucln;
    int mau = b / ucln;
    
    if(mau == 1)
    cout << tu;
    
    else if( mau == -1)
    cout << -tu;

    else if(mau == 0)
    cout << "Khong hop le";

    else if(tu == 0)
    cout << "0";

    else if((tu > 0 && mau > 0) || (tu < 0 && mau < 0)) 
    cout << abs(tu) << "/" << abs(mau);

    else if((tu > 0 && mau < 0) || (tu < 0 && mau > 0))
    cout <<"-" << abs(tu) << "/" << abs(mau);
    

}

int main() {
    int a = 1, b = 1;
    cin >> a >> b;
    rutgon(a, b, UCLN(a ,b));

    return 0;
}
// Do phuc tap thoi gian: 
// Do phuc tap khong gian: O(1)