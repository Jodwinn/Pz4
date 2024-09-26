#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int a;
	int b;
	int c;
    cout << "Введіть три числа: ";
    std::cin >> a >> b >> c;
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    cout << "Найбільше число: " << max <<endl;	
}
