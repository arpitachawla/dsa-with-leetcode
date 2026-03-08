#include<stdio.h>

int addDigits(int num) {
    int sum=0;
    while(num>0){
        sum+=(num%10);
        num= num/10;
    }
    int finalsum=0;
    if(sum!=0){
        while(sum>0){
            finalsum+=(sum%10);
            sum= sum/10;
        }
    }
    int fsum=0;
    if(finalsum>0){
        while(finalsum>0){
            fsum+=(finalsum%10);
            finalsum= finalsum/10;
        }
    }
    return fsum;
}
int main(){
	int n;
	printf("Enter the number:: ");
	scanf("%d", &n);
	int res= addDigits(n);
	printf("The result is %d", res);
}
