#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> intervals(n);

    // 输入区间
    for(int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    // 按左端点排序
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    // 第一个区间加入答案
    ans.push_back(intervals[0]);

    // 合并区间
    for(int i = 1; i < intervals.size(); i++) {
        if(ans.back()[1] >= intervals[i][0]) {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        } else {
            ans.push_back(intervals[i]);
        }
    }

    // 输出结果
    cout << "合并后的区间：" << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

    return 0;
}
