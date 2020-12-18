#include <iostream>
#define phi 3.14
using namespace std;

double HitungLuas(double r){
	double Luas = phi*r*r;
	return Luas;
}
double HitungKeliling(double r){
	double Keliling = 2*phi*r;
	return Keliling;
}
double HitungVolume(double r,double t){
	double Volume = phi*r*r*t;
	return Volume;
}
int main(){
	int Pilih;
	double r, t;
	char i;
	do{
	cout<< "=====Hitung Lingkaran=====" <<endl;
	cout<< "1. Luas Lingkaran" <<endl;
	cout<< "2. Keliling Lingkaran" <<endl;
	cout<< "3. Volume Tabung" <<endl;
	cout<< "Pilih : "; cin>> Pilih;
	if(Pilih == 1){
		cout<< "Jari - Jari : "; cin>> r;
		cout<< "Luas Lingkaran Adalah ";
		cout<< HitungLuas(r) <<endl;
	}else if(Pilih == 2){
		cout<< "Jari - Jari : "; cin>> r;
		cout<< "Keliling Lingkaran Adalah ";
		cout<< HitungKeliling(r) <<endl;
	}else if(Pilih == 3){
		cout<< "Jari - Jari : "; cin>> r;
		cout<< "Tinggi      : "; cin>> t;
		cout<< "Volume Tabung Adalah ";
		cout<< HitungVolume(r, t) <<endl;
	}else{
		cout<< "Tidak Ada Hitungan !" <<endl;
	}
		cout<< "Ulangi Program? (y/n) "; cin >> i;
		if(i == 'n'){
			cout<< "" <<endl;
			cout<< "Program Selesai, Terima Kasih :)" <<endl;
		}
		}while(i == 'y');
}
	


	 

	
