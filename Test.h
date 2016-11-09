#include <string>
#include <iostream>
#include "LinkedListOfInts.h"
#include "List.h"
#include "Node.h"

#ifndef TEST_H
#define TEST_H

class Test{

private:

    LinkedListOfInts* testList = nullptr;

public:

    Test();
    void checkIfEmpty();
    void checkSizeofEmptyList();
    void removeBackEmptyList();
    void removeFrontEmptyList();
    void addFrontAndCheck();
    void addBackAndCheck();
    void checkIfEmptyAfterAdding();
    void checkContentsOfList();
    void checkOrderOfList();
    void checkSearch();
    void checkRemoveFront();
    void checkRemoveBack();

};

#endif
