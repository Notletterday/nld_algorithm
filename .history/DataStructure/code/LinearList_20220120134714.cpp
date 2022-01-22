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
void Initialize();
int Size();
bool Insert(T x,int n);
bool Delete(T x);
int Locate(T x);
T Get(int i);
};
template <typename T>
Sequence<T>::Sequence(){
    Initialize();
}
template <typename T>
void Sequence<T>::Initialize(){
    size = 0;
}
template <typename T>
int Sequence<T>::Size(){
    return size;
}
template <typename T>
bool Sequence<T>::Insert(T x,int n){
    int j;
    try{
        if(size >=MaxSize || n < 0 || n > MaxSize-1)
        throw string("越界");
    }
    catch(string error){
        cout<<"error:"<<error<<endl;
    }
    try{
    if(data[n] != 0) throw string("已经有数据了");
    }
    catch(string error){
        cout<<"error:"<<error<<endl;
    }
    for(j = size + 1;j>=n;j--) data[j] = data[j - 1];
    data[j] = x;
    size++;
    cout<<data[j];
    return true;
}
template <typename T>
bool Sequence<T>::Delete(T x){
    for(int i = 0;i < MaxSize;i++)
        if(data[i] != 0) {
          data[i] = 0;
          size--;
          return true;
        }
    return false;
}
template <typename T>
int Sequence<T>::Locate(T x){
    for(int i = 0;i < MaxSize;i++)
        if(data[i] != 0) {
          data[i] = 0;
          return i;
        }
    return 0;
}
template <typename T>
T Sequence<T>::Get(int i){
    try{
    if((i<1) || (i>size))
      throw string("越界啦");
    }
    catch(string s) {
        cout << s << endl;
    }
    return data[i];
}



