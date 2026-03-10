#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      vector<int> new_nums;
      
        new_nums.push_back(nums[0]);
	
	    for(int i = 1; i < nums.size(); i++)
		new_nums.push_back(new_nums[i-1] + nums[i]);

        return new_nums;
     
    }
}; 
//This method uses extra space as a vector has been used to store the sum
int main(){
	int n;
	cout << "Enter the size of the vector";
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	Solution o;
	vector<int> res= o.runningSum(arr);
	for(int i=0; i<n; i++){
		cout << " " << res[i];
	}

}
