#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    long long sum = 1;

    for (int i = 1; i <= n; i++){
        sum *= i;
    }

    cout << sum;

    return 0;
}
// Do phuc tap thoi gian: O(n)
// Do phuc tap khong gian O(1)