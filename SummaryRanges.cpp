class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<string> sumRanges;

        if (!nums.size()) {
            return sumRanges;
        }

        auto first = nums.begin();
        

        while (first < nums.end()) {
            
            // Find the first ele.
            auto a = to_string((*first));
            auto b = a;

            auto i = first;
            int ctr = (*first);

            while ( i != nums.end()) {
                
                if ( *(i+1) != ctr+1) {

                    b = to_string(*i);
                    
                                // Here, we push the string.
                        if (a == b) {
                            sumRanges.push_back(a);
                        }
                        else {
                            auto range = a + "->" + b;
                            sumRanges.push_back(b);
                            
                            cout << "B";
                        }
                    break;
                }
                
                cout << "WHAT!";
                ctr++;
                i++;
            }
           
            
        

             first = i +1;
        }
        return sumRanges;
    }
};
