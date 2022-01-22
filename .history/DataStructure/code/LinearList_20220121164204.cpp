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
void Initialize();
bool deleteall();
bool HeadCreate(int n);
bool TailCreate(int n);
bool HeadCreateWithHead(int n);
bool TailCreateWithHead(int n);
int get_size();
Node<T>* LocateData(T x);
Node<T>* LocateNum(int i);
T GetData(int i);
bool insert(T x,int i);
bool drop(int i);
void Print();
};
template<typename T>
void LinkList<T>::Initialize(){
    deleteall();
    head = NULL;
}
template<typename T>
LinkList<T>::LinkList(){
    cout<<"构造成功"<<endl;
    Initialize();
}
template<typename T>
bool LinkList<T>::HeadCreate(int n){
    deleteall();
    Node<T>* s,*p;
    int i;
    p = NULL;
    for( i = 1;i<n;i++){
        s= new Node<T>();
        cin>>s->data;
        s->next = p;
        p = s;
    }
    head = p;
    size = n;
    return true;
}
template<typename T>
bool LinkList<T>::TailCreate(int n){
    Node<T> *s,*r,*p;
    deleteall();
    p = NULL;
    for(int i=0; i<n; i++){
        s = new Node<T>();
        cin>>s->data;
        s->next = NULL;
        if(p = NULL){
            p = s;
            r = s;
        }
        else{
            r->next = s;
            r = s;
        }
    }
    head = p;
    size = n;
    return true;
}
template<typename T>
bool LinkList<T>::TailCreateWithHead(int n){
    Node<T> *s, *r, *p;
    deleteall();
    p = new Node<T>();
    p->next = NULL;
    r = p;
    for(int i = 0; i < n; i++){
        s= new Node<T>();
        cin >>s->data;
        r->next = s;
        r = s;
    }
    r->next = NULL;
    head = p;
    size = n;
    return true;
}
template<typename T>
bool LinkList<T>::HeadCreateWithHead(int n){
    Node<T> *s,*p;
    deleteall();
    p = new Node<T>();
    p->next = NULL;
    for(int i = 0; i < n; i++){
        s = new Node<T>();
        cin>>s->data;
        s->next = p->next;
        p->next = s;
    }
    head = p;
    size = n;
    return true;
}
template<typename T>
bool LinkList<T>::deleteall(){
    size = 0;
    Node<T>* p = head;
    Node<T>* q;
    while(p!=NULL){
        q = p->next;
        delete p;
        p = q;
    }
    head = NULL;
    return false;
}
template<typename T>
int LinkList<T>::get_size(){
      return size;
}
template<typename T>
Node<T> *LinkList<T>::LocateNum(int i){
if(i == 0) return head;
Node<T> *p = head->next;
int j = 0;
while((p!=NULL) &&(j<i)){
    p = p->next;
    j++;
}
if(j == i) return p;
else cout<<"position is not correct!"<<endl;
}
template<typename T>
Node<T> *LinkList<T>::LocateData(T x){
    Node<T> *p = head->next;
    int j = 0;
    while((p!=NULL) &&(p->data!=x))p = p->next;
    if(p) return p;
    else cout<<x<<"is not exist!"<<endl;
}
template<typename T>
T LinkList<T>::GetData(int i){
    int j = 0;
    Node<T>* p = head->next;
    for(;j<i;j++){
        p=p->next;
    }
    if(p==NULL || j>=i) cout<<"position is not correct!"<<endl;
    else return p->data;
}
template<typename T>
bool LinkList<T>::insert(T x,int i){
    Node<T> *p,*s;
    p = LocateNum(i-1);
    if(p == NULL) cout<<"position is not correct!"<<endl;
    s = new Node<T>();
    s->next = p->next;
    p->next - s;size++;
    cout<<"插入成功"<< endl;
    return true;
}
template<typename T>
bool LinkList<T>::drop(int i){
    Node<T> *p = LocateNum(i-1);
    Node<T> *q;
    if(p == NULL) cout<<"position is not correct!"<<endl;
    q = p->next;
    if(q!=NULL){
        p->next = q->next;
        delete q;
        size--;
        return true;
    }
    else {
        cout<<"position is not correct!"<<endl;
        return false;
    }
    
}
template<typename T>
void LinkList<T>::Print(){
    cout<<"开始输出";
    Node<T>* p;
    p =head->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}