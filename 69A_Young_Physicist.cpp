#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum_x = 0, sum_y = 0, sum_z = 0;  // Corrected the declaration by using commas

    // Read each vector and update the sums
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    // Check if all sums are zero
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
