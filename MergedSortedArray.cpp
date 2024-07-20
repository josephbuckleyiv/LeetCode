class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        int i = 0;
        int nums1Index = 0;
        std::vector<int> nums1Copy;
         for(auto k : nums1 ) {
            nums1Copy.push_back(k);
        }
        
        if (!n) {

        } 
        else if (nums1[0] == 0 && nums1.size() == 1) {
            int idx = 0;
            cout << idx;
            while ( idx < n) {
                nums1[idx] = nums2[idx];
                idx++;
            }
        }
        else {
                while ( nums1Index < n + m) {
            
                    
                        if (j < m && i < n && nums1Copy[j] <= nums2[i] ){
                            nums1[nums1Index] = nums1Copy[j];
                            j++;
                            nums1Index++;
                            cout << "here";
                        }
                        else if ( j < m && i == n) {
                            nums1[nums1Index] = nums1Copy[j];
                            j++;
                            nums1Index++;
                            cout << "there";
                        }
                      
                    

                    else if ( i < n)  {
                        nums1[nums1Index] = nums2[i];
                        i++;
                        nums1Index++;
                        cout << "everywhere";
                    }

            }


        }
     
    }
};
