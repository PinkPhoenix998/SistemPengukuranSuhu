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

	cout<<"Celcius = ";
	cin>>c;
	
	cout<<"Fahrenheit = "<<32+c*9/5 <<endl;
	cout<<"Kelvin = "<< c+273.15 <<endl;
	cout<<"Reamur = "<< c*4/5 <<endl;
}
