class Solution {
public:
    int guessNumber(int n) {
        int low=1;
        int high=n;
        int mid=0;
        int res= guess(mid);
        while(low<=high){
            mid= low+ (high-low)/2;
            res= guess(mid);
            if(res==0){
                return mid;
            }
            else if(res==1){
                low= mid+1;
            }
            else if(res==-1){
                high= mid-1;
            }
        }
        return -1;
        
    }
};
