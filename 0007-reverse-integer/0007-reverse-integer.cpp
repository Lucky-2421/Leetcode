class Solution {
public:
    int reverse(int x) {

    
        vector<int> arr;
        int rem=0;
        while(x!=0)
        {
            rem=x%10;
            x=x/10;
            arr.push_back(rem);
        }
        int n=arr.size();
        long r=0,q;
        int i=0;
        for(auto it=arr.rbegin();it!=arr.rend();it++)
        {
            q=*it *(pow(10,i));
            // cout<<q<<"  ";
            r+=q;
            i++;
        }
        if(r>INT_MAX || r<INT_MIN) return 0;
        
        return int(r);
    }
};

/*
one more way it reduces space complexity

long r=0;      // decleare r 
        while(x){
         r=r*10+x%10; // find remainder and add its to r
         x=x/10;     // Update the value of x
        }
*/