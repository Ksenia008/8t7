#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*//����� ������ � ���������� 10 ����� ��������� ����� �� 0 �� 20. ����� ������������ ��������� ����� �������.
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
	//����� ������,������� �������� 8 ��������� ����� ����� �� -10 �� 10. ����� ����� ������������� ������������� ��������� �������.
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
	//����� ������, ������� �������� 16 ��������� ����� ����� �� 0 �� 20. ����� ����� ��������� �������, ������� ������� �� 3 � �� 5.
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
	//����� ������, ���������� 9 ����� ��������� ����� �� -10 �� 10. ����� ����� ��������� �������, ������� �������� ������� �������.
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