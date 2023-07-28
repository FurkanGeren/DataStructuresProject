
#include "liste.hpp"
#include "node.hpp"
#include "swap.hpp"
#include "arraylist.hpp"
#include "average.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
//#include <vector>

using namespace std;

int main(int argc, char** argv) {

    ifstream dosya;
    dosya.open("Sayilar.txt",ios::in);
    if(!dosya){
        cerr<<"Dosya Acilmadi!!"<<endl;
        return 1;
    }
    
    string tp;
    
    int count = 0;

    ArrayList *upArray = new ArrayList();
    ArrayList *downArray = new ArrayList();

    while(getline(dosya, tp)){
        stringstream ss(tp);
        int parca;
      
        Liste *upList = new Liste();
        Liste *downList = new Liste();
        //Liste upList;
        //Liste downList;
        while(ss >> parca)
        {
            
            

            int down = parca % 10;
            int up = (parca / 10) % 10;

            upList->Ekle(up);
            downList->Ekle(down);
            
            
        }

        //cout<<"Listemin adresi: " << upList <<endl;
        //cout << "Liste elemean: ";
        //upList->display();   
       // downList->display();   

        upArray->add(upList);
        downArray->add(downList);

        //cout << "Array adresi: ";
        //cout<< upArray <<endl;
        //cout<<upList->elementAt(0)<<endl;

        //cout<<"basi";

        count++;
        //cout<<"son"<<endl;
        
    }
        //cout<<"son1";

    
    /*cout<<"Konum A: ";
    cin>>a;
    cout<<"Konum B: ";
    cin>>b;*/

    Swap swapAandB;
    swapAandB.swap(downArray,upArray);

  

    cout<<endl;
    Average a;
    cout<<"Ust: ";
    a.ortalamaAl(upArray);
    cout<<endl;
    cout<<"Alt: ";
    a.ortalamaAl(downArray);

    
    //cout<<temp1->size();
    return 0;
    
}