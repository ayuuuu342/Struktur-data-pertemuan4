#ifndef SINGLYLIST_H_INCLUDE
#define SINGLYLIST_H_INCLUDE

#include <iostream>

#define Nill NULL

typedef int infotype;
typedef struct Elmtlist *address;

struct Elmtlist {
    infotype info;
    address next;
};

struct List {
    address First;
};

//deklarasi prosedur dan fungsi primitif
void CreateList(List &L);
address Alokasi(infotype x);
void Dealokasi(address &P); 
void InsertFirst(List &L, address P);
void InsertLast(List &L, address P);
void printInfo(List L);

#endif
