#include <cstdio>
#include <iostream>

using namespace std;

enum Color { red, green, blue };
Color r = red;
switch(r) {
	case red	:
		cout << "red\n";
		break;
	case green	:
		cout << "green\n";
		break;
	case blue	:
		cout << "blue\n";
		break;
}