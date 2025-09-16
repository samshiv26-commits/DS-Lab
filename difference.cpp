#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of vectors: ";
    cin >> n;

    vector<int> a(n), b(n), diff(n);

    cout << "Enter elements of first vector:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter elements of second vector:\n";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    // difference of two vectors
    for (int i = 0; i < n; i++) {
        diff[i] = a[i] - b[i];
    }

    cout << "Difference of vectors (a - b): ";
    for (int i = 0; i < n; i++) {
        cout << diff[i] << " ";
    }
    cout << endl;

    return 0;
}
