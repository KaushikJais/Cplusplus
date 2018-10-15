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

int Kitchen_timetable(int arr_A[],int arr_B[],int N){
	int cnt=0;
	if(arr_A[0]>=arr_B[0]){
		++cnt;
	}
	for(int i =1 ;i<N;++i){
		if((arr_A[i]-arr_A[i-1])<arr_B[i]){
			continue;
		}
		else{
			++cnt;
		}
	}
	return cnt;
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
		//sort(arr_A,arr_A+N);
		int ans= Kitchen_timetable(arr_A,arr_B,N);
		cout<<ans<<endl;
	}

	return 0;
}