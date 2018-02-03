#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int Number;
Start:
	cout << "Urok 4. Ââåäèòå íîìåð çàäàíèÿ îò 1 äî 15" << endl;
	cin >> Number;

	if ((Number < 1) || (Number > 15)) {
		cout << "ââåäåííîå ÷èñëî íå âõîäèò â äèàïàçîí 1 - 15" << endl;
		goto Start;
	}
	if (Number == 1) {
		cout << "Task1. Ïðåðûâàíèå áåñêîíå÷íîãî öèêëà" << endl;
		int N, i, flag;
		N = 0;
		flag = 0;
		for (i = 1;; i++)
		{
			cout << "Ââåäèòå ÷èñëî" << endl;
			cin >> N;
			cout << "êâàäðàò ÷èñëà ðàâåí " << pow(N, 2) << endl;
			cout << "Åùå ââîä? Äà - 1, Íåò - 0" << endl;
			cin >> flag;
			if (flag == 0) break;
		}
		goto Start;
	}
	if ((Number == 2) || (Number == 3)) {
		cout << "Task2 è 3. Âûâîä ïðîñòî ÷èñëà â öèêëå" << endl;
		int N, i, k;
		N = 0;
		k = 0;
		for (i = 1; i <= 20; i++)
			cout << "20" << " ";
		cout << endl;
		cout << "Ââåäèòå ÷èñëî N è k -êîëè÷åñòâî ïîâòîðîâ " << endl;
		cin >> N >> k;
		for (i = 1; i <= k; i++)
			cout << N << " ";
		cout << endl;
		goto Start;
	}
	if (Number == 4) {
		cout << "Task4. Íàïå÷àòàòü ñòîëáèêîì" << endl;
		int a, b, i;
		for (i = 20; i <= 35; i++)
			cout << i << endl;
		cout << "ââåäèòå ÷èñëî b, b>10:  ";
		cin >> b;
		for (i = 10; i <= b; i++)
			cout << pow(i, 2) << endl;
		cout << "ââåäèòå ÷èñëî a, a<50:  ";
		cin >> a;
		for (i = a; i <= 50; i++)
			cout << pow(i, 3) << endl;
		cout << "ââåäèòå 2 ÷èñëa:  ";
		cin >> a >> b;
		for (i = a; i <= b; i++)
			cout << i << endl;
		goto Start;
	}
	if (Number == 5) {
		cout << "Task5. Òàáëèöà ñòîèìîñòè òîâàðà" << endl;
		float pr_t = 20.4;
		int i = 0;
		for (i = 2; i <= 20; i++)
			cout << "Öåíà " << i*pr_t << " òã çà " << i << " øòóê òîâàðà " << endl;
		goto Start;
	}
	if (Number == 6) {
		cout << "Task6. Òàáëèöà ôóíòû - êã(Lbs - kg)" << endl;
		int i = 0;
		float Lb = 0.453;
		for (i = 1; i <= 10; i++)
			cout << i << " ôóíòîâ ðàâíî " << i*Lb << " êã" << endl;
		goto Start;
	}
	if (Number == 7) {
		cout << "Task7. Òàáëèöà äþéìû - ñì(inches - sm)" << endl;
		int i = 0;
		float inch = 2.54;
		for (i = 10; i <= 22; i++)
			cout << i << " äþéìîâ ðàâíî " << i*inch << " ñì" << endl;
		goto Start;
	}
	if (Number == 8) {
		cout << "Task8. Òàáëèöà  USD - KZT" << endl;
		int i = 0;
		float kurs = 0;
		cout << " Êóðñ USD/KZT ïî äàííûì Íàöáàíêà ÐÊ íà òåêóùóþ äàòó:" << endl;
		cin >> kurs;
		for (i = 1; i <= 20; i++)
			cout << i << " USD = " << i*kurs << " KZT" << endl;
		goto Start;
	}
	if (Number == 9) {
		cout << "Task9. Òàáëèöà óìíîæåíèÿ íà 9" << endl;
		int i = 0;
		for (i = 1; i <= 10; i++)
			cout << "9* " << i << " = " << i * 9 << endl;
		goto Start;
	}
	if (Number == 10) {
		cout << "Task10. Òàáëèöà óìíîæåíèÿ íà N" << endl;
		int i = 0;
		int N = 0;
		cout << "ââåäèòå ÷èñëî N, 1<N<9:  ";
		cin >> N;
		for (i = 1; i <= 10; i++)
			cout << N << " * " << i << " = " << i*N << endl;
		goto Start;
	}
	if (Number == 11) {
		cout << "Task11. CÛÐ !!!!! " << endl;
		int i = 0;
		float Cheese_kg = 0;
		float Cheese_gr = 0;
		cout << "ââåäèòå ñòîèìîñòü ñûðà â êã  ";
		cin >> Cheese_kg;
		Cheese_gr = Cheese_kg / 1000;
		for (i = 50; i <= 1000; i = i + 50)
			cout << "Öåíà " << i << " ãð ñûðà = " << i*Cheese_gr << " òåíãå " << endl;
		goto Start;
	}
	if (Number == 12) {
		cout << "Task12. Multiplying" << "\n";
		int i, A, B;
		long int Pr;
		i = 0;
		A = 0;
		B = 0;
		Pr = 1;
		for (i = 8; i <= 15; i++) Pr *= i;
		cout << "a. Multiply from 8 to 15 = " << Pr << "\n";
		cout << "b. Multiply from a to 20:  1 <= a <= 20" << "\n";
		cin >> A;
		Pr = 1;
		for (i = A; i <= 20; i++) Pr = Pr * i;
		cout << "b. Multiply from a to 20 = " << Pr << "\n";
		cout << "c. Multiply from 1 to b:  1 <= b <= 20" << "\n";
		cin >> B;
		Pr = 1;
		for (i = 1; i <= B; i++) Pr *= i;
		cout << "c. Multiply from 1 to b =  " << Pr << "\n";
		cout << "Multiply from a to b, b>=a" << "\n";
		cin >> A >> B;
		Pr = 1;
		for (i = A; i <= B; i++) Pr *= i;
		cout << "Multiply from a to b: " << Pr << "\n";
		goto Start;
	}
	if (Number == 13) {
		cout << "Task13. Unlimited entering while user enters 0" << "\n";
		int i, schet, N, S, S_sredn;
		S = 0;
		S_sredn = 0;
		schet = 0;
		for (i = 0;; i++)
		{
			cout << "Enter number N:" << "\n";
			cin >> N;
			if (N == 0) break;
			S += N;
			schet++;
			S_sredn = S / schet;
		}
		cout << "Summa = " << S << endl;
		cout << "S_srednee = " << S_sredn << endl;
		cout << "Counter = " << schet << endl;
		goto Start;
	}
	if (Number == 14) {
		cout << "Task14. Ñóììà íå÷åòíûõ èç äèàïàçîíà" << endl;
		int i, ost, N, M, S;
		S = 0;
		ost = 0;
		i = 0;
		cout << "Ââåäèòå ãðàíèöû äèàïàçîíà N è M, M>N" << endl;
		cin >> N >> M;
		for (i = N; i <= M; i++)
		{
			ost = i % 2;
			if (ost)  S += i;
			cout << i << " " << ost << " " << S << endl;
		}
		cout << "Ñóììà íå÷åòíûõ ÷èñåë îò N äî M, M>N = " << S << endl;
		goto Start;
	}
	if (Number == 15) {
		cout << "Task15. Triangle painting v1 " << endl;
		int i, j;
		int N = 0;
		int vblsota = 0;
		int osn = 0;
		int sdvig = 0;
		cout << "Enter number:  " << endl;
		cin >> N;
		osn = 2 * (N + 1);
		vblsota = N - 1;
		for (i = 1; i <= N; i++)
			cout << " ";
		cout << "/\\";
		cout << endl;
		while (vblsota>0)
		{
			for (j = 1; j <= vblsota; j++)
				cout << " ";
			cout << "/";
			for (i = j; i <= (j + 1 + sdvig); i++)
				cout << " ";
			cout << "\\";
			cout << endl;
			sdvig = sdvig + 2;
			vblsota = vblsota - 1;
		}
		for (i = 1; i <= osn; i++)
			cout << "-";
		cout << endl;
		cout << endl;
		cout << "Task15. Triangle painting v2" << endl;
		vblsota = N - 1;
		sdvig = 0;
		osn = 2 * N + 1;
		for (i = 1; i <= N; i++)
			cout << " ";
		cout << "^";
		cout << endl;

		while (vblsota>0)
		{
			for (j = 1; j <= vblsota; j++)
				cout << " ";
			cout << "^";
			for (i = j; i <= (j + sdvig); i++)
				cout << " ";
			cout << "^";
			cout << endl;
			sdvig = sdvig + 2;
			vblsota = vblsota - 1;
		}
		for (i = 1; i <= osn; i++)
			cout << "^";
		cout << endl;
	}
	cout << "Çàäàíèÿ çàâåðøåíû" << endl;
	system("pause");
	return(0);
}




