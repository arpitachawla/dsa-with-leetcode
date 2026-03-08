#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* result = (int*)malloc(2 * sizeof(int)); //Need to return a pointer so taking memory from malloc
						 //Coz array initialized will be destroyed

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;//If no pair found
    return NULL;
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n;i++){
		scanf("\n%d", (arr+i));

	}
	printf("Enter target:\n");
	int target;
	scanf("%d", &target);
	int returnsize=2;
	int *res=twoSum(arr,n,target,&returnsize);
	if (res != NULL) {
    		printf("Indices: %d %d\n", res[0], res[1]);
    		free(res); // free malloc'ed memory
	} else {
    		printf("No pair found\n");
		}

}
