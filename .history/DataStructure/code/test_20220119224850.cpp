#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    Sequence<int> sequence = new Sequence<int>();
    sequence.Insert(1,1);
    sequence.Insert(3,2);
    return 0;
}
