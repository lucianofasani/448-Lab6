/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{

	std::cout<<"Running...\n";
        Test myTester;

        myTester.checkIfEmpty();
		myTester.checkSizeofEmptyList();
		myTester.removeBackEmptyList();
		myTester.removeFrontEmptyList();
        myTester.addFrontAndCheck();
		myTester.addBackAndCheck();
		myTester.checkIfEmptyAfterAdding();
		myTester.checkContentsOfList();
		myTester.checkOrderOfList();
		myTester.checkSearch();
		myTester.checkRemoveFront();
		myTester.checkRemoveBack();

	std::cout << "And we're done.\nGoodbye.\n";
	
	return (0);

}

