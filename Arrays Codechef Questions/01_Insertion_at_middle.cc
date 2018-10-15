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
	int item;
	cin>>item;
	int k;
	cin>>k;

	for(int i = N-1 ; i>=k ; --i){
		arr[i+1] = arr[i];
	}
	arr[k] = item;

	Output_Array(arr,N+1);
}