#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    Sequence<int> sequence;
    sequence.Insert(1,1);
    sequence.Insert(3,2);
    cout<<sequence.Get(1);
    return 0;
}
