class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> ans;
        // int i = 0, j = 0;
        // sort(nums1.begin() , nums1.end());
        // sort(nums2.begin() , nums2.end());

        // while (i < n && j < m) {
        //     if (nums1[i] == nums2[j]) {
        //         if (ans.size() == 0 || ans.back() != nums1[i]) {
        //             ans.push_back(nums1[i]);
        //         }
        //         i++;
        //         j++;
        //     }
        //     else if (nums1[i] < nums2[j]) {
        //         i++;
        //     }
        //     else {
        //         j++;
        //     }
        // }
        // return ans;
        int n = nums1.size();
        int m = nums2.size();
        unordered_set<int> st;
        if (n < m) {
            for (int i = 0; i < n; i++){
                st.insert(nums1[i]);
            }
        }
        else {
            for (int i = 0; i < m; i++){
                st.insert(nums2[i]);
            }
        }
        vector<int>ans;
        if (n < m) {
            for (int i = 0; i < m; i++){
               if (st.find(nums2[i]) != st.end()){
                    ans.push_back(nums2[i]);
                    st.erase(nums2[i]);
                }
            }
        }
        else{
             for (int i = 0; i < n; i++){
               if (st.find(nums1[i]) != st.end()){
                    ans.push_back(nums1[i]);
                    st.erase(nums1[i]);
                }
            }
        }
        return ans;
    }
};