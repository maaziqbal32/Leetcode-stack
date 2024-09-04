class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> result;
        for (int i = arr.size(); i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (arr[j] == i) {
                    flip(arr, j);
                    result.push_back(j + 1);
                    break;
                }
            }
            flip(arr, i - 1);
            result.push_back(i);
        }
        return result;
    }

private:
    void flip(vector<int>& arr, int k) {
        reverse(arr.begin(), arr.begin() + k + 1);
    }
};
