#ifndef _Linear_List_
#define _Linear_List_
#endif

#include <iostream>
using namespace std;

void hello(){
    cout <<"朋友您好"<< endl;
	cout <<"欢迎使用 南巷旧梦 的算法库"<< endl;
	cout <<"此库为 LinearList "<< endl;   
    cout <<"祝您心想事成"<< endl; 
}
/*----------------------------------------------------------------
|                          分割线                                 |
----------------------------------------------------------------*/
const int MaxSize = 100;
template <typename T>
class Sequence{
private:
T data[MaxSize];
int size;
public:
Sequence();
void Initiate();
int Size();
int Insert(T &x,int &n);
int Delete(T &x);
int Locate(T x);
T Get(int i);
};
template <typename T>
Sequence<T>::Sequence(){
    Initialize();
}
template <typename T>
void Sequence<T>::Initialize(){
    size = 100;
}