#include<iostream>
using namespace std;
int* insertion_sort(int ar[],int n){
for(int i=1;i<n;i++){
	int key=ar[i];
	int j=i-1;
	while(j>=0&&ar[j]>key){
		ar[j+1]=ar[j];
		j--;
	}
	ar[j+1]=key; 
	}
	
return ar;
}
int main (){
	int ar[5]={5 ,2 ,3 ,6 ,1};
	int n = sizeof(ar)/sizeof(int);
	int *m= insertion_sort(ar,n);
	for(int i=0;i<n;i++)
	cout<<*(m+i);       //ar[i]=*(ar+i)

}