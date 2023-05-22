#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	fstream datoteka;
	int n;
	cin >> n;
	string* polje = new string[n];
	cin.ignore();
	for (int i = 0; i < n; i++)
		getline(cin, polje[i]);
	sort(polje, polje + n);
	datoteka.open("imenik.txt", ios::out|ios::app);
	for (int i = 0; i < n; i++)
		datoteka << polje[i] << endl;
	datoteka.close();

	datoteka.open("imenik.txt", ios::in|ios::trunc);
	for (int i = 0; i < n; i++)
		datoteka << polje[i] << endl;
	sort(polje, polje + n);
	datoteka.close();
	return 0;
}