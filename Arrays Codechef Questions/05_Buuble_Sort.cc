#include <iostream>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <cmath>
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

void Bubble_Sort(int arr[],int N){
	for(int i=0;i<N-1;++i){
		for(int j=0;j<N-1-i;++j){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main(){
	int N;
	cin>>N;
	int arr[100];
	Input_Array(arr,N);
	Bubble_Sort(arr,N);
	Output_Array(arr,N);
	return 0;
}