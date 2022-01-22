#include <iostream>
#include "LinearList.cpp"
using namespace std;
int main(int argc, char** argv){
    CircularLinkedList<int> circleList;
    circleList.Insert(2,0);
    circleList.Insert(3,0);
    
    circleList.Print();
    circleList.drop(0);
    circleList.Print();
    cout<<circleList.GetData(0);

    return 0;
}
