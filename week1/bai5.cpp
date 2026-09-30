#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    double arr[1000];
    int n = 0; cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
    }

    double avg = 0;
    for (int i = 0;i < n; i++) {
        avg += arr[i];
    }
    avg = avg / n;

    for (int i = 0; i < n; i ++) {
        if (arr[i] >= avg){
            cout << fixed << setprecision(2) << arr[i] << " ";
        }
    }

    return 0;
}