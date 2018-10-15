#include<stdio.h>
int main(void){
	int array[10] ={1,9,7,8,10,2,3,4,6,5};
	int i,j,temp,index;
	for(i=0;i<10;i++){
		int min=99;
		for(j=i;j<10;j++){
			if(min>array[j]){
			min=array[j];
			index=j;	
			}
			
		}
		temp=array[i];
		array[i]=array[index];
		array[index]=temp;
		
	}
	for(i=0;i<10;i++){
		printf("%d",array[i]);
	}
	return 0;
	
}
