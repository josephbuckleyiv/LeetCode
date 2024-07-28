class Solution {
public:
    int numberOfWays(string corridor) {

        int numSeats = std::count(corridor.begin(), corridor.end(), 'S');
      
        if (numSeats % 2 == 1) {
            return 0;
        }

        if (numSeats == 2) {
            return 1;
        }

        return numberOfWaysHelper(corridor, numSeats) % 1000000007;
    }

    int numberOfWaysHelper(string corridor, int seatCount) {
          
        if (seatCount == 0) {
            return 0;
        }

        if (seatCount == 2) {
            return 1;
        }

        else {
            // Find distance between 2nd and third chair
            int seatCounter = 0;
            int secondSeat = 0;
            int thirdSeat;
            int divisors;
            for ( int i = 0; i < corridor.size(); i++ ) {
                // Check if we found the third S
                if (seatCounter == 3) {
                    thirdSeat = i - 1;
                    divisors = thirdSeat - secondSeat - 1;
                    break;
                }
                if (corridor[i] == 'S') {
                    seatCounter++;
                }
                if (seatCounter == 2 && secondSeat == 0) {
                    secondSeat = i;
                }
                
            }

            /*if ( divisors == 0) {
                return numberOfWaysHelper(corridor.substr(thirdSeat,corridor.size()), seatCount - 2);
            } */

            cout << secondSeat;
            cout << corridor.substr(secondSeat,thirdSeat);
            cout <<  divisors;
            cout << corridor.substr(thirdSeat,corridor.size());
            //cout <<  divisors;
            return  (1+divisors)*numberOfWaysHelper(corridor.substr(thirdSeat,corridor.size()), seatCount - 2)  % 1000000007;
        }
    }

};
