class Solution {
public:
    
    int getsum(int x){
        return (x*(x+1))/2;
    }
    int pivotInteger(int n) {
        int ans=-1;
        for(int i=1;i<=n;i++){
            int s1=getsum(i);
            int s2=getsum(n)-getsum(i-1);
            
            if(s1==s2) return i;
        }
        
        return ans;
        
    }
    
};