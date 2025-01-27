#include <iostream>
using namespace std;

int main() {

	// int i;
	// for(i=1; i<=10; i++) {
	// 	cout<<i<<"\n";
        
	// }

    int f1 = 0, f2 = 1, f3 = 0, n;
	cin>>n;
	cout<<"Fibonacci Series: \n";
	cout<<f1<<"\n"<<f2<<"\n";
	f3 = f1 + f2;

	while (f3 <= n) {
		cout<<f3<<"\n";

		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
	}
	return 0;
}