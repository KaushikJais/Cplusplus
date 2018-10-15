#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	int NoOfRows;
	cin>>NoOfRows;

	for(int i=1;i<=NoOfRows;++i){
		int spaces_rig = NoOfRows-i;
		for(int k=1;k<=i;++k){
			cout<<k<<"\t";
		}
		for(int j=spaces_rig;j>=1;--j){
			cout<<"\t";
		}
		int spaces_left = NoOfRows -(i+1);
		for(int k=spaces_left;k>=1;--k){
			cout<<"\t";
		}
		if(i<NoOfRows){
			for(int j=i;j>=1;--j){
				cout<<j<<"\t";
			}
		}
		else{
			for(int j=i-1;j>=1;--j){
				cout<<j<<"\t";
			}
		}
		cout<<endl;

	}
	return 0;
}