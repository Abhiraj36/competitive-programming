#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> nums;

    // extract numbers
    for (char c : s) {
        if (c != '+') {
            nums.push_back(c);
        }
    }

    // sort numbers
    sort(nums.begin(), nums.end());

    // print in required format
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1)
            cout << "+";
    }

    return 0;
}
