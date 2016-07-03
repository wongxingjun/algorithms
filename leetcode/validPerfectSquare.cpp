class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<0)
            return false;
        int l=0,r=num;
        while(l<=r)
        {
            long long mid=(l+r)/2;
            long long tmp=mid*mid;
            if(tmp==num)
                return true;
            else if(tmp<num) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
};