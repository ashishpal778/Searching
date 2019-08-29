#include<iostream>
using namespace std;
void merge(int ar[],int l,int m,int r){
	int n1=m-l+1,n2=r-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
		L[i]=ar[l+i];
	for(int i=0;i<n1;i++)
		R[i]=ar[m+i+1];

	int i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			ar[k]=L[i];
			i++ ,k++;
		}
		else{
			ar[k]=R[j];
			j++,k++;
		}
	}
	while(i<n1){
		ar[k]=L[i];
		i++,k++;
	}
	while(j<n2){
		ar[k]=R[j];
		j++,k++;
	}
}
void merge_sort(int ar[],int l,int r){
if(l<r){
	int m=l+(r-l)/2;
	merge_sort(ar,l,m);
	merge_sort(ar,m+1,r);
	merge(ar,l,m,r);
}
}
int main(){
	int ar[6]={12,11,13,5,6,7};
	int size=sizeof(ar)/sizeof(int);
	merge_sort(ar,0,size-1);
	for(int i=0;i<size;i++){
		cout<<ar[i]<<endl;
	}
}