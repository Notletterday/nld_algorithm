#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    Sequence<int> sequence;
    sequence.Insert(0,1);
    sequence.Get(1);
    return 0;
}
