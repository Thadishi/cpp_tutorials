#include <iostream>
#include <cstdio>
using namespace std;

#define getmax(a,b) (a>b ? a:b)

int main(int argc, char**argv){
    int x=5, y;
    int *foo;
    
    foo = &x;
    y = getmax(x, 2);
    cout << y <<endl;
    cout << getmax(7, *foo) << endl;
    return 0;
}
