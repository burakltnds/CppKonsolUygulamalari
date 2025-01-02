#ifndef URUN_H
#define URUN_H


#include <iostream>
#include <string>
using namespace std;

class Urun
{
private:
	int urunSayisi, birimFiyat, urunId;
public:
	Urun(int urunSayisi, int birimFiyat, int urunId) 
	: urunSayisi(urunSayisi), birimFiyat(birimFiyat), urunId(urunId) {}
	virtual void bilgiAl()=0;
	int getUrunSayisi()const;
	void setUrunSayisi(int x);
	int getBirimFiyat()const;
	void setBirimFiyat(int x);
	int getUrunId() const;
	void setUrunId(int x);
	virtual ~Urun() {};
};
int Urun ::getUrunSayisi()const {
	return this->urunSayisi;
}
void Urun::setUrunSayisi(int x) {
	this->urunSayisi = x;
}
int Urun::getBirimFiyat()const {
	return this->birimFiyat;
}
void Urun::setBirimFiyat(int x) {
	this->birimFiyat= x;
}
int Urun::getUrunId() const{
	return this->urunId;
}
void Urun::setUrunId(int x) {
	this->urunId= x;
}

#endif // URUN_H