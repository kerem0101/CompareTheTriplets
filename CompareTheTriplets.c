#include <stdio.h>

int main(){
	int i,aliceArray[3],bobArray[3];
	int aliceResult=0, bobResult=0;
	
	for(i=0;i<3;i++){
		scanf("%d",&aliceArray[i]);
	}
	for(i=0;i<3;i++){
		scanf("%d",&bobArray[i]);
	}
	for(i=0;i<3;i++){
		if(aliceArray[i]>bobArray[i]){
			aliceResult++;
		}else if(bobArray[i]>aliceArray[i]){
			bobResult++;
		}
	}
	
	printf("%d %d",aliceResult,bobResult);
	
	/*
	for(i=0;i<3;i++){
		printf("%d",aliceArray[i]);
		printf("%d",bobArray[i]);
	}
	*/
}
