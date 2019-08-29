#include<iostream>
#include<vector>
using namespace std;
vector<int> bubble_sort(vector<int> v){
	for(int i=0;i<v.size()-1;i++){			//in first loop largest element is set at last position
		for(int j=0;j<v.size()-1-i;j++){
			if(v[j]>v[j+1])
				swap(v[j],v[j+1]);
				
	}
	}
	
	return v;
}
int main(){
	vector<int> v{5,3,2,4,6,1};
    vector<int> out = bubble_sort(v);
    for(auto x:out)
    	cout<<x<<" ";
}