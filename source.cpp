#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;

	int hieu = hieu(a,b);
	cout<< "Hieu la" + hieu;
	
	int sum = tong(a,b);
	cout<< "Tong la" + sum;	

		// Tính tích
	int tich = tich(a,b);
	cout<< "Tich la" + tich;

	system("pause");
	return 0;
}