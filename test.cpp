#include <iostream>
#include <stdlib.h>

using namespace std;
struct student {
	char name[20];
	char fam[20];
	char otch[20];
}mass1[5];
struct subject {
	int math, fiz, cherch, chim, sopr;
}mass2[5];
int main()
{
	setlocale(0, "");
	int n;
	int k = 0;
	int min = 3;
	cout << "Кол-во студентов > ";
	cin >> n;
	cout << "\tОценки за сессию\t" << endl;
	for (int i = 0; i < n; i++)
	{

		cout << "ФИО студента\t" << endl;
		cin >> mass1[i].name >> mass1[i].fam >> mass1[i].otch;

		cout << "Оценка по математике > " << endl;
		cin >> mass2[i].math;
		cout << "Оценка по физике > " << endl;
		cin >> mass2[i].fiz;
		cout << "Оценка по черчению > " << endl;
		cin >> mass2[i].cherch;
		cout << "Оценка по химии > " << endl;
		cin >> mass2[i].chim;
		cout << "Оценка по сопр. > " << endl;
		cin >> mass2[i].sopr;
	}

	cout << endl;
	
	
	for (int i = 0; i < n; i++)
	{
		if (( mass2[i].cherch > min) && (mass2[i].chim > min) && (mass2[i].fiz > min) && (mass2[i].math > min) && (mass2[i].sopr > min)) 
		{
			k++;
		}
	}
	cout << "Кол-во студентов без задолжностей: " << k << endl;
	return 0;
}


