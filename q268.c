#include<stdio.h>

int missingNumber(int* nums, int numsSize) {
    //simple maths
    //add upto n coz we know the sum of all the nos
    //sum=n(n+1)/2
    int sum= numsSize*(numsSize+1)/2;
    int sumarray=0;
    for(int i=0; i<numsSize; i++){
        sumarray+= nums[i];
    }
    return (sum-sumarray);
}
int main(){
	//Take user input array and numsSize
	int n;
	printf("Enter size of the array::\n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elemnts inside array::\n");
	for(int i=0; i<n; i++){
		scanf("%d", (arr+i));
	}
	int res= missingNumber(arr,n);
	printf("The missing no is %d",res);
}

