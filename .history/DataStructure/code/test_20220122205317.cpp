#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    CircularLinkedList<int> li;
    li.Insert(1,0);
    li.Print();
    
    return 0;
}
