#include <iostream>
using namespace std;

int main(){
	int N1,N2;
	cin>>N1>>N2;

	int i=1;
	int count=0;
	while(count!=N1){
		int ans=0;
		if((3*i+2)%N2!=0){
			ans = 3*i+2;
			cout<<ans<<endl;
			++i;
			++count;
			continue;
		}
		++i;	
	}

	return 0;
}