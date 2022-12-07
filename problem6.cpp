#include<iostream>
using namespace std;
int main(){
	int a;
	char ch;
	cin>>ch>>a;
	
	if(ch=='a'||ch=='c'||ch=='e'||ch=='g') {
		if(a%2==0)
		cout<<"white";
		else cout<<"black";
		
	} else {
		if(a%2==0)
		cout<<"black";
		else cout<<"white";
		
	}

	return 0;
}
