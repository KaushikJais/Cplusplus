#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

void Input_Array(int arr[],int N){
	for(int i=0;i<N;++i){
		cin>>arr[i];
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
		int ans = arr[0]+arr[1];
		cout<<ans<<endl;
	}

	return 0;
}