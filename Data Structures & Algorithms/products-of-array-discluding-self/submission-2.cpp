class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    // Approach 1
    // TC - O(n)
    // SC - O(1)
    int n = nums.size();
    vector<int>ans(n,1);
    long long prefix = 1;
    for(int i=0; i<n; i++)
    {
        ans[i] = (int)prefix;
        prefix *= nums[i];
    }
    long long suffix = 1;
    for(int i=n-1; i>=0; i--)
    {
        ans[i] = (int)(ans[i] * suffix);
        suffix *= nums[i];
    }
    return ans;
    }
};