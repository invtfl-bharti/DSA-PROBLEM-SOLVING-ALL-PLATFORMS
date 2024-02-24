class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size()-1;
        digits[last] +=1;
        while(digits[last]==10){
            digits[last] = 0;
            last--;
            if(last >=0){digits[last] +=1;}
            else if(last < 0){
                digits.resize(digits.size()+1, 0);
                digits[0] = 1;
                break;
            }
        }

        // int last = digits.size()-1;
        // int last_num = digits[last];
        // last_num += 1;
        // digits[last] = last_num;
        // if(last_num == 10){
        //     digits[last] = 0;
        //     last--;
        //     while(digits[last]!=10){
        //         if 
        //     }
        //     if(last > 0){digits[last-1] +=1;}
        //     else if(last < 0){
        //         digits.resize(digits.size()+1, 0);
        //         digits[0] = 1;}
        // }
        return digits;
    }
};
