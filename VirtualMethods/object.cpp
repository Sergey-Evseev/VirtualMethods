#include "object.h"

object::object()
{
	unsigned int object::total(0);
	
	object::object() : 
		id(total++)
	{
		cout << "Constructor object" << endl;
	}
	unsigned int object::getID(){
	return id;
	}
	unsigned int object::getTotal() {
		return total;
	}

	void object::showParameters()
	{
		cout << "Base class function" << endl;
	}