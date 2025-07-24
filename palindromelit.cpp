#include <iostream>
using namespace std;

int main() {
int  a,temp,b=0;
cin>>a;
int c=a;

while(a>0){
	temp=a%10;
	a=a/10;
	b=b*10+temp;
	
	
}
if (b==c){
	cout<<"true";
}
else {
	cout<<"false";
}
	return 0;
}