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

void UpsandDown(int arr[],int N){
	for(int i=0;i<N-1;++i){
		if(i%2==0){
			if(arr[i]<=arr[i+1]){
				continue;
			}
			else{
				swap(arr[i+1],arr[i]);
			}
		}
		else{
			if(arr[i]>=arr[i+1]){
				continue;
			}
			else{
				swap(arr[i+1],arr[i]);
			}
		}
	}
}



int main(){
	int T;
	cin>>T;
	int N;
	while(T){
		--T;
		cin>>N;
		int arr[N];
		Input_Array(arr,N);
		sort(arr,arr+N);
		UpsandDown(arr,N);
		Output_Array(arr,N);
		cout<<endl;
	}

	return 0;
}