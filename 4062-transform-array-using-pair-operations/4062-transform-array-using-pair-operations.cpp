class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long sumSource = 0;
        long sumTarget = 0;

        for(int i = 0; i < source.size(); i++){
            sumSource += source[i];
        }

        for(int i = 0; i < target.size(); i++){
            sumTarget += target[i];
        }

        return sumSource == sumTarget;
    }
};