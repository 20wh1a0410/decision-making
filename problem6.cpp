#include<iostream>
using namespace std;
int main(){
	int a;
	char ch;
	cin>>ch>>a;
	if((a%2==0&&(ch=='a'||'c'||'e'||'g'))||(a%2!=1&&(ch=='b'||'d'||'f'||'h')))
	cout<<"square is white";
	else
	cout<<"square is black";
	return 0;
}
