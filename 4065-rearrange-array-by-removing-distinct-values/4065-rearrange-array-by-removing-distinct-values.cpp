class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        map<int , int> freqElement;
        int rem = nums.size();
        for(int i = 0; i < nums.size(); i++){
            freqElement[nums[i]]++;
        }
        while(rem > 0){
            for(auto &it: freqElement){
                if(it.second > 0){
                    ans.push_back(it.first);
                    it.second--;
                    rem--;
                }
            }
        }
        return ans;
    }
};