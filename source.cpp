#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

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

<<<<<<< HEAD
	int hieu = hieu(a,b);
	cout<< "Hieu la" + hieu;
	
=======
	int sum = tong(a,b);
	cout<< "Tong la" + sum;	

>>>>>>> 3aa734c1bfc3dad1074c4b50079e5d309f827af3
	system("pause");
	return 0;
}