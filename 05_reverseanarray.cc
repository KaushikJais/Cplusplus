#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int rem=0;
	int reversed_number =0;
	while(num>0){
		rem = num%10;
		num = num/10;
		reversed_number = reversed_number*10+rem;
	}

	cout<<reversed_number;
	return 0;

}