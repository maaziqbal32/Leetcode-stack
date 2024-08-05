class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<int>s(sentence.begin(),sentence.end());
        int a=s.size();
        if(a == 26){
            return true ;
        }else
        {
            return false;
        }
       
    }
};