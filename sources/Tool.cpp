#include "Tool.h"
#include <iostream>

using namespace std;

Tool::Tool(string n, float w) : name (n), weight (w) {}

Tool::print(){
	cout << name << endl;
	}

