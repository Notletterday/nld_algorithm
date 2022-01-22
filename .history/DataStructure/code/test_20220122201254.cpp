#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    LinkList<int> list;
    list.TailInsert(2,0);
    list.TailInsert(3,1);
    cout<<list.GetData(1);

    return 0;
}
