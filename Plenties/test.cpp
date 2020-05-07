#include "test.h"

#pragma once

#include "Planty.cpp"

#include "stdio.h"
#include <iostream>

int main() {

	Planty<int> mn;
	
	mn.insert(1);
	mn.insert(2);
	mn.insert(3);
	mn.insert(2);

	mn.out();
	

	system("PAUSE");

}
