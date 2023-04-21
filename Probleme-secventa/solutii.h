#pragma once
#include <iostream>
#include <fstream>
using namespace std;
#include "functii.h"

//Să se determine cea mai lungă secvență de elemente pare dintr-un vector.
void pb1() {
	
	int v[1000], n;
	citire(v, n);
	secventaPar(v, n);
}
