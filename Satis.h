#ifndef SATIS_H
#define SATIS_H


#include <iostream>
#include <string>
#include "Urun.h"
using namespace std;

class Satis:public Urun
{
private:
	int satisFiyati, satisSayisi,satisID;
	
public:
	Satis(int urunSayisi, int birimFiyat, int urunId, int satisFiyati, int satisSayisi, int satisID)
		:Urun(urunSayisi, birimFiyat, urunId), satisFiyati(satisFiyati), satisSayisi(satisSayisi) ,satisID(satisID) {}
	void bilgiAl()override;
	int getSatisSayisi() const;
	int getSatisFiyati() const;
};
void Satis::bilgiAl() {
	cout << "Urun Sayisi:" << getUrunSayisi() << endl;
	cout << "Birim Fiyat:" << getBirimFiyat() << endl;
	cout << "Urun ID:" << getUrunId() << endl;
	cout << "Satis Fiyati:" << satisFiyati << endl;
	cout << "Satis Sayisi:" << satisSayisi <<  endl;
	cout << "Satis ID:" << satisID << endl;
}
int Satis::getSatisSayisi() const{
	return this->satisSayisi;
}
int Satis::getSatisFiyati() const {
	return this->satisFiyati;
}



#endif // SATIS_H