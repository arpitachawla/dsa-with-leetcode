#include<stdio.h>
#include<stdbool.h>

bool isPowerOfThree(int n) {
    //n=1 means true
    if(n==1){
        return true;
    }
    else if(n%3!=0 || n==0){
        return false;
    }
    else{
        return isPowerOfThree(n/3);
    }
    
}
int main(){
	int n;
	scanf("%d", &n);
	bool res= isPowerOfThree(n);
	if(res==true){
		printf("The number is a power of three");
	}
	else{
		printf("The number is not a power of three");
	}
}
