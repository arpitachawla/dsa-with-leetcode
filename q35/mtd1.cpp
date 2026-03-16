#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low= 0;
        int high= nums.size()-1;
        int mid= low+ (high-low)/2;
        while(low<=high){
            mid= low +(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]> target){
                high= mid-1;
            }
            else if(nums[mid]<target){
                low= mid+1;
            }
        }
        return low;

    }
};
int main(){
	cout<< "Enter the number of elements::\n";
	int n, target;
	cin>> n;
	vector<int> nums(n);
	cout<< "Enter elements inside array:";
	for(int i=0; i<n;i++){
		cin>> nums[i];
	}
	cout<<"Enter the target:";
	cin>> target;
	Solution s;
	int res= s.searchInsert(nums,target);
	cout<< res;
}
