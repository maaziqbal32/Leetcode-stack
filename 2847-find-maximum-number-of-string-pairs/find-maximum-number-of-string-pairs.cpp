class Solution {
public:
bool ok(string a,string b){
            reverse(a.begin(),a.end());
            return (a==b);
        }

    int maximumNumberOfStringPairs(vector<string>& words) {
        char n=words.size();
        int total=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(ok(words[i],words[j])) total++;
            }
        }
        return total;

    }
};