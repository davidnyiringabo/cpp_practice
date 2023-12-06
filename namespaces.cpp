#include <iostream>

namespace userDefined{
	int insideNamespace = 90;
	
	int cout(){
		return insideNamespace;
	};
};

int myGlobal = 43;

int cout(){
	return myGlobal * myGlobal;
};

int main (){
	int cout = 23;
	std::cout<<"The local variable cout in main is "<< cout;
	std::cout<<"The variable in userDefined namespace is"<< userDefined::insideNamespace;
	std::cout<<"The output of cout() in userDefined is"<< userDefined::cout();
	std::cout<<"The value of myGlobal  is"<<myGlobal;
	std::cout<<" The output of global cout() is"<< cout;
	return 0;
};
