#include <iostream>
#include <stdio.h>
#include <time.h>
#include <cstdlib>
/*
_AUTHOR_: DO�UKAN �ZT�RK
		  2205314017
		  B�L���M G�VENL��� TEKNOLOJ�S� / 1.��RET�M / 1.SINIF
*/

using namespace std;

int main()
{
	int snc;

	do
	{

		setlocale(LC_ALL, "Turkish");

		cout << "1)	Kullan�c� taraf�ndan girilen say�n�n tek mi �ift mi oldu�unu bulup ekrana yazd�ran program� tasarlay�n�z." << endl
			<< "2)	Kenar uzunluklar� kullan�c� taraf�ndan girilen dik d�rtgenin alan�n� ve �evresini hesaplayan ve ekrana yazd�ran program� tasarlay�n." << endl
			<< "3)	Yar� �ap uzunlu�u kullan�c� taraf�ndan girilen �emberin hacmini hesaplayan program� tasarlay�n�z." << endl
			<< "4)	Kullan�c�ya ismini ve cinsiyetini soran ve bu veriler ile merhaba diyen program� tasarlay�n�z." << endl
			<< "5)	Kullan�c�ya ya��n� sorup re�it olup olmad���n� s�yleyen program� tasarlay�n�z." << endl
			<< "6)	Klavye yard�m�yla girilen iki say�n�n b�y�kl�k, k���kl�k ve e�itlik durumunu de�erlendiren ve bunu ekrana yazd�ran program� tasarlay�n�z." << endl
			<< "7)	Kullan�c� taraf�ndan girilen say�n�n pozitif mi negatif mi oldu�unu bulup ekrana yazd�ran program� tasarlay�n." << endl
			<< "8)	Klavyeden girilen iki say�n�n b�y�k olan�n� ekrana yazd�ran program� tasarlay�n�z." << endl
			<< "9)	Girilen �� say�dan en b�y�k olan�n� bulup sonucu ekrana yazd�ran program� tasarlay�n�z" << endl
			<< "10)	Bir ��genin i� a��lar� toplam� 180 derece. A��lar� kullan�c� taraf�ndan girilen ��genini ��gen olup olmad���n� bulup ekrana yazd�ran program� tasarlay�n�z." << endl
			<< "11)	Bir ��gen �izilebilmesi i�in 3 kenar uzunlu�undan biri di�er iki kenar uzunlu�u fark�ndan b�y�k toplam�ndan k���k olmal�d�r. Klavyeden girilen �� kenar uzunlu�u ile ��gen �izilip �izilemedi�ini s�yleyen program� tasarlay�n�z." << endl
			<< "12)	Klavye yard�m�yla girilen 100 say�dan en b�y�k olan�n� bulup ekrana yazd�ran program� tasarlay�n�z." << endl
			<< "13)	1� den 100 �e kadar 7 �er 7 �er artan say�lar� ekrana yazd�ran program� tasarlay�n�z." << endl
			<< "14)	Ba�lang��, biti�, art�� de�erleri kullan�c� taraf�ndan girilen say�lar� ekrana yazd�ran program� tasarlay�n�z." << endl
			<< "15)	Klavye yard�m�yla n tane say�dan teklerin ve �iftlerin toplam�n� bulup sonucu ekrana yazd�ran program� tasarlay�n�z" << endl
			<< "16)	Klavye yard�m�yla girilen 10 tane say�dan ka� tanesi tek ka� tanesi �ift oldu�unu bulan ve ekrana g�steren program� tasarlay�n�z." << endl
			<< "17)	1 �e ve kendisine tam b�l�nen ve ardaki hi�bir say�ya b�l�nemeyen say�lara �asal� denir. Girilen say�n�n asal olup olmad���n� g�steren program� tasarla-y�n" << endl
			<< "18)	Girilen say�n�n fakt�riyelini hesaplayan program� tasarlay�n�z." << endl
			<< "19)	Girilen 30 say�dan ka� tanesinin asal oldu�unu ekrana yazd�ran program� tasarlay�n�z" << endl
			<< "20)	Birinci eleman� bir ikinci eleman� bir olan ve yeni eleman kendinden �nceki iki eleman�n toplam�yla bulunan fibonacci serisinin ilk 50 eleman�n� yazd�ran program� tasarlay�n�z." << endl
			<< "21)	Girilen say�y� ekrana tersten yazd�ran program� tasarlay�n�z." << endl
			<< "22)	Birinci eleman� 1, ikinci eleman� 2, ���nc� eleman� 2, d�rd�nc� eleman� 1 olan ve yeni eleman bir �ncekiyle �� �ncekinin toplan�p iki �ncekiyle �arp�l�p d�rt �ncekiyle ��kart�lmas�ndan elde ediliyor. �lk 50 sonucu ekrana yazd�ran program� tasarlay�n�z" << endl
			<< "23)	N elemandan olu�an A dizisinin olu�turulmas� sa�layan verileri klavyeden girilen program� tasarlay�n" << endl
			<< "24)	10 elemanl� A ve B dizisini olu�turup iki dizinin toplam�n� C dizisine kaydeden ve ekrana g�steren program� tasarlay�n�z" << endl
			<< "25)	Klavyeden girilen N elemanl� A dizisin elemanlar� ters s�rada B dizisine yerle�tiren program� tasarlay�n�z." << endl
			<< "26)	100 elemanl� A dizisinin elemanlar� 0-9 aras� rakamlardan Random olarak olu�makta. Olu�an diziyi ekrana yazd�ran program� tasarlay�n." << endl
			<< "27)	100 elemanl� A dizisinin elemanlar� 0-9 aras� rakamlardan Random olarak olu�makta. Dizinin elemanlar�nda kullan�c� taraf�ndan belirlenen x de�erinin ka� tane oldu�unu bulun" << endl
			<< "28)	Birinci eleman� 1, ikinci eleman� 1 olan dizinin her yeni eleman� fibonacci serisinin kural� ile olu�turulur. 40 elemanl� bir dizinin elemanlar�ndan ka� tanesi tek ka� tanesi �ift olan ve bunlar� ekrana yazd�ran program� yaz�n" << endl
			<< "29)	�niversitede bir dersin ba�ar� notu bir vize bir final notuyla hesaplan�r. Vize notunun kat say�s� %30 final notunun kat say�s� %70�dir. N ki�ilik bir s�n�f�n ��rencilerin s�navda alm�� oldu�u notlar� ve bu notlar neticesinde ders ortalamas�n� bulan ve vize, final ve ortalamalar� haf�zada saklayan program� tasar-lay�n." << endl
			<< "30)	Arka arkaya girilen rasgele on tam say�n�n ortalamas� ile bu say�lardan en b�y�k ve en k���k olan�n ortalamas�n� bularak elde edilen ortalaman� fark�n� alan program� tasarlay�n." << endl
			<< "\n\n�K� BOTUTLU D�Z�LER" << endl
			<< "31)	De�erleri klavyeden girilen N x N boyutlar�nda A matrisini olu�turan program� tasarlay�n." << endl
			<< "32)	De�erleri klavyeden girilen A ve B matrisini olu�turup toplamlar�n� 3 x 3, C matrisine atayan program� tasarlay�n." << endl
			<< "33)	De�erleri 0 � 9 aras�nda random olarak atanan N x N boyutlar�ndaki A matrisi elemanlar�n�n ana k��egenleri �zerindeki elemanlar�n toplam�n� bulan ve sonucu ekrana yazd�ran program� tasarlay�n." << endl;



		int s, n, enb, enk;
		int A[100], B[100], C[100], D[100];
		string ad, cinsiyet;
		cout << "\n\nBir de�er giri: ", cin >> s;

		cout << "\n\n\n";
		switch (s)
		{
			setlocale(LC_ALL, "Turkish");
			int a, b, c, d, e;
		case 1:
			cout << "Bir say� gir:", cin >> a;
			if (a % 2 == 0)
			{
				cout << "�ift" << endl;
			}
			else
			{
				cout << "Tek" << endl;
			}
			break;

		case 2:
			a = 0;
			b = 0;
			cout << "Birinci kenar� gir: ", cin >> a;
			cout << "�kinci kenar� gir: ", cin >> b;
			cout << "Alan: " << a * b << " �evre: " << 2 * (a + b);
			break;
		case 3:
			a = 0;
			cout << "Yari �ap� girin: ", cin >> a;
			cout << "Hacim: " << 4 / 3 * 3.14 * a * a * a;
			break;
		case 4:
			cout << "�siminiz: ", cin >> ad;
			cout << "Cinsiyet i�in: Erkek ise 'Bay',Kad�n ise 'Han�m efendi' yaz�n: ", cin >> cinsiyet;
			cout << "Merhab " << cinsiyet << ad;
			break;
		case 5:
			a = 0;
			cout << "Ya��n�z: ", cin >> a;
			if (a < 18)
			{
				cout << "Re�it de�il";
			}
			else
			{
				cout << "Re�it";
			}
			break;
		case 6:
			a = 0, b = 0;
			cout << "Bir ve ikinci say�y� girin: " << endl, cin >> a >> b;
			if (a > b)
			{
				cout << "Buyuku olan say�: " << a;
			}
			else if (a < b)
			{
				cout << " Buyuk olan say�: " << b;
			}
			else
			{
				cout << "Say�lar e�it";
			}
			break;
		case 7:
			a = 0;
			cout << "Bir say� gir: ", cin >> a;
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
				cout << "N�t�r yani say� s�f�r";
			}
			break;
		case 8:
			a = 0, b = 0;
			cout << "Birinci ve ikinci say�y� gir: " << endl, cin >> a >> b;
			if (a >= b)
			{
				cout << "Buyuku olan say�: " << a;
			}
			else
			{
				cout << "B�y�k olan say�: " << b;
			}
			break;
		case 9:
			a = 0, b = 0, c = 0;
			cout << "�� adaet say� giriniz: " << endl, cin >> a >> b >> c;

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
			cout << "Bir,iki ve ���nc� a��lar� gir: " << endl, cin >> a >> b >> c;
			if (a + b + c == 180)
			{
				cout << "Bu bir ��gen";
			}
			else
			{
				cout << "��gen de�il";
			}
			break;
		case 11:
			a = 0, b = 0, c = 0;
			cout << "��gen a��lar�� giri: " << endl, cin >> a >> b >> c;
			if (a + b + c == 180)
			{
				if (a + b > c && b + c > a && c + a > b && a - b < c && b - c < a && a - c < b)
				{
					cout << "Bu bir ger�ek ��gendir";
				}
				else
				{
					cout << "Bu bir ger�ek ��ge de�ildir";
				}

			}
			else
			{
				cout << "Bu bir ger�ek ��ge de�ildir";
			}

			break;
		case 12:
			int enb, i;
			a = 0;
			cout << "bir say� gir" << endl, cin >> a;
			enb = a;
			for (i = 1; i <= 3; i++)
			{
				cout << "bir say� gir" << endl, cin >> a;
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
			cout << "For de�erlerini gir: " << endl, cin >> bas >> bit >> art;
			for (i = bas; i < bit; i = i + art)
			{
				cout << i << endl;
			}
			break;
		case 15:
			a = 0, b = 0, c = 0;
			cout << "say� gir" << endl, cin >> a;
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
				cout << i << ". say�y� gir: ", cin >> a;
				if (a % 2 == 0)
				{
					b = b + 1;
				}
			}cout << b << " adet say� �ifitti";
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
				cout << "de�il";
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
				cout << i << ". say�y� gir: ", cin >> a;
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
			cout << "Girilen 3 say�dan " << c << " tanesi asal";
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
			cout << "Bir say� gir: ", cin >> a;
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
				cout << i << ". say�y� gir: ", cin >> b;
				A[i] = b;
			}
			break;
		case 24:
			a = 0, b = 0;
			cout << "dizi uzunlu�unu gir: ", cin >> a;
			for (i = 0; i < a; i++)
			{
				cout << i << ". A dizisini gir: ", cin >> b; A[i] = b;
				cout << i << ". B dizisini gir: ", cin >> b; B[i] = b;
				C[i] = A[i] + B[i];
			}for (i = 0; i < a; i++)
			{
				cout << i << ". indis de�ri: " << C[i] << endl;
			}
			/* // bu k�s�m dizi de�erinin yeniden in�a edilebilece�inin kan�td�r!!
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
			cout << "Dizi uzunlu�unu girin: ", cin >> a;
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
			srand(time(0));// her �al��t���nda random say�lar�n de�i�mesi i�in kullan�l�r ve �a�r�lmas� gerekli (#include <time.h> ile)
			for (i = 0; i < 100; i++)
			{
				A[i] = rand() % 10; // random say� atar ama her �al��t���nda say�la ayn� olur e�er srand(time(0)); (#include <time.h> ile)
				cout << i << ". indis de�eri: " << A[i] << endl;
			}
			break;
		case 27:
			a = 0, b = 0;
			srand(time(0));// her �al��t���nda random say�lar�n de�i�mesi i�in kullan�l�r ve �a�r�lmas� gerekli (#include <time.h> ile)
			cout << "aranacak de�eri gir: ", cin >> a;
			for (i = 0; i < 100; i++)
			{
				A[i] = rand() % 10; // random say� atar ama her �al��t���nda say�la ayn� olur e�er srand(time(0)); (#include <time.h> ile)
				if (a == A[i])
				{
					b = b + 1;
				}
			}cout << "Bulunan x de�erleri: " << b << endl;
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
			cout << "��renci say�s�n� girin: ", cin >> a;
			for (i = 0; i < a; i++)
			{
				cout << i + 1 << ". ��rencinin Vize notu: ", cin >> b;
				A[i] = b * 0.3;
				cout << i + 1 << ". ��rencinin Final notu: ", cin >> c;
				B[i] = c * 0.7;

			}for (i = 0; i < a; i++)
			{
				C[i] = A[i] + B[i];
				cout << i + 1 << ". ��renci ba�ar� notu: " << C[i] << endl;
			}
			break;
		case 30:
			a = 0, b = 0, c = 0, (float(d)), d = 0, (float(e)), e = 0;
			enb = 0, enk = 0;
			cout << 1 << ". Tam say� de�erini gir: ", cin >> a;
			A[0] = a;
			enb = a; enk = a;
			for (i = 1; i < 10; i++)
			{
				cout << i + 1 << ". Tam say� de�erini gir: ", cin >> a;
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
			cout << "10 tam say�n�n ortalamas�: " << d << endl;
			cout << "ENB ile ENK ortalamas�: " << e << endl;
			cout << "Ortalamalar�n fark�: " << d - e << endl;
			break;
		default:
			break;
		}
		string sonuc;

		cout <<endl<<"DEVAM ETMEK ���N 'EVET', B�T�RMEK ���N 'HAYIR' YAZINIZ: " , cin >> sonuc;

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
