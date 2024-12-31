#include <iostream>

using namespace std;

int main(){
	int n;
	int x=1;
	cout<<"donner n:";
	cin>>n;
	for (int i=1;i<=n;i++){
		x=i*x;
	}
	cout<<"factoriel de "<<n<<" ="<<x;
	return 0;
}
