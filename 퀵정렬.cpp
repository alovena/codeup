#include <iostream> 
using namespace std; 

void quicksort(int low,int high,int arr[]);
void partition(int low,int high,int& pivotpoint,int arr[]);
int main(void){
	int arr[50]={0};
	int i,number;
	int low,high;
	cout<<"몇개를 입력하시겠습니까?"<<endl;
	cin>>number;
	for(i=0;i<number;i++){
		cin>>arr[i];
	}
	low=0;
	high=number-1;
	quicksort(low,high,arr);
	for(i=0;i<number;i++){
		cout<<arr[i]<<"";
	}
	return 0;
}
void quicksort(int low,int high,int arr[]){
	int pivotpoint;
	if(high>low){
		partition(low,high,pivotpoint,arr);
		quicksort(low,pivotpoint-1,arr);
		quicksort(pivotpoint+1,high,arr);
	}
}
void partition(int low,int high,int& pivotpoint,int arr[]){
	
	int i,j,temp,pivotitem;
	pivotitem=arr[low];
	j=low;
	for(i=low;i<=high;i++){
		if(arr[i]<pivotitem){
			j++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;

		}
		pivotpoint=j;
		temp=arr[low];
		arr[low]=arr[pivotpoint];
		arr[pivotpoint]=temp;
	}
}
