#include "Planty.h"


template<class T>
Planty<T>::Planty()
{
	first = NULL;
}

template<class T>
Planty<T>::~Planty()
{
	Node *cur = first;
	if (cur) {
		if (cur->next)
			cur = cur->next;
		while (cur->next)
		{
			delete cur->previous;
			cur = cur->next;
		}
		delete cur;
	}
	first = NULL;
}

template<class T>
int Planty<T>::insert(T a)
{
	return 0;
}

template<class T>
int Planty<T>::remove(T a)
{
	return 0;
}

template<class T>
void Planty<T>::out()
{
}
