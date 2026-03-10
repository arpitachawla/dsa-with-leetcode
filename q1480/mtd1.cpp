#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {//for size do a nums.size()
        int count=0;
        for(int i=0; i<nums.size(); i++){
            //Running sum means every index after 0 will update
            count=count+nums[i];
            nums[i]=count; 
        }  
        return nums;
    }
};
int main(){
	int n;
	cout << "Enter the size of the vector";
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	//Create object to use the class Solution
	Solution obj;
	vector<int> res= obj.runningSum(v);
	cout << "\n";
	for(int i=0; i<n;i++){
		cout << " " << res[i];
	}


}
