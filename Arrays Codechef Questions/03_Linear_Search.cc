#include <iostream>
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
	int N;
	cin>>N;
	int item;
	cin>>item;
	int arr[100];
	Input_Array(arr,N);
	for(int i=0;i<N;++i){
		if(arr[i]==item){
			cout<<i<<","<<arr[i];
			break;
		}
	}
	return 0;
}