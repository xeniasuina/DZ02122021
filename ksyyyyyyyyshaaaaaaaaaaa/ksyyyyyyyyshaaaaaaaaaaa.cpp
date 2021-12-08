#include <iostream>;
#include <string>;
#include <codecvt>
#include <windows.h>


using namespace std;

bool is_polyndrome(const char* str) {
	int n = strlen(str);
	for (int i = 0; i < n; i += 1) {
		if (str[i] != str[n - i - 1]) return false;
	}
	return true;
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	//Задание 1.
	char* str = new char[100]; 
	cin.getline(str, 99);
	if (is_polyndrome(str)) {
		cout << "Слово является палиндромом." << endl;
	}
	else {
		cout << "Слово не является палиндромом." << endl;
	}
	delete[] str;
	//Задание 2.
	char* str1 = new char[100];
	cin.getline(str1, 99);
	char* pTmp = nullptr;
	auto num = strtok_s(str1, "+", &pTmp);
	int sum = stoi(num);
	while (strcmp(pTmp, "") != 0) {
		num = strtok_s(nullptr, "+", &pTmp);
		sum += stoi(num);
	}
	cout << sum << endl;
	delete[] str1;
	//Задание 3.
	char* str2 = new char[100];
	cin.getline(str2, 99);
	char* pTmp2 = nullptr;
	auto firstname = strtok_s(str2, " ", &pTmp2);
	auto name = strtok_s(pTmp2, " ", &pTmp2);
	cout << name[0] << "." << pTmp2[0] << "." << " " << firstname << endl;
	delete[] str2;
}