lass Solution {
public:
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) {

        std::priority_queue<vector<int>, vector<int>, Compare> backLog;
        int returnPrice;


        for ( auto o : orders) {
            // If buy order;
            if (o[2] == 0) {
                
                if ( backLog.size() > 0 ) {
                    for (auto it = it.end(); it != backLog.begin ; i--) {
                        if ((*it)[2] == 1 ) {
                            if ((*it)[0] =< o[0] ) {
                                backLog.pop_back();
                                break;
                            }
                            break;
                        }
                    }
                }
               
                else {
                    backLog.push();
                }

            }

            //If sell order;
            if (o[2] == 1) {

                if (backLog.size() > 0) {
                    for (auto it = it.begin(); it != backLong.end(); i++) {
                        if((*it)[2] == 0) {
                              if ((*it)[0] >= o[0] ) {
                                backLog.pop();
                                break;
                            }
                            break;
                        }
                    }
                }

            }

        }






        for (auto i : backLog){
            returnPrice += i;
        }

        return returnPrice % ();

        
    }
};

class Compare {
public:
    bool operator() (vector<int>& a , vector<int>& b) {
         if ( a[2] > b[2] ) {
            return True;
        }

        if ( a[2] < b[2] ) {
            return False;
        }

        // If they are sell orders.
        if (a[2] == b[2]&& a[2] == 1) {
            return a[0] < b[0];
        }

        // If they are buy orders. 
        else { 
            return a[0] < b[0];
        }
        
    }
};
