#include <iostream>
#include <string>
#include "Urun.h"
#include "Uretim.h"
#include "Satis.h"
#include "MaliDurum.h"
using namespace std;

int main() {
	Uretim u1(50,2,5584,"21.03.2004",50,5585);
	Satis u2(50,2,5590,5,25,5591);
	MaliDurum m1;
	cout << "-----URETIM BILGILERI-----" << endl;
	u1.bilgiAl();
	cout << "-----URUN BILGILERI-----"<<endl;
	u2.bilgiAl();

	m1.hesapla(u1,u2);
	m1.bilgiVer();
}