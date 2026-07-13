#include<iostream>
#include <ostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int countofnumber=0;
        int number = 0;
        for(int i=0; i<nums.size(); i++){
            if(countofnumber==0){
                number= nums[i];
            }
            if(nums[i]==number){
                countofnumber++;
            }
            else{
                countofnumber--;
            }
            
        }
        return number;
        
    }
};

int main(){
	Solution sol;
	//Creating instance of the class
	int n;
	cout<< "Enter the no of elements you will enter" <<endl;
	cin>> n;
	 
	vector<int> nums(n);
	cout<< "Enter "<< n << " elements: ";
	for(int i=0; i<n; i++){
		cin>> nums[i];
	}
	cout<< "Majority element is: "<< sol.majorityElement(nums)<< endl;
	return 0;
}

