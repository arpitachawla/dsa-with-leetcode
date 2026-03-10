#include<stdio.h>
#include<stdlib.h>
int* reverse(int x){
    int* rev=(int*)malloc(sizeof(int));
    if(x!=0){
        *rev= *rev*10 + x%10;
        return (int*)reverse(x/10);
    }
    else{
        *rev=*rev +0;
    }
    return rev;
}

int main(){
	int n;
	scanf("%d", &n);
	int * res= reverse(n);
	printf("%d", res);
}
