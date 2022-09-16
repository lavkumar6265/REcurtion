   string findSum(string X, string Y) {
        int n1 = X.length()-1;
        int n2 = Y.length()-1;
        int carry = 0;
        string ans;
        while(n1>=0 || n2>=0){
            if(n2<0){
                int sum = X[n1]-48 +carry;
                int digit = sum%10+48;
                ans.push_back(digit);
                carry = sum/10;
                n1--;
            }
            else if(n1<0){
                int sum = Y[n2] -48 +carry;
                int digit = sum%10+48;
                ans.push_back(digit);
                carry = sum/10;
                n2--;
            }
            else{
                int sum = X[n1]-48 + Y[n2]-48 +carry;
                int digit = sum%10+48;
                ans.push_back(digit);
                carry = sum/10;
                n1--;
                n2--;
            }
        }
        if(carry!=0){
            ans.push_back(carry+48);
        }
        while(ans.size()>1&&ans.back()=='0'){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }