#include <iostream>

using namespace std;

int main (){
	
	double LuasRumah = 42;
	double LantaiPkt = 193*1215;
	double Luas1Box = LantaiPkt*8/1000000;
	double JumlahBoxP, BiayaP, BiayaPG, TotalB;
		
	cout << "Luas Rumah			: "<<LuasRumah<<" m2"<<endl;
	cout << "Luas Rumah			: "<<LuasRumah<<" m2"<<endl;
		
	JumlahBoxP = LuasRumah/Luas1Box;
	cout << "Jumlah Box Parket		: "<<JumlahBoxP<<endl;
		
}
