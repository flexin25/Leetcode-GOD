class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> arr;
        long long ncr = 1;
        arr.push_back(1);
        for(int i = 0; i < rowIndex; i++){
            ncr = ncr * (rowIndex - i) / (i + 1);
            arr.push_back(ncr);
        }
        return arr;
    }
};