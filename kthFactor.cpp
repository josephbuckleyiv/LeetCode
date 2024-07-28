class Solution {
public:
    int kthFactor(int n, int k) {
       
       vector<int>& factors = kthFactorHelper(n,factors);

       if (k > factors.size() -1) {
           return -1;
       }
        sort(factors.begin(), factors.end());
        unique(factors.begin(), factors.end());
       return factors[k];
    }


    vector<int> kthFactorHelper(int n, vector<int>& arraySoFar) {
        int r = 0;

        if ( n == r) {
            return {1};
        }
        
        while(n >= r) {

            if ( n %r == 0) {
                break;
            }

            r++;

        }
        int bigDivisor = n/r;
        arraySoFar.push_back(r);
        arraySoFar.push_back(bigDivisor);

        return kthFactorHelper(bigDivisor, arraySoFar);
    }
};
