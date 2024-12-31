#include <iostream>

using namespace std;

void swapval(int x,int y){
	int u=x;
	x=y;
	y=u;
}

void swapadrs(int *x,int *y){
	int u=*x;
	*x=*y;
	*y=u;
}
void swapref(int &x,int &y){
	int u=x;
	x=y;
	y=u;;

}
int main(){
	int x=3;
	int y=7;
swapval(x,y);
cout<<x<<" "<<y<<"\n";
swapadrs(&x,&y);
cout<<x<<" "<<y<<"\n";
swapref(x,y);
cout<<x<<" "<<y<<"\n";
}
