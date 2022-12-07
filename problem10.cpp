#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if (n>=380&&n<450)
	cout<<"voilet";
	else if (n>=450&&n<495)
	cout<<"blue";
	else if (n>=495&&n<570)
	cout<<"green";
	else if (n>=570&&n<590)
	cout<<"yellow";
	else if (n>=590&&n<620)
	cout<<"orange";
	else if (n>=620&&n<750)
	cout<<"red";
	else cout<<"ERROR:wavelength is outside the visible spectum";
	return 0;
} 
