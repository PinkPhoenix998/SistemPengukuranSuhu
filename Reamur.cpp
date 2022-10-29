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
	
	cout << "Reamur = ";
	cin >> r;
	
	cout << "Celcius = "<< r/0.8 <<endl;
	cout << "Fahrenheit = "<< r*2.25+32 <<endl;
	cout << "Kelvin = "<< r/0.8+273.15;
}
