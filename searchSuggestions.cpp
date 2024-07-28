class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> funnyVector;
        vector<string>::iterator ptr = products.begin();

        int posish = 0;
        int currLength =0;
        int length = products.size();


        for (int i = 0; i < searchWord.length(); i++) {
            //while(*ptr.length() >= searchWord && *ptr.substr(0,i) != searchWord.substr(0,i)) {
            while (1) {
                if (ptr->length() - 1  >= i) {
                    if (ptr->substr(0,i+1) == searchWord.substr(0,i+1)) {
                        currLength = i;
                        break;
                    }

                }
                ptr++;
                posish++;
            }

            if (length - posish > 2) {
                vector<string> newArray;
                for ( int i = 0; i < 3; i++) {
                    if (ptr->substr(0,currLength) == searchWord.substr(0,currLength)) {
                        newArray.push_back(*(ptr+i));
                    }
                }

                funnyVector.push_back(newArray);
            }
            else {
                vector<string> newArray;
                for ( int i = 0; i < length-posish ; i++) {
                    if (ptr->substr(0,currLength) == searchWord.substr(0,currLength)) {
                        newArray.push_back(*(ptr+i));
                    }
                    else {
                        break;
                    }
                }
                funnyVector.push_back(newArray);
            }           
        }
        return funnyVector;
    }
};
