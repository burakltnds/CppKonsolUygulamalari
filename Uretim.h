#ifndef URETIM_H
#define URETIM_H


#include <iostream>
#include <string>
#include "Urun.h"
using namespace std;

class Uretim:public Urun
{
private:
	int uretimPartiSayisi, uretimId;
	string uretimTarihi;
public:
	Uretim(int urunSayisi ,int birimFiyat,int urunId,string uretimTarihi, int uretimPartiSayisi,int uretimId)
		:Urun(urunSayisi, birimFiyat, urunId),uretimTarihi(uretimTarihi),uretimPartiSayisi(uretimPartiSayisi), uretimId(uretimId){}
	void bilgiAl()override;
};
void Uretim::bilgiAl() {
	cout<<  "Urun Sayisi:" << getUrunSayisi() << endl;
	cout << "Birim Fiyat:" << getBirimFiyat() << endl;
	cout << "Urun ID:" << getUrunId() << endl;
	cout << "Uretim Tarihi:" << uretimTarihi << endl;
	cout << "Uretim Parti Sayisi:" << uretimPartiSayisi << endl;
	cout << "Uretim ID:" <<uretimId <<  endl;
}

#endif // URETIM_H

