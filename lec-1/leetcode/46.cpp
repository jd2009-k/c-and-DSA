#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int>& nums, vector<vector<int>>& ans,
    vector<int>& current, vector<bool>& used)
{
    if (current.size() == nums.size())
    {
        ans.push_back(current);
        return;
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (used[i]) continue;

        used[i] = true;
        current.push_back(nums[i]);

        backtrack(nums, ans, current, used);

        current.pop_back();
        used[i] = false;
    }
}

vector<vector<int>> permute(vector<int>& nums)
{
    vector<vector<int>> ans;
    vector<int> current;
    vector<bool> used(nums.size(), false);

    backtrack(nums, ans, current, used);
    return ans;
}

int main()
{
    vector<int> nums = { 1, 2, 3 };
    vector<vector<int>> ans = permute(nums);

    for (vector perm : ans)
    {
        cout << "[";
        for (int i = 0; i < perm.size(); ++i)
        {
            if (i > 0) cout << ", ";
            cout << perm[i];
        }
        cout << "]\n";
    }

    return 0;
}