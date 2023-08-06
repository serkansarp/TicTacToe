// TicTacToe.cpp : Defines the entry point for the application.
//

/*
TIC TAC TOE / X 0 X
- Her yerde kolaylıkla bulunabilecek bir oyun, evet ascii çok gerekli değildi ancak
  satır, sütun ve çapraz kontrollerle algoritma geliştirme amacıyla üretildi.
- .h dosyasında yaratılan 2 boyutlu 3x3 char matrisinde in'ler tutuluyor.
*/

#include "TicTacToe.h"

int main()
{
	setlocale(LC_ALL, "Turkish");
	int kare = 0;
	char harf = '0';
	T i;

	cout << "    TIC TAC TOE" << endl << endl;	// Ascii Logo düşünüyorum


	for (int j=0;j<99;j++) {	// Yanlış input ve dolu kareye yazılmalarda sonraki karaktere geçiyor. Ancak boş kare sayısı aynı kalıyor, o yüzden for 9 loop değil
		

		// Çizgilerle ayrılmış oyun düzeni
		cout << "     " << i.getT(1) << " | " << i.getT(2) << " | " << i.getT(3) << endl;
		cout << "    -----------" << endl;
		cout << "     " << i.getT(4) << " | " << i.getT(5) << " | " << i.getT(6) << endl;
		cout << "    -----------" << endl;
		cout << "     " << i.getT(7) << " | " << i.getT(8) << " | " << i.getT(9) << endl << endl;

		// Satır, sütun ve çapraz kontroller
		if (i.getT(1) == i.getT(2) && i.getT(2) == i.getT(3) && i.getT(3) != ' ') {
			cout << "       - " << i.getT(1) << " -" << endl << " ÜST SIRAYI KAZANDI! " << endl;
			break;
		}
		else if (i.getT(4) == i.getT(5) && i.getT(5) == i.getT(6) && i.getT(6) != ' ') {
			cout << "       - " << i.getT(4) << " -" << endl << " ORTA SIRAYI KAZANDI! " << endl;
			break;
		}
		else if (i.getT(7) == i.getT(8) && i.getT(8) == i.getT(9) && i.getT(9) != ' ') {
			cout << "       - " << i.getT(7) << " -" << endl << " ALT SIRAYI KAZANDI! " << endl;
			break;
		}
		else if (i.getT(1) == i.getT(4) && i.getT(4) == i.getT(7) && i.getT(7) != ' ') {
			cout << "       - " << i.getT(1) << " -" << endl << " SOL SÜTUNU KAZANDI! " << endl;
			break;
		}
		else if (i.getT(2) == i.getT(5) && i.getT(5) == i.getT(8) && i.getT(8) != ' ') {
			cout << "       - " << i.getT(2) << " -" << endl << " ORTA SÜTUNU KAZANDI! " << endl;
			break;
		}
		else if (i.getT(3) == i.getT(6) && i.getT(6) == i.getT(9) && i.getT(9) != ' ') {
			cout << "       - " << i.getT(3) << " -" << endl << " SAĞ SÜTUNU KAZANDI! " << endl;
			break;
		}
		else if (i.getT(1) == i.getT(5) && i.getT(5) == i.getT(9) && i.getT(9) != ' ') {
			cout << "       - " << i.getT(1) << " -" << endl << " ÇAPRAZ \\ KAZANDI! " << endl;
			break;
		}
		else if (i.getT(3) == i.getT(5) && i.getT(5) == i.getT(7) && i.getT(7) != ' ') {
			cout << "       - " << i.getT(3) << " -" << endl << " ÇAPRAZ / KAZANDI! " << endl;
			break;
		}

		// Sırasıyla X-O
		if (j % 2 == 0)
			harf = 'X';
		else
			harf = 'O';

		cout << "     " << harf << " kaçıncı" << endl << "  kareye yazılsın : ";
		cin >> kare;
		
		
		if (isdigit(kare) == 0 && kare > 0 && i.getT(kare)==' ') {		// inputun 1-9 arasında bir rakam olup, yazdırılmak istenen karenin boş olması koşulu
			i.setT(kare, harf);
		}
		else {
			cout << "Rakam girmediniz ya da o kare dolu! Sıra ";		// Sıra geçtiğini belirten else (sıra X'teyse O'ya geçtiğini ve tersini yazıyor)
			if (harf == 'X')
				cout << "- O -'ya";
			else
				cout << "- X -'e";
			
			cout<< " geçti." << endl;
			
			cin.clear();	// cin clear
			cin.ignore();	// cin ignore
		}
			
		cout << "\x1B[3;0H\x1B[J";
	}
	cout << endl << endl << "    Serkan SARP" << endl << "   Ankara - 2023" << endl;

	return 0;
}
