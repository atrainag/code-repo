#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        int lb = max(0, i - k + 1);
        int val = A[i];
        for (int j = lb; j <= i; j++) {
            val = max(val, A[j]);
        }
        B[i] = val;
    }

    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
