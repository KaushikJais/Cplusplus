#include <iostream>
using namespace std;


int main(){
	
	while(true){
		int n;
		cin>>n;
		int total = 0;
	
		if(total+n<0){
			break;
		}
		else{
			total+=n;
			cout<<n<<endl;
		}

	}
	return 0;
}