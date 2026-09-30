#include <iostream>
using namespace std;

void Xoa(int arr[], int &n, int k) {
    for (int i = k - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = 0;
    n--;
}

void Chen(int arr[], int &n, int m, int y) {
    for (int i = n; i >= m; i--) {
        arr[i] = arr[i-1];
    }
    arr[m - 1] = y;
    n++;
}

int main() {
    int arr[1000];
    int n = 0; cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k = 0; cin >> k;
    Xoa(arr, n, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int y = 0, m = 0; cin >> y >> m;
    Chen(arr, n, m, y);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
//Do phuc tap thoi gian: O(n)
//Do phuc tap khong gian: O(1)