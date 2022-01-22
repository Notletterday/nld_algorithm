#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    LinkList<int> list;
    list.insert(1,0);
    list.insert(2,1);
    list.insert(2,0);
    list.Print();
    return 0;
}
