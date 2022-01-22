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
//顺序表
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
int Sequence<T>:: getsize(){
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
        cerr<<"error:"<<error;
        return false;
    }

    for(j = size+1;j > n;j--) data[j] = data[j - 1];
    data[j] = x;
    size++;
    return true;
}
template <typename T>
bool Sequence<T>::drop(T x){
    for(int i = 0;i < size;i++)
        if(x = data[i])
          for(int j = i;j < size - 1;j++)
             data[j] = data[j+1];
    size--;
    return false;
}
template <typename T>
int Sequence<T>::locate(T x){
    for(int i = 0;i < size;i++)
        if(data[i] != 0) {
          data[i] = 0;
          return i;
        }
}
template <typename T>
T Sequence<T>::get(int i){
    try{
    if((i<0) || (i>size))
      throw string("越界");
    }
    catch(string error){
        cerr<<"error:"<<error;
        return false;
    }
    return data[i];
}

/*----------------------------------------------------------------
|                          分割线                                 |
----------------------------------------------------------------*/
//链表
template<typename T>
class Node{
    public:
    T data;
    Node * next;
    Node();
};
template<typename T>
Node<T>::Node(){
    next = NULL;
}

template<typename T>
class LinkList{
private:
Node<T> * head;
int size;
public:
LinkList();
~LinkList();
void Initialize();
bool deleteall();
bool HeadCreate(int n);
void TailCreate(int n);
void HeadCreateWithHead(int n);
void TailCreateWithHead(int n);
int get_size();
Node* LocateData(T x);
Node* LocateNum(int i);
T GetData(int i);
bool insert(T x,int i);
bool drop(int i);
void Print();
};
template<typename T>
LinkList<T>::LinkList(){
    
}
template<typename T>
void LinkList<T>::Initialize(){
    
}