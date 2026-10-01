#include <iostream>
using namespace std;

int Tong(int arr[][100], int n, int m) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            tong += arr[i][j];
        }
    }
    
    return tong;
}

void XoaDong(int arr[][100], int &n, int m, int k) {
    for (int i = k - 1; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = arr[i + 1][j];
        }
    }
    n--;
}

 int main() {

    int arr[100][100];
    int n = 0, m = 0; cin >> n >>m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Tong: " << Tong(arr, n, m) << endl;

    int k = 0; cin >> k;
    XoaDong(arr, n, m, k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
 }