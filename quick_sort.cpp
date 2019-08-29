#include<iostream>
using namespace std;
int partion(int ar[],int low,int high){
	int i=low-1;
	int pi=ar[high];
	for(int j=0;j<high;j++){
		if(ar[j]<=pi){
			i++;
			swap(ar[i],ar[j]);
		}
	}
	swap(ar[i],ar[pi]);
	return i+1;
}
void quick_sort(int ar[],int low,int high){
	while(low<high){
		int pivot =partion(ar,low,high);
		quick_sort(ar,low,pivot-1);
		quick_sort(ar,pivot+1,high);
	}
}
int main(){
	int ar[8]={7, 2, 1, 6, 8, 5,3,4};
	int len=sizeof(ar)/sizeof(int);
	quick_sort(ar,0,len-1);
	for(int i=0;i<len;i++){
		cout<<ar[i]<<" ";
	}
}