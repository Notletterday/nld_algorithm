#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    LinkList<int> list;
    list.HeadInsert(1,0);
    list.HeadInsert(2,0);
    list.Print();
    return 0;
}
