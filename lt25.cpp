class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        if(n==1){
            return true;
        }
        int r=n-1;
        int l=0;
        bool matching=true;
        int temp1;
        int temp2;
        while(l<n && r>0){
            temp1=s[l];
            temp2=s[r];
            if(temp1>=65 && temp1<=90){
                temp1=temp1+32;
            }
            if(temp2>=65 && temp2<=90){
                temp2=temp2+32;
            }
            if((temp1>=97 && temp1<=122) || (temp1>=48 && temp1<=57)){
                if((temp2>=97&&temp2<=122) || (temp2>=48 && temp2<=57)){
                    if(temp1==temp2){
                        matching=true;
                        l++;
                        r--;
                    }
                    else{
                        matching=false;
                        break;
                    }
                }
                else{
                    r--;
                }
            }
            else{
                l++;
            }
        }
        if (matching)
        {
            return true;
        }
        else{
            return false;
        }
        


    }
};