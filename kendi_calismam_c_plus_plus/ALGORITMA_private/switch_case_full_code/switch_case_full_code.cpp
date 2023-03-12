#include <iostream>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
/*
_AUTHOR_: DOÐUKAN ÖZTÜRK
		  2205314017
		  BÝLÝÞÝM GÜVENLÝÐÝ TEKNOLOJÝSÝ / 1.ÖÐRETÝM / 1.SINIF
*/

using namespace std;

int main()
{
	int snc;

	do
	{

		setlocale(LC_ALL, "Turkish");

		cout << "1)	Kullanýcý tarafýndan girilen sayýnýn tek mi çift mi olduðunu bulup ekrana yazdýran programý tasarlayýnýz." << endl
			<< "2)	Kenar uzunluklarý kullanýcý tarafýndan girilen dik dörtgenin alanýný ve çevresini hesaplayan ve ekrana yazdýran programý tasarlayýn." << endl
			<< "3)	Yarý çap uzunluðu kullanýcý tarafýndan girilen çemberin hacmini hesaplayan programý tasarlayýnýz." << endl
			<< "4)	Kullanýcýya ismini ve cinsiyetini soran ve bu veriler ile merhaba diyen programý tasarlayýnýz." << endl
			<< "5)	Kullanýcýya yaþýný sorup reþit olup olmadýðýný söyleyen programý tasarlayýnýz." << endl
			<< "6)	Klavye yardýmýyla girilen iki sayýnýn büyüklük, küçüklük ve eþitlik durumunu deðerlendiren ve bunu ekrana yazdýran programý tasarlayýnýz." << endl
			<< "7)	Kullanýcý tarafýndan girilen sayýnýn pozitif mi negatif mi olduðunu bulup ekrana yazdýran programý tasarlayýn." << endl
			<< "8)	Klavyeden girilen iki sayýnýn büyük olanýný ekrana yazdýran programý tasarlayýnýz." << endl
			<< "9)	Girilen üç sayýdan en büyük olanýný bulup sonucu ekrana yazdýran programý tasarlayýnýz" << endl
			<< "10)	Bir üçgenin iç açýlarý toplamý 180 derece. Açýlarý kullanýcý tarafýndan girilen üçgenini üçgen olup olmadýðýný bulup ekrana yazdýran programý tasarlayýnýz." << endl
			<< "11)	Bir üçgen çizilebilmesi için 3 kenar uzunluðundan biri diðer iki kenar uzunluðu farkýndan büyük toplamýndan küçük olmalýdýr. Klavyeden girilen üç kenar uzunluðu ile üçgen çizilip çizilemediðini söyleyen programý tasarlayýnýz." << endl
			<< "12)	Klavye yardýmýyla girilen 100 sayýdan en büyük olanýný bulup ekrana yazdýran programý tasarlayýnýz." << endl
			<< "13)	1’ den 100 ‘e kadar 7 þer 7 þer artan sayýlarý ekrana yazdýran programý tasarlayýnýz." << endl
			<< "14)	Baþlangýç, bitiþ, artýþ deðerleri kullanýcý tarafýndan girilen sayýlarý ekrana yazdýran programý tasarlayýnýz." << endl
			<< "15)	Klavye yardýmýyla n tane sayýdan teklerin ve çiftlerin toplamýný bulup sonucu ekrana yazdýran programý tasarlayýnýz" << endl
			<< "16)	Klavye yardýmýyla girilen 10 tane sayýdan kaç tanesi tek kaç tanesi çift olduðunu bulan ve ekrana gösteren programý tasarlayýnýz." << endl
			<< "17)	1 ‘e ve kendisine tam bölünen ve ardaki hiçbir sayýya bölünemeyen sayýlara “asal” denir. Girilen sayýnýn asal olup olmadýðýný gösteren programý tasarla-yýn" << endl
			<< "18)	Girilen sayýnýn faktöriyelini hesaplayan programý tasarlayýnýz." << endl
			<< "19)	Girilen 30 sayýdan kaç tanesinin asal olduðunu ekrana yazdýran programý tasarlayýnýz" << endl
			<< "20)	Birinci elemaný bir ikinci elemaný bir olan ve yeni eleman kendinden önceki iki elemanýn toplamýyla bulunan fibonacci serisinin ilk 50 elemanýný yazdýran programý tasarlayýnýz." << endl
			<< "21)	Girilen sayýyý ekrana tersten yazdýran programý tasarlayýnýz." << endl
			<< "22)	Birinci elemaný 1, ikinci elemaný 2, üçüncü elemaný 2, dördüncü elemaný 1 olan ve yeni eleman bir öncekiyle üç öncekinin toplanýp iki öncekiyle çarpýlýp dört öncekiyle çýkartýlmasýndan elde ediliyor. Ýlk 50 sonucu ekrana yazdýran programý tasarlayýnýz" << endl
			<< "23)	N elemandan oluþan A dizisinin oluþturulmasý saðlayan verileri klavyeden girilen programý tasarlayýn" << endl
			<< "24)	10 elemanlý A ve B dizisini oluþturup iki dizinin toplamýný C dizisine kaydeden ve ekrana gösteren programý tasarlayýnýz" << endl
			<< "25)	Klavyeden girilen N elemanlý A dizisin elemanlarý ters sýrada B dizisine yerleþtiren programý tasarlayýnýz." << endl
			<< "26)	100 elemanlý A dizisinin elemanlarý 0-9 arasý rakamlardan Random olarak oluþmakta. Oluþan diziyi ekrana yazdýran programý tasarlayýn." << endl
			<< "27)	100 elemanlý A dizisinin elemanlarý 0-9 arasý rakamlardan Random olarak oluþmakta. Dizinin elemanlarýnda kullanýcý tarafýndan belirlenen x deðerinin kaç tane olduðunu bulun" << endl
			<< "28)	Birinci elemaný 1, ikinci elemaný 1 olan dizinin her yeni elemaný fibonacci serisinin kuralý ile oluþturulur. 40 elemanlý bir dizinin elemanlarýndan kaç tanesi tek kaç tanesi çift olan ve bunlarý ekrana yazdýran programý yazýn" << endl
			<< "29)	Üniversitede bir dersin baþarý notu bir vize bir final notuyla hesaplanýr. Vize notunun kat sayýsý %30 final notunun kat sayýsý %70‘dir. N kiþilik bir sýnýfýn öðrencilerin sýnavda almýþ olduðu notlarý ve bu notlar neticesinde ders ortalamasýný bulan ve vize, final ve ortalamalarý hafýzada saklayan programý tasar-layýn." << endl
			<< "30)	Arka arkaya girilen rasgele on tam sayýnýn ortalamasý ile bu sayýlardan en büyük ve en küçük olanýn ortalamasýný bularak elde edilen ortalamaný farkýný alan programý tasarlayýn." << endl
			<< "\n\nÝKÝ BOTUTLU DÝZÝLER" << endl
			<< "31)	Deðerleri klavyeden girilen N x N boyutlarýnda A matrisini oluþturan programý tasarlayýn." << endl
			<< "32)	Deðerleri klavyeden girilen A ve B matrisini oluþturup toplamlarýný 3 x 3, C matrisine atayan programý tasarlayýn." << endl
			<< "33)	Deðerleri 0 – 9 arasýnda random olarak atanan N x N boyutlarýndaki A matrisi elemanlarýnýn ana köþegenleri üzerindeki elemanlarýn toplamýný bulan ve sonucu ekrana yazdýran programý tasarlayýn." << endl;



		int s, n, enb, enk;
		int A[100], B[100], C[100], D[100];
		string ad, cinsiyet;
		cout << "\n\nBir deðer giri: ", cin >> s;

		cout << "\n\n\n";
		switch (s)
		{
			setlocale(LC_ALL, "Turkish");
			int a, b, c, d, e;
		case 1:
			cout << "Bir sayý gir:", cin >> a;
			if (a % 2 == 0)
			{
				cout << "Çift" << endl;
			}
			else
			{
				cout << "Tek" << endl;
			}
			break;

		case 2:
			a = 0;
			b = 0;
			cout << "Birinci kenarý gir: ", cin >> a;
			cout << "Ýkinci kenarý gir: ", cin >> b;
			cout << "Alan: " << a * b << " Çevre: " << 2 * (a + b);
			break;
		case 3:
			a = 0;
			cout << "Yari çapý girin: ", cin >> a;
			cout << "Hacim: " << 4 / 3 * 3.14 * a * a * a;
			break;
		case 4:
			cout << "Ýsiminiz: ", cin >> ad;
			cout << "Cinsiyet için: Erkek ise 'Bay',Kadýn ise 'Haným efendi' yazýn: ", cin >> cinsiyet;
			cout << "Merhab " << cinsiyet << ad;
			break;
		case 5:
			a = 0;
			cout << "Yaþýnýz: ", cin >> a;
			if (a < 18)
			{
				cout << "Reþit deðil";
			}
			else
			{
				cout << "Reþit";
			}
			break;
		case 6:
			a = 0, b = 0;
			cout << "Bir ve ikinci sayýyý girin: " << endl, cin >> a >> b;
			if (a > b)
			{
				cout << "Buyuku olan sayý: " << a;
			}
			else if (a < b)
			{
				cout << " Buyuk olan sayý: " << b;
			}
			else
			{
				cout << "Sayýlar eþit";
			}
			break;
		case 7:
			a = 0;
			cout << "Bir sayý gir: ", cin >> a;
			if (a < 0)
			{
				cout << "Negatif";
			}
			else if (a > 0)
			{
				cout << "Pozitif";
			}
			else
			{
				cout << "Nötür yani sayý sýfýr";
			}
			break;
		case 8:
			a = 0, b = 0;
			cout << "Birinci ve ikinci sayýyý gir: " << endl, cin >> a >> b;
			if (a >= b)
			{
				cout << "Buyuku olan sayý: " << a;
			}
			else
			{
				cout << "Büyük olan sayý: " << b;
			}
			break;
		case 9:
			a = 0, b = 0, c = 0;
			cout << "Üç adaet sayý giriniz: " << endl, cin >> a >> b >> c;

			if (a > b && a > c)
			{
				cout << a;
			}
			else if (b > a && b > c)
			{
				cout << b;
			}
			else {
				cout << c;
			}

			break;
		case 10:
			a = 0, b = 0, c = 0;
			cout << "Bir,iki ve üçüncü açýlarý gir: " << endl, cin >> a >> b >> c;
			if (a + b + c == 180)
			{
				cout << "Bu bir üçgen";
			}
			else
			{
				cout << "Üçgen deðil";
			}
			break;
		case 11:
			a = 0, b = 0, c = 0;
			cout << "Üçgen açýlarýý giri: " << endl, cin >> a >> b >> c;
			if (a + b + c == 180)
			{
				if (a + b > c && b + c > a && c + a > b && a - b < c && b - c < a && a - c < b)
				{
					cout << "Bu bir gerçek üçgendir";
				}
				else
				{
					cout << "Bu bir gerçek üçge deðildir";
				}

			}
			else
			{
				cout << "Bu bir gerçek üçge deðildir";
			}

			break;
		case 12:
			int enb, i;
			a = 0;
			cout << "bir sayý gir" << endl, cin >> a;
			enb = a;
			for (i = 1; i <= 3; i++)
			{
				cout << "bir sayý gir" << endl, cin >> a;
				if (a > enb)
				{
					enb = a;
				}
				else
				{
					a = enb;
				}
			}
			cout << enb;

			break;
		case 13:
			for (i = 0; i < 100; i += 7)
			{
				cout << i << endl;
			}
			break;
		case 14:
			int bas, bit, art;
			cout << "For deðerlerini gir: " << endl, cin >> bas >> bit >> art;
			for (i = bas; i < bit; i = i + art)
			{
				cout << i << endl;
			}
			break;
		case 15:
			a = 0, b = 0, c = 0;
			cout << "sayý gir" << endl, cin >> a;
			do
			{
				b = a / 10;
				c = a % 10;
				a = b;
				cout << c;

			} while (a > 0);
			break;
		case 16:
			a = 0, b = 0;
			for (i = 1; i <= 10; i++)
			{
				cout << i << ". sayýyý gir: ", cin >> a;
				if (a % 2 == 0)
				{
					b = b + 1;
				}
			}cout << b << " adet sayý çifitti";
			break;
		case 17:
			a = 0, b = 0;
			cout << "gir", cin >> a;
			for (i = 1; i <= a; i++)
			{
				if (i % a == 0)
				{
					b = b + 1;
				}
			}
			if (b == 2)
			{
				cout << "asal";
			}
			else
			{
				cout << "deðil";
			}

			break;
		case 18:
			a = 0, b = 1;
			cout << "gir:", cin >> a;
			for (i = 1; i <= a; i++)
			{
				b = b * i;
			}
			cout << b;
			break;
		case 19:
			a = 0, b = 0, c = 0;
			int j;
			for (i = 1; i <= 3; i++)
			{
				cout << i << ". sayýyý gir: ", cin >> a;
				for (j = 1; j <= a; j++)
				{
					if (a % j == 0)
					{
						b = b + 1;
					}
				}
				if (b == 2)
				{
					c = c + 1;
				}
				b = 0;
			}
			cout << "Girilen 3 sayýdan " << c << " tanesi asal";
			break;
		case 20:
			a = 1, b = 1, c = 0;
			cout << a << endl << b << endl;
			for (i = 3; i < 40; i++)
			{
				c = a + b;
				a = b;
				b = c;
				cout << c << endl;
			}
			break;
		case 21:
			a = 0, b = 0, c = 0;
			cout << "Bir sayý gir: ", cin >> a;
			do
			{
				b = a / 10;
				c = a % 10;
				a = b;
				cout << c;

			} while (a > 0);

			break;
		case 22:

			a = 1, b = 2, c = 2, d = 1, e = 0;

			for (i = 5; i < 20; i++)
			{
				e = (d + b) * c - a;
				a = b;
				b = c;
				c = d;
				d = e;
				cout << e << endl;
			}
			break;
		case 23:
			a = 0, b = 0;
			cout << "Eleman adedi: ", cin >> a;
			for (i = 0; i < a; i++)
			{
				cout << i << ". sayýyý gir: ", cin >> b;
				A[i] = b;
			}
			break;
		case 24:
			a = 0, b = 0;
			cout << "dizi uzunluðunu gir: ", cin >> a;
			for (i = 0; i < a; i++)
			{
				cout << i << ". A dizisini gir: ", cin >> b; A[i] = b;
				cout << i << ". B dizisini gir: ", cin >> b; B[i] = b;
				C[i] = A[i] + B[i];
			}for (i = 0; i < a; i++)
			{
				cout << i << ". indis deðri: " << C[i] << endl;
			}
			/* // bu kýsým dizi deðerinin yeniden inþa edilebileceðinin kanýtdýr!!
			for ( i = 0; i < a; i++)
			{
				cout << "yeni Gir ", cin >> b;
				C[i] = b;
			}for ( i = 0; i < a; i++)
			{
				cout << C[i];
			}
			*/
			break;
		case 25:
			a = 0, b = 0;
			cout << "Dizi uzunluðunu girin: ", cin >> a;
			for (i = 1; i <= a; i++)
			{
				cout << i << ". A dizisini gir: ", cin >> b; A[i] = b;

			}for (i = 1; i <= a; i++)
			{
				B[i] = A[a - i + 1];
				cout << i << ". indis: " << B[i] << endl;
			}
			break;
		case 26:
			srand(time(0));// her çalýþtýðýnda random sayýlarýn deðiþmesi için kullanýlýr ve çaðrýlmasý gerekli (#include <time.h> ile)
			for (i = 0; i < 100; i++)
			{
				A[i] = rand() % 10; // random sayý atar ama her çalýþtýðýnda sayýla ayný olur eðer srand(time(0)); (#include <time.h> ile)
				cout << i << ". indis deðeri: " << A[i] << endl;
			}
			break;
		case 27:
			a = 0, b = 0;
			srand(time(0));// her çalýþtýðýnda random sayýlarýn deðiþmesi için kullanýlýr ve çaðrýlmasý gerekli (#include <time.h> ile)
			cout << "aranacak deðeri gir: ", cin >> a;
			for (i = 0; i < 100; i++)
			{
				A[i] = rand() % 10; // random sayý atar ama her çalýþtýðýnda sayýla ayný olur eðer srand(time(0)); (#include <time.h> ile)
				if (a == A[i])
				{
					b = b + 1;
				}
			}cout << "Bulunan x deðerleri: " << b << endl;
			break;
		case 28:
			A[0] = { 1 }, A[1] = { 1 };
			for (i = 2; i < 40; i++)
			{
				A[i] = A[i - 1] + A[i - 2];
				cout << i << ". indis: " << A[i] << endl;
			}
			break;
		case 29:
			a = 0, b = 0, c = 0;
			cout << "Öðrenci sayýsýný girin: ", cin >> a;
			for (i = 0; i < a; i++)
			{
				cout << i + 1 << ". Öðrencinin Vize notu: ", cin >> b;
				A[i] = b * 0.3;
				cout << i + 1 << ". Öðrencinin Final notu: ", cin >> c;
				B[i] = c * 0.7;

			}for (i = 0; i < a; i++)
			{
				C[i] = A[i] + B[i];
				cout << i + 1 << ". Öðrenci baþarý notu: " << C[i] << endl;
			}
			break;
		case 30:
			a = 0, b = 0, c = 0, (float(d)), d = 0, (float(e)), e = 0;
			enb = 0, enk = 0;
			cout << 1 << ". Tam sayý deðerini gir: ", cin >> a;
			A[0] = a;
			enb = a; enk = a;
			for (i = 1; i < 10; i++)
			{
				cout << i + 1 << ". Tam sayý deðerini gir: ", cin >> a;
				A[i] = a;

				if (a > enb)
				{
					enb = a;
				}
				else if (a < enk)
				{
					enk = a;
				}

			}for (i = 0; i < 10; i++)
			{
				c = c + A[i];
			}
			d = c / 10;
			e = (enb + enk) / 2;
			cout << "10 tam sayýnýn ortalamasý: " << d << endl;
			cout << "ENB ile ENK ortalamasý: " << e << endl;
			cout << "Ortalamalarýn farký: " << d - e << endl;
			break;
		default:
			break;
		}
		string sonuc;

		cout <<endl<<"DEVAM ETMEK ÝÇÝN 'EVET', BÝTÝRMEK ÝÇÝN 'HAYIR' YAZINIZ: " , cin >> sonuc;

		if (sonuc == "EVET")
		{
			snc = +1;
		}
		else if (sonuc == "HAYIR")
		{
			snc = 0;
		}

	} while (snc > 0);







	return 0;
}
