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
int getsize();
bool insert(T x,int n);
bool drop(T x);
int locate(T x);
T get(int i);
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
int Sequence<T>::size(){
    return size;
}
template <typename T>
bool Sequence<T>::insert(T x,int n){
    int j;
    try{
        if(size >= MaxSize || n < 0 || n > size)
        throw string("越界");
    }
    catch(string error){
        cout<<"error:"<<error<<endl;
    }

    for(j = size+1;j > n;j--) data[j] = data[j - 1];
    data[j] = x;
    size++;
    cout<<data[j];
    return true;
}
template <typename T>
bool Sequence<T>::drop(T x){
    for(int i = 0;i < MaxSize;i++)
        if(data[i] != 0) {
          data[i] = 0;
          size--;
          return true;
        }
    return false;
}
template <typename T>
int Sequence<T>::locate(T x){
    for(int i = 0;i < MaxSize;i++)
        if(data[i] != 0) {
          data[i] = 0;
          return i;
        }
    return 0;
}
template <typename T>
T Sequence<T>::get(int i){
    try{
    if((i<1) || (i>size))
      throw string("越界啦");
    }
    catch(string s) {
        cout << s << endl;
    }
    return data[i];
}



