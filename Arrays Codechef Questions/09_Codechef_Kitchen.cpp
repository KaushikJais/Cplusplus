#include <iostream>
#include <algorithm>
#include <cstring>
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
		cout<<arr[i]<<" ";
	}
}


?? Kitchen_timetable(int arr_A[],int arr_B[],int N){
	
}


int main(){
	int T;
	cin>>T; //Number of test cases
	int N;
	while(T){
		--T;
		cin>>N;
		int arr_A[N];
		int arr_B[N];
		Input_Array(arr_A,N);
		Input_Array(arr_B,N);
		sort(arr_A,N);
		Kitchen_timetable(arr_A,arr_B,N);
	}
}