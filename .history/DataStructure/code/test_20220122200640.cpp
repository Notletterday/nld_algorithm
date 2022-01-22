#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    LinkList<int> list;
    list.TailInsert(1,1);
    list.TailInsert(2,0);
    list.Print();

    return 0;
}
