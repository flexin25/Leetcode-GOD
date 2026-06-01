class Solution {
public:
    bool isPalindrome(int x) {
    int r=0,ld;
    int t=x;
	while (x>0){
		ld=x%10;
        if ((r > INT_MAX / 10) || (r < INT_MIN / 10)) {
            return 0; 
         }
		r=(r*10)+ld;
		x/=10;
	}
	if(r==t) return true;
    else return false;
    }
};