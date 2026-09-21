class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zero = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                zero++;
                continue;
            }
            prod *= nums[i];
        }
        if(zero > 1)
            prod = 0;

        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            if(zero > 0){
                if(zero > 1)
                    ans.push_back(0);
                else{
                    if(nums[i] == 0)
                        ans.push_back(prod);
                    else
                        ans.push_back(0);
                }
            }
            else
                ans.push_back(prod/nums[i]);
        }
        return ans;
    }
};
