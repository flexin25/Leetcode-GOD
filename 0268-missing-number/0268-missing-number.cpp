class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hashh(n+1 , 0);
        for(int i = 0; i < n; i++){
            hashh[nums[i]] = 1;
        }
        for(int i = 0; i <= n; i++){
            if(hashh[i] == 0){
                return i;
            }
        }
        return -1;
    }
};