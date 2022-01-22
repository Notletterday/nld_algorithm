//保证这个文件只编译一次
/*
#pragma once 
*/      
//保证_Hash_Map_名称的文件只编译一次
#ifndef _Hash_Map_
#define _Hash_Map_ 
#endif
#define LOADFACTOR 0.7   //负载因子
#include <iostream>
using namespace std;

void hello(){
    cout <<"朋友您好"<< endl;
	cout <<"欢迎使用 南巷旧梦 的算法库"<< endl;
	cout <<"此库为 hashmap "<< endl;   
    cout <<"祝您心想事成"<< endl; 
}
/*----------------------------------------------------------------
|                          分割线                                 |
----------------------------------------------------------------*/

//结构体
template <class _Key, class _Value> 
struct DataType{
   _Value value;
   _Key key;
   DataType* next;
};

//类
template <class _Key, class _Value>
class hashmap{
private:

DataType<_Key,_Value> *table;
public:
int size;
bool insert(const _Key& key, const _Value& value);
bool remove(const _Key& key, const _Value& value);
_Value search(const _Key& key);
void Print();
};
template<class _Key, class _Value>
bool hashmap<_Key, _Value>::insert(const _Key& key, const _Value& value){
    DataType<_Key,_Value>* node;
    node->key = key;
    node->value = value;
    node->next = table->next;
    table->next = node;
    size++;
    return true;
}