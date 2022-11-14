#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*//Задан массив А содержащий 10 целых случайных чисел от 0 до 20. Найти произведение элементов этого массива.
	const int n = 10;
	int mas[n];
	int p = 1;
	srand(time(nullptr));
	mas[0] = 1;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << ' ';
		p *= mas[i];
	}
	cout << "P=" <<p;
	system("pause");*/
	//Задан массив,который содержит 8 случайных целых чисел от -10 до 10. Найти сумму положительных положительных элементов массива.
	/*const int n = 8;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21-10;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] > 0) {
			s += mas[i];
		}
	}
	cout << "s= " << s << endl;*/
	//Задан массив, который содержит 16 случайных целых чисел от 0 до 20. Найти колво элементов массива, которые делятся на 3 и на 5.
	/*const int n = 16;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] %3 == 0 && mas[i] % 5 == 0) {
			s++;
		}
	}
	cout << "s= " << s << endl;*/
	//Задан массив, содержащий 9 целых случайных чисел от -10 до 10. Найти сумму элементов массива, которые являются четными числами.
	const int n = 9;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21 - 10;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 2==0) {
			s += mas[i]; 
		}
	}
	cout << "s= " << s << endl;
	system("pause");
}