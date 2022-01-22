#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    Sequence<int> sequence;
    sequence.insert(1,0);
    sequence.insert(2,1);
    sequence.drop(1);
    cout<<sequence.locate(2);
    return 0;
}
