#pragma once
#include <memory.h> // NULL
#include <iostream>

using namespace std;

template <class T> 
class Planty {

	class Node {
	public:
		T data;
		Node *next;
		Node *previous;
	};

	private:
		Node *first;

	public:
		Planty();
		int insert(T a);
		int remove(T a);
		void out();
		~Planty();
};



