class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      vector<int>result;
      unordered_map<int,int>um;
      for(auto num:nums1){
        um[num]++;
      }
      for(auto num:nums2){
        if(um[num]>0){
            um[num]--
;            result.push_back(num);
        }
      }
      return result;
    }
};