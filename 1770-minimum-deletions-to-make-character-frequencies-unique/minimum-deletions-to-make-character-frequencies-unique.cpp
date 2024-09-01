class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>up;
        unordered_set<int>st;
        for(auto x:s){
            up[x]++;
        }
        int ans=0;
        for(auto x:up){
            int temp=x.second;
            while(st.find(temp)!=st.end() && temp!=0){
                ans++;
                temp--;
            }
            st.insert(temp);

        }
        return ans;
    }
};