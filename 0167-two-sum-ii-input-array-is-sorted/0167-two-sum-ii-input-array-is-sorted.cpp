class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0 , right = n - 1;
        for(int i = 0; i < n; i++){
            while(left <= right){
                int sum = numbers[left] + numbers[right];
                if(sum == target){
                    return {left + 1 , right + 1};
                }
                if(sum < target){
                    left++;
                }
                else right--;
            }
        }
        return{-1 , -1};
    }
};