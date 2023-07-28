/**
* liste.hpp
* Listeleri oluşturuyorum
* 1-B
* 1.Ödev
* 19.02.2023
* Furkan Geren / furkangeren2001@gmail.com
*/

#ifndef LISTE_HPP
#define LISTE_HPP

#include "node.hpp"

using namespace std;

class Liste{
public:

    Node* head;

    Node* FindPrevByPosition(int yer){
			if(yer < 0 || yer > size()){
        cout<<"return 0 cailsit: ";

        return 0;
      }
			int k=0;
			Node *itr=head;
			for(;itr!=NULL;itr=itr->next,k++){
				if(yer == k) return itr;
			}
			return NULL;
		}	

    Liste();
    int forAverage(int index);
    void removeAt(int index);
    bool isEmpty() const;
    void clear();
    int size() const;
    void Ekle(int data);
    int last();
    //bool check();
    int elementAt(int index);
    void display();
    void display(int index);


    ~Liste();
};


#endif