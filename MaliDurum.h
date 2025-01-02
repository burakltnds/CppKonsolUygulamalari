#ifndef MALIDURUM_H
#define MALIDURUM_H


#include <iostream>
#include <string>
#include "Urun.h"
#include "Uretim.h"
#include "Satis.h"

using namespace std;

class MaliDurum
{
private:
	int uretimSayisi, maliyet, kazanc;
public:
	//MaliDurum(int uretimSayisi ,int maliyet ,int kazanc) {}
	void hesapla(const Uretim& ur, const Satis& s) {
		uretimSayisi = ur.getUrunSayisi();
		maliyet = (uretimSayisi * ur.getBirimFiyat());
		kazanc = (s.getSatisSayisi() * s.getSatisFiyati()) - maliyet;
	}
	void bilgiVer() {
		cout << "-----SATIS BILGILERI-----" << endl;
		cout << "Maliyet:" << maliyet << endl;
		cout << "Kazanc:" << kazanc << endl;
	}
};

#endif // MALIDURUM_H