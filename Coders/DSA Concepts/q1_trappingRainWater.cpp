#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int res = 0;
    while (left <= right)
    {
        if (height[left] <= height[right])
        {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                res += leftMax - height[left];
            left++;
        }
        else
        {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                res += rightMax - height[right];
            right--;
        }
    }
    return res;
}
int main()
{
    vector<int> n = {4, 2, 0, 3, 2, 5};
    int ans = trap(n);
    cout << ans;

    return 0;
}