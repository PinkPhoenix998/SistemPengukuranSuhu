#include <iostream>
using namespace std;
int main()
{
		
	char Nama [20]; 
	char NIM [20];
	char Alamat [20];
	char NoHP [20];
	float f, k, r, c;
	
	cout << "Masukan Nama : " ;
	gets (Nama);
	cout << "Masukan NIM : ";
	gets (NIM);
	cout << "Masukan Alamat : ";
	gets (Alamat);
	cout << "Masukan No. HP : ";
	gets (NoHP);
	
	cout << "Fahrenheit = ";
	cin >> f;
	
	cout << "Celcius = " << (f-32)/1.8 <<endl;
	cout << "Kelvin = "<< (f-32)/1.8+273.15<<endl; 
	cout << "Reamur = "<< (f-32)/2.25;
}