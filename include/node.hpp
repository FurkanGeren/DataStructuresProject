/**
* node.hpp
* Listelerin düğümlerini oluşturuyorum
* 1-B
* 1.Ödev
* 19.02.2023
* Furkan Geren / furkangeren2001@gmail.com
*/
#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

using namespace std;

class Node {

public:
    int data;
    Node* next;

    Node(int data);

};






#endif