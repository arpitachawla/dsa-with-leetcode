#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

//This solution uses O(n) space and O(n)-- time

class Solution{
public:
	int majorityElement(vector<int> &nums){
		unordered_map<int, int> freq;

		/*freq
		 key: value
	        */

		//Now we will count frequencies
		for(int num: nums){
			freq[num]++;
		//freq[num]++, means find the number in the unordered_map and increase the value by 1, if that number is not there make that key and increment it
		}
		int max_freq=0;
		int maxnumber= nums[0];
		for(auto &entry: freq){
			int no= entry.first;
			int count= entry.second;
			if(count> max_freq){
				maxnumber = no;
			}
		}
		return maxnumber;
	}
};

int main(){
	int n;
	cout<< "Enter the size of array:"<<endl;
	cin>> n;
	vector<int> nums(n);
	cout<< "Enter "<< n<< "Elements"<<endl;
	for(auto &i: nums){
		cin>> nums[i];

	}
	Solution s;
        int number = s.majorityElement(nums);
	cout<< " The result is "<< number<< endl;

}

