#include <limits.h>

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int currMin = INT_MAX;
        int currWindowVal = nums[0];
        int currWindowSize = 1;
        auto start = nums.begin();
        auto end = nums.begin();

        while (end != nums.end()) {
            
            if ( currWindowVal >= target) {

                if ( currWindowSize < currMin) {
                    
                    if (currWindowSize ==1) {
                        return 1;
                    }
                    cout << currWindowSize;
                    currMin = currWindowSize;
                }

                currWindowVal-=(*start);
                start++;
                currWindowSize--;


            }

          

            else {
                end++;
                if (end == nums.end()) {
                    break;
                }
                currWindowVal+=(*end);
                currWindowSize++;
            }
        }

        if (currMin == INT_MAX) {
            return 0;
        }
        cout << currMin;
        return currMin;
    }
};
