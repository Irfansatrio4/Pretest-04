/*
Nama : Irfan Satrio Nugroho
Kelas : A
NPM : 140810180003
tanggla buat : 26/03/2019
*/

#include <iostream>
using namespace std;

struct ElemtList 
{
	char NPM [14];
	char nama [40];
	float ipk;
	ElemtList* next;
};


typedef ElemtList* pointer;
typedef pointer list;

void createList (list& first)
{
	first=NULL;	
}
void createElement (pointer& pBaru)
{
	pBaru=new ElemtList;
 cout<<"NPM : "; cin>>pBaru->NPM;
 cout<<"Nama : "; cin>>pBaru->nama;
 cout<<"IPK : "; cin>>pBaru->ipk;
 pBaru->next=NULL;
 
}
void insertLast (list& first, pointer pBaru){
     pointer Last;

    if (first==NULL){
        first=pBaru;
    }
    else {
        Last=first;
        while (Last->next!=NULL){
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}
void insertSortNPM (list& first, pointer pBaru)
{
	
}
void traversal (list first)
{
	
}

int main ()
{
	pointer pBaru;
	list first;
	createElement(pBaru);
	insertLast(first, pBaru);
	traversal (first);
}	

