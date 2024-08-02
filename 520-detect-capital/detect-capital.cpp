class Solution {
public:
    bool detectCapitalUse(string word) {
        char n=word.size();
        // if all upper 
        bool allUpper=true;

        //if all lower
        bool allLower=true;

         // Check if only the first letter is uppercase
        bool firstUpperRestLower = true;

    for(int i =0;i<n;i++){
        if(!isupper (word[i])){
            allUpper=false;
        }
        if(!islower(word[i])){
            allLower=false ;

        }
        if (i > 0 && isupper(word[i])) {
                firstUpperRestLower = false;
            }

    }  
    return allUpper || allLower || firstUpperRestLower;
    }  
};