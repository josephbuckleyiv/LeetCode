class Solution {
public:
    string intToRoman(int num) {
    std::string final ( "" );
    std::string number = to_string(num);
    cout << number;

    int power = to_string(num).length();
    int idx = 0;
    cout << power;

    if ( power == 4) {
        goto thousands;
    }
    if ( power == 3) {
        goto hundreds;
    }
    if ( power == 2) {
        goto tens;
    }
    if ( power == 1) {

        goto ones;
    }


    
    thousands:
    {
        cout << number[idx];
        string appendChar = digitToNumeral( atoi(number[idx]) , 'M' ,'M' ,'M' );
        cout << "1";
        final.append(appendChar);

        idx++;
    }
    hundreds:
    {
        cout << number[idx];
        string appendChar2 = digitToNumeral( atoi(number[idx]) , 'C' ,'D' ,'M' );
        final.append(appendChar2);


        idx++;
    }
    tens:
    {
        string appendChar3 = digitToNumeral( atoi(number[idx]) , 'X' ,'L' ,'C' );
        final.append(appendChar3);



        idx++;
    }
    ones:
    {
        string appendChar4 = digitToNumeral( atoi(number[idx]) , 'I' ,'V' ,'X' );
        final.append(appendChar4);
    }

    

    return final;
    }

    string digitToNumeral(int i, char digit, char fiveX, char tenX ) {
        std::string romanDigit ("");
        cout << i;
        

        switch (i) {
            case 0:
                romanDigit.append("");
                break;
            case 1:
                romanDigit.push_back(digit );
                break;
            case 2:
                romanDigit.push_back(digit + digit );
                break;
            case 3:
                romanDigit.push_back(digit + digit + digit);
                break;
            case 4:
                romanDigit.push_back(digit + fiveX);
                break;
            case 5:
                romanDigit.push_back(fiveX);
                break;
            case 6:
                romanDigit.push_back(fiveX + digit);
                break;
            case 7:
                romanDigit.push_back(fiveX + digit + digit);
                break;
            case 8:
                romanDigit.push_back(fiveX + digit + digit + digit);
                break;
            case 9:
                romanDigit.push_back(digit + tenX);
                break;
            default:
                break;
        }

        return romanDigit;
    }
};
