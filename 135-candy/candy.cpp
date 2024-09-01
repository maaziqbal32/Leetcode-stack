class Solution {
public:
    int candy(vector<int>& ratings) {
        int n =ratings.size();
        vector<int>dp(n,1);
        //forward pass
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                dp[i]=dp[i-1]+1;
            }
        }
        //backward pass
        for(int i=n-2;i>=0;i--){
             if(ratings[i]>ratings[i+1]){
                dp[i]=max(dp[i],dp[i+1]+1);
            }
        }

    int ans=0;
    for(auto x:dp)
    {
        ans+=x;
    }
    return ans;
    }
};