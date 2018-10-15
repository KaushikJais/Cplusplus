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

int main(){
	int N;
	cin>>N;
	int P1,P2;
	int arr_play[N];
	int arr_cum[N];
	int N1=0;
	int N2=0;

	for(int i=0;i<N;++i){
		cin>>P1>>P2;
		N1+=P1;
		N2+=P2;
		if((N1-N2)>0){
			arr_cum[i]=N1-N2;
			arr_play[i] = 1;
		}
		else{
			arr_cum[i] = N2-N1;
			arr_play[i] = 2;
		}
	}

	int max=-1;
	int index = -1;
	for(int i=0;i<N;++i){
		if(arr_cum[i]>max){
			max = arr_cum[i];
			index = i;
		}
	}
	cout<<arr_play[index]<<" "<<max;
	return 0;
}