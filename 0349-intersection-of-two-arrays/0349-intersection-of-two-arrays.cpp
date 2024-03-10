class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int first=0,second=0;

        vector<int>ans;

        while(first < nums1.size() && second < nums2.size()){
           // if ans is empty we have to push first ans the ans . back don't work on none elements
            if(nums1[first]==nums2[second]  && (ans.empty() || ans.back()!=nums1[first])){
                ans.push_back(nums1[first]);
                first++;
                second++;
            }
            else if(nums1[first]<nums2[second]){
                first++;
            }
            // if(nums1[first]>nums2[second]){
            else{
                second++;
            }
        }

        return ans;
    }
};
