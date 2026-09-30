#include <iostream>
using namespace std;
int main() {
    int mang[1000];
    int n = 0;
    int tong = 0;
    cin >> n;
    for ( int i = 0; i < n; i++) {
        cin >> mang[i];
        tong += mang[i];
    }
    cout << tong;
    return 0;
}