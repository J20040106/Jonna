#include<iostream>

using namespace std;

int main() {
	int now_year, birth_year;
	cout << "현제 년도 : ";
	cin >> now_year;
	cout << "태어난 년도 : ";
	cin >> birth_year;
	cout << "당신의 나이는 " << now_year - birth_year+1 << "살입니다.\n";
	return 0;
}