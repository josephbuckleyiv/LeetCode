class Solution {
public:
    int numberOfMatches(int n) {
        int count = 0;
        while (n) {
            if ( n == 1) {
                break;
            }
            if (n % 2 == 0) {
                count += n/2;
                n = (n)/2;
            }
            else {
                count += (n-1)/2;
                n = (n-1)/2+1;
            }
            cout << n;
        }
        
        return count;
    }
};
