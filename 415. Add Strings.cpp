class Solution {
public:
    string addStrings(string num1, string num2) {
        int s1 = num1.size(), s2 = num2.size();
        if(s1 < s2){
            while(s1 < s2){
                num1 = "0" + num1;
                s1++;
            }
        }
        if(s2 < s1){
            while(s2 < s1){
                num2 = "0" + num2;
                s2++;
            }
        }
        int carry = 0, a, b;
        string sum = "";
        for(int i=s1 - 1; i>=0; i--){
            a = num1[i] - '0';
            b = num2[i] - '0';
            if(carry + a + b >= 10){
                carry += a + b;
                sum += char((carry % 10) + '0');
                carry /= 10;
            }
            else{
                carry += a + b;
                sum += char((carry % 10) + '0');
                carry /= 10;
            }
        }
        while(carry){
            sum += char((carry % 10) + '0');
            carry /= 10;
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
