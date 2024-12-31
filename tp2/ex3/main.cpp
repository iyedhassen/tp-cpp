#include <iostream>

using namespace std;




void incrementer(int* x) {
    (*x)++;
}


void permuter(int*a, int*b) {
    int temp =*a;
    *a =*b;
    *b =temp;
}


void permuter2(int & a ,int & b ){

    int temp =a;
    a =b;
    b =temp;


}

int main() {
    int a = 10, b = 20;

    std::cout << "avant incr�mentation : a =" << a << std::endl;
    incrementer(&a);
    std::cout << "apr�s incr�mentation : a =" << a << std::endl;

    std::cout << "avant permutation : a =" << a << ", b = " << b << std::endl;
    permuter(&a, &b);
    std::cout << "apr�s permutation : a =" << a << ", b = " << b << std::endl;

    return 0;

}



void incrementer(int& x) {
    x++;
}


void permuter(int&a,int&b) {
    int temp=a;
    a =b;
    b =temp;
}
/*
int main() {
    int a = 10, b = 20;

    std::cout << "avant incr�mentation : a = " << a << std::endl;
    incrementer(a);
    std::cout << "apr�s incr�mentation : a = " << a << std::endl;

    std::cout << "avant permutation : a = " << a << ", b = " << b << std::endl;
    permuter(a, b);
    std::cout << "apr�s permutation : a = " << a << ", b = " << b << std::endl;

    return 0;
}
*/
