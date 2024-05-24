class Solution {
public:
    int largestAltitude(vector<int> gain) {
      int current=0;
        int maximum=0;
        vector<int> ans;
        for(int i=0;i<gain.size();i++){
            current+=gain[i];
            maximum=max(maximum,current);
        }
        return maximum;        
    }
};