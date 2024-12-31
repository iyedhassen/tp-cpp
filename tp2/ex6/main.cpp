#include <iostream>

using namespace std;

int random(){
	return 2 +rand() % 5;
}
int main(){
	cout<< random()<<"\n";
	cout<< random()<<"\n";
	cout<< random()<<"\n";
	cout<< random()<<"\n";
	cout<< random()<<"\n";
}
