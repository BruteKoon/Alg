#include <stdio.h>
#define MAX_SIZE 16
#define MAX_NUM 5
int main(){
	int list[MAX_SIZE] = {5,5,3,4,5,1,0,4,1,3,0,2,4,2,3,0};
	int answer[MAX_SIZE] = {0,} ;
	int count[MAX_NUM+1] = {0,};
	int countSum[MAX_NUM+1] = {0,};
	
	for(int i =0; i <MAX_SIZE;i++){
		int n = list[i];
		count[n]++;
	}

	countSum[0] = count[0];
	for(int j = 1; j<=MAX_NUM;j++){
		countSum[j] = count[j]+countSum[j-1];
	}


	for(int l = MAX_SIZE-1;l>=0;l--){
		int tmp = list[l];
		int tmp2 = countSum[tmp];
		countSum[tmp] = countSum[tmp] -1;
		answer[tmp2] = tmp;
	}

	for (int t = 0; t<MAX_SIZE;t++){
		printf("%d ", answer[t]);
	}


}
