#include <bits/stdc++.h>
using namespace std;

// 移动零函数
void moveZeroes(vector<int>& nums) {
    int len = nums.size();

    int left = 0;
    for (int right = 0; right < len; right++) {
        if (nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
    }
}

int main() {
    int n;
    cin >> n;                  // 输入数组长度

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    moveZeroes(nums);           // 调用函数

    // 输出结果
    for (int i = 0; i < n; i++) {
        cout << nums[i];
        if (i != n - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}
