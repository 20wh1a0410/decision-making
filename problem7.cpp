#include<iostream>
using namespace std;
int main(){
	int n;
	char s[10];
	cin>>s>>n;
	if((s=="march"&&n>=20)||s=="april"||s=="may"||(s=="june"&&n<21))
	cout<<"spring";
	else if((s=="june"&&n>=21)||s=="july"||s=="august"||(s=="september"&&n<22))
	cout<<"summer";
	else if((s=="september"&&n>=22)||s=="october"||s=="november"||(s=="december"&&n<21))
	cout<<"fall";
	else//((s=="december"&&n>=21)||s=="january"||s=="february"||(s=="march"&&n<20))
	cout<<"winter";
}
