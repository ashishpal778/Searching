#include<bits/stdc++.h>
using namespace std;
int* selection_sort(int ar[]){
	int min_index;
	for(int i=0;i<5-1;i++){
		min_index=i;
		for(int j=i+1;j<5;j++){
			if(ar[j]<ar[min_index])
			 min_index=j;
			}
			swap(ar[i],ar[min_index]);
	}
	return ar;
	// for(int i=0;i<5;i++)			//how we will returm array& auto for loop why not work & size not working
	// 	cout<<ar[i];
}
int main (){
	int ar[5]={5,1,6,3,2};
	int *arr = selection_sort(ar);
	for(int i = 0; i < sizeof(ar)/sizeof(int); i++)
		cout<<*(arr+i)<<" ";
}
