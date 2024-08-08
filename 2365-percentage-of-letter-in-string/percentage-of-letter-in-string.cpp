class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.size();
        int count=0;
        for(auto it:s){
            if(it==letter)count++;

        }
        return count*100/n;
    }
};