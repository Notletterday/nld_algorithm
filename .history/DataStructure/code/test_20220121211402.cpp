#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    LinkList<int> list;
    list.insert(2,0);
    cout<<list.get_size();
    return 0;
}
