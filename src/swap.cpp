
#include "swap.hpp"

#include "arraylist.hpp"

/*void Swap::swap(ArrayList *uparray,ArrayList *downarray,int a,int b){
    
    Liste* tempList[1];
    tempList[0] = uparray->listebul(a);
    uparray->listebul(a) = downarray->listebul(b);
    downarray->listebul(b) = tempList[0];
    cout<<"swap oldu";

}*/

void Swap::swap(ArrayList *downArray,ArrayList *upArray)
    {
        int a,b;
        cout<<"Konum A: ";
        cin>>a;
        cout<<"Konum B: ";
        cin>>b;
        Liste* temp;

        temp=upArray-> items[a];
        
        upArray->items[a] = downArray-> items[b];

        downArray->items[b] = temp;

        
    }

