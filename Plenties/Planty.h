#pragma once
#include <memory.h> // NULL
#include <iostream>

using namespace std;

template <class T> 
class Planty {
	
	class Node {
		public:
			T data;
			Node* next;
			Node* previous;
	};

	private:
		Node* first;

	public:
		Planty();
		~Planty();
		int insert(T a);
		int remove(T a);
		void out();
		
		const Planty<T>& operator = (Planty<T> &a){
			
			Node* cur = first;
			

			if (cur) {
				if (cur->next)
					cur = cur->next;
				while (cur->next) {
					delete cur->previous;
					cur = cur->next;
				}
				delete cur;
			}

			first = NULL;

			cur = a.first;
			while (cur) {
				insert(cur->data);
				cur = cur->next;
			}
		}


};



