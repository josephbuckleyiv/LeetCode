class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        std::vector<vector<int>> ans;
        std::map<int, int> hashMap1;
        std::map<int, int> hashMap2;

        std::sort(nums.begin(), nums.end());
        for (auto i : nums) {
            printf("%d", i);
        }

        
        for (int i = 0; i < nums.size(); i++ ) {
            hashMap1.insert( {nums[i],i} );
        }

        for (int i = 0; i < nums.size(); i++) {
            

            for (int j = i + 1; j < nums.size() ; j++) {

                if (i != j && !hashMap2.count((-1)*nums[i] + (-1)*nums[j])) {
                    int n = (-1)*nums[i] + (-1)*nums[j];
                    hashMap2.insert({n,n});

                    if (hashMap1.count(n) ) {
                        vector<int> currTrip;
                        currTrip.push_back(nums[i]);
                        currTrip.push_back(nums[j]);
                        currTrip.push_back((-1)*nums[i] + (-1)*nums[j]);
                        ans.push_back(currTrip);
                    }


                }

            }
        }

        return ans;
    }
};
