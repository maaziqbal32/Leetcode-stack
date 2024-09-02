class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=s.size();
        int m=g.size();

        int ans=0;
        for(int j=0;j<n && ans<m;j++){
            if(s[j] >= g[ans]){
                ans ++;
            }
        }
        return ans ;
    }
};