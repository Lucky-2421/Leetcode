class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // it has two approch  one is prifix sum and other is sliding wwindow
        
        // i am not using sliding window
        
        int n=nums.size();
        
        unordered_map<int ,int> mp;
        
        int res=0;
        int currsum=0;
        
        mp[0]=1;
        
        for(int &num : nums){
            currsum+=num;
            
            int leftsum=currsum-goal;
            
            if(mp.find(leftsum)!=mp.end()){
                res+=mp[leftsum];
            }
            
            mp[currsum]++;
        }
     return res;   
    }
        
};