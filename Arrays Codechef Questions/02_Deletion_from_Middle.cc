#include <iostream>
#include <cmath>
#include <cstring>
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

int main(){
	int arr[100];
	int N;
	cin>>N;
	Input_Array(arr,N);
	int k;
	cin>>k;

	for(int i =k ; i<N ; ++i){
		arr[i] = arr[i+1];
	}
	--N;

	Output_Array(arr,N);
}