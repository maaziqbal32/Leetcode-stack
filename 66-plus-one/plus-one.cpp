class Solution {
public:
    vector<int> plusOne(vector<int>& digits){
       int n=digits.size();
     // Start from the end of the vector
     for(int i=n-1;i>=0;--i){
        if(digits[i]<9){
            digits[i]++;
            return digits;

        }
         // Set the current digit to 0 if it's 9 and continue to the next digit
        digits[i]=0;
     }
        // If we reach here, it means all digits were 9
        // We need an extra digit at the beginning
      vector <int> result(n+1,0);
      result[0]=1;
      return result;
    
    };

    };
    