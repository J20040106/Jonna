#include <iostream>

using namespace std;

int main() {
	int input;
	do {
		cout << "입력할 양수 : ";
		cin >> input;
	} while (input<0);
	int result = 0, tmp = 1;
    while (input != 0) {
		result += tmp * (input % 2);
		input /= 2;
		tmp *= 10;
    }
	cout << "이진수 :"<<result;
	return 0; 
}