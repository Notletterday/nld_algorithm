#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    LinkList<int> list;
    list.headinsert(1,0);
    cout<<list.get_size();
    return 0;
}
