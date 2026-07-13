#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        //make freq array
        vector<int> freq(26);

        for(int i=0; s[i]!='\0'; i++){
            freq[s[i]- 'a']++;
        }
//Will be stored like a in index 0, b at index 1
        for(int i=0; t[i]!='\0'; i++){
            freq[t[i] -'a']--;
        }
        for(int i=0; i<freq.size(); i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};
int main(){
	
	string s;
	string t;
	cout<< "Enter the 2 strings:"<< endl;
	cin>> s;
	cin>> t;
	Solution Sol;
	bool res= Sol.isAnagram(s,t);
	if(res==1){
		cout<< "The entered number is an anagram";
	}
	else{
		cout<<"The entered number is not an anagram";
	}

}

