#include <iostream>
using namespace std;

void Input_Array(int arr[],int N){
	for(int i=0;i<N;++i){
		cin>>arr[i];
	}
}

void Output_Array(int arr[],int N){
	for(int i=0;i<N;++i){
		cout<<arr[i]<<" ";
	}
}

void rotate_array(int arr[],int d,int N){
	int new_arr[d];
	for(int i=0;i<d;++i){
		new_arr[i]=arr[i];
	}
	for(int j=d;j<N;++j){
		arr[j-d] = arr[j];
	}
	int a=0;

	for(int k=N-d;k<N;++k){
		arr[k]=new_arr[a];
		++a;
	}
}

int main(){
	int N;
	cin>>N; //number of element
	int d;
	cin>>d; //point from which array will be rotated
	int arr[100];
	Input_Array(arr,N);
	rotate_array(arr,d,N);
	Output_Array(arr,N);
	return 0;
}

//time Complexity = O(n+d) == O(n)
//Space Complexity = O(d)