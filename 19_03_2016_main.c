#include <stdio.h>


typedef unsigned char uchar;
typedef unsigned short ushort;

int main()
{
	uchar gun, ay;		// %d
	ushort yil;			// %d	

	uchar bGun = 18;
	uchar bAy = 03;
	ushort bYil = 2016;

	ushort kYil;
	ushort kAy;
	ushort kGun;
	int kSaat;
	int kDakika;
	
	//  1 - kullanıcıdan d.tarihini al
	printf("D.tarihinizin gun kismi: ");
	scanf_s("%d", &gun);
	printf("D.tarihinizin ay kismi: ");
	scanf_s("%d", &ay);
	printf("D.tarihinizin yil kismi: ");
	scanf_s("%d", &yil);

	int yas = bYil - yil;
	if (yas > 40)
	{
		printf("Saygilar amca\n");
	}
	else if (yas > 20)
	{
		printf("del\n");
	}


	// 2 - d.tarihinin toplam kac yil, ay, gun, saat, dk, sn oldugunu bul
	kYil = bYil - yil;
	kAy = bAy - ay;
	kAy += kYil * 12;
	kGun = bGun - gun;
	kGun += kAy * 30;

	kSaat = kGun * 24;
	kDakika = kSaat * 60;

	// 3 - yukarda bulduklarını ekrana yaz
	printf("Toplam, \n");
	printf("\t %d yil\n",kYil);
	printf("\t %d ay\n", kAy);
	printf("\t %d gun\n", kGun);
	printf("\t %d saat\n", kSaat);
	printf("\t %d dakika\n", kDakika);
	printf("yasamissiniz\n");
	return 0;
}
