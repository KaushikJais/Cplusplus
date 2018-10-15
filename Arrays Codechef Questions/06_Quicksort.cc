#include <iostream>
#include <cstring>
#include <algorithm>
#include <sstream>
using namespace std;


void Input_Array(int arr[],int N){
	for(int i=0;i<N;++i){
		cin>>arr[i];
	}
}

void Output_Array(int arr[],int N){
	for(int i =0 ; i<N;++i){
		cout<<arr[i]<<", ";
	}
}


int partition_of_array(int arr[],int be,int en){
		int pivot = arr[en];
		int i = be-1;
		for(int j=be;j<=en-1;++j){
			if(arr[j]<pivot){
				++i;
				swap(arr[j],arr[i]);
			}
		}
		swap(arr[en],arr[i+1]);
		return i+1;
}

void QuickSort(int arr[],int be, int en){

	if(be>=en){
		return ;
	}
	int  p = partition_of_array(arr,be,en);
	QuickSort(arr,be,p-1);
	QuickSort(arr,p+1,en);
}


int main(){
	int N;
	cin>>N;
	int arr[100];
	Input_Array(arr,N);
	QuickSort(arr,0,N-1);
	Output_Array(arr,N);
	return 0;

}