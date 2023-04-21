#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire2(int v[], int& n) {

	ifstream f("numere.h");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}
}

void citire(int v[], int& n) {

	cout << "n=";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
}

int sumaSecv(int v[], int n, int i, int j) {
	int suma = 0;
	for (i; i <= j; i++) {
		suma = suma + v[i];
	}
	return suma;
}

void secventaPar(int v[], int n) {

	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0) {
			int j = i;
			while (j + 1 < n && v[j + 1] % 2 == 0) {
				j++;
			}
			if (j - i + 1 > dmax - smax + 1) {
				int suma1 = sumaSecv(v, n, smax, dmax);
				int suma2 = sumaSecv(v, n, i, j);
				if (suma2 > suma1) {
					smax = i;
					dmax = j;
				}
				
			}
			i = j;
		}
	}
	
	cout << smax << " " << dmax;
}


