class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        int n=points.size();
        
        int arrow=1;// 1 beacause for first balloon it one arrow is needed
        
        sort(points.begin(),points.end()); // sort the array with first value
        
        vector<int> prev=points[0];
        
        for(int i=1;i<n;i++){ // start the i=1 bez first is already taken
            
//             vector<int> curr=points[i];
            
            int curr_start=points[i][0];
            int curr_end= points[i][1];
            
            if(curr_start>prev[1]){ // means no common part so need different arrow
                arrow++;
                prev=points[i];
            }
            else{
                int first=max(prev[0],curr_start); // if there is any common part then make it privious and compare it weather any common part lies in that area
                int second=min(prev[1],curr_end);
                
                prev[0]=first;
                prev[1]=second;
            }
            
        }
        
        return arrow;
        
        
        
    }
};