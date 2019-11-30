#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int n, c=0;
	long int l;
	cin>>n;
	l = n-1;
	if ((n >= 1)&&(n <= 1000000)){
	for(int i=0;i<l;i++) {
	    c = c+(n-1);
	    
	}
        c = c % 1000000007;  
	cout<<c<<endl;
	}
	return 0;
}
