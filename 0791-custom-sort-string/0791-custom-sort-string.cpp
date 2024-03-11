class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int> mp;
        
        for (int i=0;i<s.size();i++){
             mp[s[i]]++;
            }
        
        for (int i=0;i<order.size();i++)
            {
            if (mp.find(order[i])!=mp.end()){
                int n=mp[order[i]];
                
                while(n-- ){
                mp[order[i]]--;
                ans+=order[i];
                }
               
            }
        }
        for (auto it:mp){
            if (it.second!=0){
                int n=it.second;
                while(n--){
                    ans+=it.first;    
                }
                
                }
        }
        
        
       return ans;
    }
/*
"hucw"
"utzoampdgkalexslxoqfkdjoczajxtuhqyxvlfatmptqdsochtdzgypsfkgqwbgqbcamdqnqztaqhqanirikahtmalzqjjxtqfnh"
*/
    
};