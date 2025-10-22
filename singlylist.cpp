#include "singlylist.h"

void CreateList(List &L) {
    L.First = Nill;
}

address Alokasi(infotype x) {
    address P = new Elmtlist;
        P->info = x;
        P->next = Nill;
    return P;
}

void Dealokasi(address &P) {
    delete P;
}

void InsertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

void InsertLast(List &L, address P) {
    if (L.First == Nill) {
        //jika list kosong, insertlast sama dengan insertfirst
       InsertFirst(L, P);
    } else {
        // jika list tidak kosong, cari elemen terakhir
        address Last = L.First;
        while (Last->next != Nill) {
            Last = Last->next;
        }
        // sambungkan elemen terakhir dengan elemen baru (p)
        Last->next = P;
    }
}

void printInfo(List L) {
    address P = L.First;
    if (P == Nill) {
        std::cout << "List kosong! " << std::endl;
    } else {
        while (P != Nill) {
            std::cout << P->info << " ";
            P = P->next;
        }
        std::cout << std::endl;
    }
}
