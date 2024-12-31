#include <iostream>
#include <cmath>
using namespace std;

int distance(int xa,int xb,int ya,int yb){
	int d;
	d=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
	return d;
}

int main(){
	int xa,xb,ya,yb;
	cout<<"donner les cordonners de A :";
	cin>>xa>>ya;
	cout<<"donner les cordonners de B :";
	cin>>xb>>yb;
	cout<<"distance AB:"<<distance(xa,xb,ya,yb);
	return 0;

}
