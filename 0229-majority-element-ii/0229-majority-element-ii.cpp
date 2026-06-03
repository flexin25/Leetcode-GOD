class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = INT_MIN, c2 = INT_MAX, cnt1 = 0, cnt2 = 0;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            if(cnt1 == 0 && nums[i] != c2){
                c1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0 && nums[i] != c1){
                cnt2 = 1;
                c2 = nums[i];
            }
            else if(c1 == nums[i]) cnt1++;
            else if(c2 == nums[i]) cnt2++;

            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> arr;
        cnt1 = 0 , cnt2 = 0;
        int mini = (int)(n / 3) + 1;
        for(int i = 0; i < n; i++){
           if(nums[i] == c1) cnt1++;
           if(nums[i] == c2) cnt2++;
        }
        if(cnt1 >= mini) arr.push_back(c1);
        if(cnt2 >= mini) arr.push_back(c2);
        return arr;        
    }
};