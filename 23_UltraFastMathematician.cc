#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t!=0){
		--t;
		int N1,N2;
		cin>>N1>>N2;

		string n1 = to_string(N1);
		string n2 = to_string(N2);

		if(n1.length()==n2.length() && (n1.length()<=100 && n2.length()<=100)){
			char arr[n1.length()];
			for(int i=0;i<n1.length();++i){
				if(n1[i]!=n2[i]){
					arr[i]='1';
				}
				else{
					arr[i]='0';
				}
			}
			string ans= string(arr);
			int result = stoi(ans);
			cout<<ans<<endl;

		}
		
	}
	return 0;
}