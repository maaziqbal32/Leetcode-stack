#include <string>  
#include <algorithm>  

class Solution {  
public:  
    std::string addBinary(std::string a, std::string b) {  
        std::string result = "";  
        int i = a.length() - 1, j = b.length() - 1;  
        int carry = 0;  
        
        while (i >= 0 || j >= 0 || carry) {  
            int sum = carry;  
            if (i >= 0) {  
                sum += a[i] - '0';  
                i--;  
            }  
            if (j >= 0) {  
                sum += b[j] - '0';  
                j--;  
            }  
            
            result += (sum % 2) + '0';  
            carry = sum / 2;  
        }  
        
        std::reverse(result.begin(), result.end());  
        
        return result;  
    }  
};

