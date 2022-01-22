#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    LinkList<int> list;
    list.TailInsert(2,0);
    cout<<list.GetData(0);

    return 0;
}
