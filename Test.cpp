#include "Test.h"

Test::Test(){
    this->testList = new LinkedListOfInts();
}

void Test::checkIfEmpty(){
    bool check = false;

    check = testList->isEmpty();
    if(check){
        std::cout<<"Test 1: isEmpty function on empty list returns 0: PASSED\n";
    } else {
        std::cout<<"Test 1: isEmpty function on empty list returns 0: FAILED\n";
    }

    return;

}

void Test::checkSizeofEmptyList(){
    std::cout<<"Test 2: Running size function on empty list and returning false: ";

    if(testList->size() == 0){
        std::cout<<"PASSED\n";
    } else {
        std::cout<<"FAILED\n";
    }

}

void Test::removeBackEmptyList(){
    std::cout<<"Test 3: Running removeBack function on empty list and returning false: ";

    if(testList->removeBack()){
        std::cout<<"FAILED\n";
    } else {
        std::cout<<"PASSED\n";
    }
}

void Test::removeFrontEmptyList(){
    std::cout<<"Test 4: Running removeFront function on empty list and returning false: ";

    if(testList->removeBack()){
        std::cout<<"FAILED\n";
    } else {
        std::cout<<"PASSED\n";
    }
}


void Test::addFrontAndCheck(){
    testList->addFront(5);
    std::cout<<"Test 5: Adding to the front of the list and checking with size function to see if incremented correctly: ";

    if(testList->size() > 0){
        std::cout<<"PASSED\n";
    } else {
        std::cout<<"FAILED\n";
    }

    return;
}

void Test::addBackAndCheck(){
    testList->addBack(2);
    std::cout<<"Test 6: Adding to the back of the list and checking with size function to see if incremented correctly: ";

    if(testList->size() > 1){
        std::cout<<"PASSED\n";
    } else {
        std::cout<<"FAILED\n";
    }
}

void Test::checkIfEmptyAfterAdding(){

    std::cout<<"Test 7: isEmpty function on non-empty list: ";

    if(testList->isEmpty()){
        std::cout<<"FAILED\n";
    } else {
        std::cout<<"PASSED\n";
    }
}

void Test::checkContentsOfList(){
    std::cout<<"Test 8: Checking the vector to see if the contents were actually added: ";
    
    std::vector<int> testListVector = testList->toVector();
    int tempInt = testListVector.size();

    if(tempInt < testList->size()){
        std::cout<<"FAILED, less contents than size was incremented by.\n";
    } else {
        std::cout<<"PASSED, equal amount of contents to size that was incremented.\n";
    }
}

void Test::checkOrderOfList(){
    std::cout<<"Checking order of values to check if the addBack and addFront functions worked correctly:\n";
    
    std::vector<int> testListVector = testList->toVector();

    if(testListVector[0] == 2){
        std::cout<<"    Test 9: addBack function FAILED, adds to front instead.\n";
    } else {
        std::cout<<"    Test 9: addBack function PASSED\n";
    }

    testList->addFront(10);
    testListVector = testList->toVector();

    if(testListVector[0] == 10){
        std::cout<<"    Test 10: addFront function PASSED\n";
    } else {
        std::cout<<"    Test 10: addFront function FAILED, adds to back instead.\n";
    }
    

}

void Test::checkSearch(){
    std::cout<<"Checking if search function finds the element in the array with two different cases: \n";
    
    std::cout<<"    Test 11: Searching for an element that DOES exist in the list: ";
    if(testList->search(2)){
        std::cout<<"PASSED\n";
    } else {
        std::cout<<"FAILED\n";
    }

    std::cout<<"    Test 12: Searching for an element that DOES NOT exist in the list, fails if it says it found it: ";
    if(testList->search(34)){
        std::cout<<"FAILED\n";
    } else {
        std::cout<<"PASSED\n";
    }
}

void Test::checkRemoveFront(){
    testList->removeFront();

    std::vector<int> testListVector = testList->toVector();
    std::cout<<"Checking if removeFront function works on populated list: \n";

    std::cout<<"    Test 13: Removes value from front of list: ";
    if(testListVector[0] == 10){
        std::cout<<"FAILED\n";
    } else {
        std::cout<<"PASSED";
    }

    std::cout<<"    Test 14: Decrements size: ";
    if(testList->size() < 3){
        std::cout<<"PASSED\n";
    } else {
        std::cout<<"FAILED\n";
    }

}

void Test::checkRemoveBack(){
    testList->removeBack();

    std::vector<int> testListVector = testList->toVector();
    std::cout<<"Checking if removeBack function works on populated list: \n";

    std::cout<<"    Test 15: Removes value from back of list: ";
    if(testListVector[testListVector.size() - 1] == 5){
        std::cout<<"FAILED\n";
    } else {
        std::cout<<"PASSED";
    }

    std::cout<<"    Test 16: Decrements size: ";
    if(testList->size() < 3){
        std::cout<<"PASSED\n";
    } else {
        std::cout<<"FAILED\n";
    }

}