#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }
};
//Simply sorting both the strings and then checking if these are equal

int main(){
	string s;
	string t;
	cout<< "Enter the strings"<< endl;
	cin>>s;
	cin>> t;
	Solution sol;
	bool res= sol.isAnagram(s,t);
	if(res== true){
		cout<< "It is an anagram";
	}
	else{
		cout<< "It is not an anagram";
	}
}
