class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    map<int,int> mp;

    
    for(int i=0;i<nums.size();i++)
    {
        int rest_sum=target-nums[i];

        if(mp.find(rest_sum)!=mp.end()){
            return {mp[rest_sum],i};
        }
        mp[nums[i]]=i; //inserting the element in map if not found present
        
    }
        return {0,0};
    }
};


/**
    int s=nums.size();
    // map<int ,int >mp;

    vector<int> temp;
    for(auto it:nums){
        temp.push_back(it);
    }


    sort(temp.begin(),temp.end());

    int i=0,j=nums.size()-1;
    vector<int> arr(2,0);

    vector<int> ::iterator it;
    vector<int> ::iterator jt;

    while(i<j){
        // int sum=;
        if(temp[i]+temp[j]==target) {
            
            it=find(nums.begin(),nums.end(),temp[i]);
            jt=find(nums.begin(),nums.end(),temp[j]);

            arr[0]=it-nums.begin();
            arr[1]=jt-nums.begin();
            break;
        }

        else if((temp[i]+temp[j])<target){
            i++;
        }
        else{
            j--;
        }
        
    }
    return arr;

*/