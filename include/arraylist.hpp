/**
* arraylist.hpp
* Listeleri depolayacağım arraylisti oluşturuyorum
* 1-B
* 1.Ödev
* 20.02.2023
* Furkan Geren / furkangeren2001@gmail.com
*/

#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

#include "liste.hpp"
#include "node.hpp"
class ArrayList
{
public:
    Liste **items;
    int length;
    int capacity;
    void reserve(int newCapacity)
    {
        if (capacity >= newCapacity)
            return;
        Liste **tmp = new Liste*[newCapacity];
        for (int j = 0; j < length; j++)
            tmp[j] = items[j];
        if (items != NULL)
            delete[] items;
        items = tmp;
        capacity = newCapacity;
    }

public:
    ArrayList()
    {
        length = 0;
        capacity = 0;
        items = NULL;
    }
   
    int size()
    {
        return length;
    }
    bool isEmpty()
    {
        return size() == 0;
    }
    

    void add(Liste *&item)
    {
        insert(length, item);
    }
    void insert(int i, Liste *&item)
    {
        if (length >= capacity)
            reserve(max(1, 2 * capacity));
        for (int j = length - 1; j >= i; j--)
            items[j + 1] = items[j];
        items[i] = item;
        length++;
    }
    
    void clear()
    {
        length = 0;
    }

    void swap(int index,ArrayList *downArray,ArrayList *upArray)
    {
        int a,b;
        cout<<"Konum A: ";
        cin>>a;
        cout<<"Konum B: ";
        cin>>b;
        Liste* temp[1];
        std::cout << "List at index " << index << ":\n";

        temp[0]=upArray-> items[a];
        
        upArray->items[a] = downArray-> items[b];

        downArray->items[b] = temp[0];



    }



    void printListAt(int index)
    {
        if (index < 0 || index >= length)
        {
            std::cout << "Invalid index." << std::endl;
            return;
        }

        if (items[index] == NULL)
        {
            std::cout << "List at index " << index << " is empty." << std::endl;
        }
        else
        {
            //std::cout << "List at index " << index << ":\n";
            items[index]->display(); // Assuming 'Liste' class has a print() function.
        }
    }


    ~ArrayList()
    {
        if (items != NULL)
            delete[] items;
    }
};

#endif