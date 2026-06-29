class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> ans;
        vector<int> n;
        sort(nums.begin(), nums.end());
        int cnt = 1;
        for(int i = 0; i < nums.size(); i++){
            if(i == nums.size()-1 || nums[i] != nums[i+1]){
                ans.push_back({cnt, nums[i]});
                cnt = 0;
            }
            cnt++;
        }
        sort(ans.begin(), ans.end(), [](const auto &a, const auto &b) {
        return a.first > b.first;});

        for(int i = 0; i < k; i++){
            n.push_back(ans[i].second);
        }
        return n;
    }
};
