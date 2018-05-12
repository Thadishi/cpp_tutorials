#include <iostream>
#include <cstdio>

using namespace std;
/*int main(){
	char myChar;

	std::cout << "Enter a character. Enter: ";
	std::cin >> myChar;
	std::cout << "You entered: " << myChar << std::endl;
	std::cin.clear(); //ignore any superfluous input
	std::cin.sync();  //Synchronize with the console
	//std::cin.get();   //wait for the user to exit the program

	return 0;
}*/

int main(int argc, char**argv){

	char myChar;
	cout << "Enter a character. ENTER: ";
	cin >> myChar;
	//cout << "You entered: " << myChar << endl;
	printf("you entered %c\n", myChar);
	cin.clear(); //ignore any superfluous input
	cin.sync();  //synchronize with the console
	//cin.get(); //wait for the user to exit the program

	return 0;
}