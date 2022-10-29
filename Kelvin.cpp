#include <iostream>
using namespace std;
int main()
{
	char Nama [20];
	char NIM [20];
	char Alamat [20];
	char NoHP [20];
	float f, k, r, c;
	
	cout << "Masukan Nama : ";
	gets (Nama);
	cout << "Masukan NIM : ";
	gets (NIM);
	cout << "Masukan Alamat : ";
	gets (Alamat);
	cout << "Masukan No. HP : ";
	gets (NoHP);
	
	cout << "Kelvin = ";
	cin >> k;
	
	cout << "Celcius = " << k-273.15<<endl;
	cout << "Fahrenheit = " << (k-273.15)*1.8+32<<endl;
	cout << "Reamur = " << (k-273.15)*0.8;
} 
