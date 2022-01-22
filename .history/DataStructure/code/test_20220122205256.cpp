#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    DoubleLinkedList<int> list;
    list.Insert(1,0);
    list.Insert(2,0);
    CircularLinkedList<int> li;
    li.Insert(1,0);
    li.Print();
        return 0;
}
