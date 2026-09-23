class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int longest = 1;
        int lastElement = INT_MIN;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] - 1 == lastElement){
                count++;
                lastElement = nums[i];
            }
            else if(nums[i] != lastElement){
                count = 1;
                lastElement = nums[i];
            }
            longest = max(longest , count);
        }
        return longest;
    }
};