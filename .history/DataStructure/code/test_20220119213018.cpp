#include <iostream>
#include "HashMap.cpp"
using namespace std;
int main(int argc, char** argv){
    hashmap<int,int> answer;
    answer.insert(1,2);
    answer.insert(2,3);
    cout<<answer.size;
    return 0;
}
