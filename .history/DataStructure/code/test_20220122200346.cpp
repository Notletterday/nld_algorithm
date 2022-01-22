#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    LinkList<int> list;
    list.TailInsert(1,0);
    list.TailInsert(2,0);
    list.Print();
    cout<<list.GetData(0);
    list.drop(0);
    return 0;
}
