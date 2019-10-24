#include <iostream>
#include <string>
#include<vector>
#include<math.h>
#define n 4

using namespace std;

struct uch
{
	char im[15];
	char fa[15];
	char ek[15];
	int  rat[n];
};

int main()
{	
	int p;
	cout << "kol-vo stud";
	cin >> p;
	struct uch Session [n];
	setlocale(LC_ALL, "Russian");
	
	cout << "vvedite im i fa" << endl;
	for (int i = 0; i < p; i++)
	{
		cout << endl;

		cout << "im" << endl;
		cin >> Session[i].im;

		cout << "fa";
		cin >> Session[i].fa;

		cout << endl;
	}
	
	cout << "proveli" << n << "ekz" << endl << "vvedite predm" << endl;
	cout << endl;
	for ( int i = 0; i < n; i++)
	{
		cout << "predm" << i + 1 << "nazv predm";
		cin >> Session[i].ek;
		cout << endl;
	}

	cout << "vvedite ocenki dlya stud" << endl;
	for (int i = 0; i < p; i++)
	{
		cout << "Фами" << Session[i].fa << "predm" << endl;
		for (int j = 0; j < n; j++)
		{
			cout << Session[j].ek << endl << "vvedite oc";
			cin >> Session[i].rat[j];
			cout << endl;
		}
	}
	
	double* MA;
	MA = (double*)malloc(p * sizeof(double));
	for (int i = 0; i < n; i++)
		MA[i]=0;

	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < n; j++)
		{
			 MA[i]+= Session[i].rat[j];
		}

	}
	
	for (int i = 0; i < 10; i++)
	{
		MA[i] = MA[i]/n;
	}

	for (int i = 0; i < p; i++)
	{
		cout<<Session[i].fa<<"  "<< MA[i]<<endl;
	}
}