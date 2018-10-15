#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int N;
	cin>>N;
	long int arr[N];
	for(int i=0;i<N;++i){
		cin>>arr[i];
		string s = to_string(arr[i]);
		int len_s = s.length();
		int total_even=0;
		int total_odd=0;
		for(int j=0;j<len_s;++j){
			if(((int)s[j])%2==0){
				total_even+=(int)s[j];
			}
			else{
				total_odd+=(int)s[j];
			}
		}

		if(total_even%4==0 or total_odd%3==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}