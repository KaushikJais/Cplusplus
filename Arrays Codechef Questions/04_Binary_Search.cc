#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

//Provided the given array is sorted

void Input_Array(int arr[],int N){
	for(int i=0;i<N;++i){
		cin>>arr[i];
	}
}


int BinarySearch(int arr[],int be,int en,int item){
	while(be<=en){
		int mid = (be+en)/2;
		if(arr[mid]==item){
			return mid;
		}

		else if (item < arr[mid]){
			en = mid-1;
		}
		else{
			be = mid+1;
		}
	}

	return -1;
}

int main(){
	int N;
	cin>>N;
	 int arr[100];
	 Input_Array(arr,N);
	 int item;
	 cin>>item;

	 int ans = BinarySearch(arr,0,N-1,item);
	 cout<<ans;

	 return 0;
}