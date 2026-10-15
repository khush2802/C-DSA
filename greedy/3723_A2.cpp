#include <bits/stdc++.h>
using namespace std;

string maxSumOfSquare(int num, int sum) {
    if (num < 0 || sum < 0 || num > 9 * sum)
        return "-1";

    int nines = num / 9;
    int reminder = num % 9;

    string res(nines, '9');

    if (reminder > 0)
        res.push_back(reminder + '0');

    res.append(sum - res.size(), '0');

    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int num, sum;
        cin >> num >> sum;

        cout << maxSumOfSquare(num, sum) << '\n';
    }

    return 0;
}