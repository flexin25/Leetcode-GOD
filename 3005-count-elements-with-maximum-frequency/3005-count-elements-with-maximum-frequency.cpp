class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    int maxFreq = 0;
    int count = 0;
    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            count = 1; 
        } else if (it.second == maxFreq) {
            count++;  
        }
    }
    return count*maxFreq;
}
};