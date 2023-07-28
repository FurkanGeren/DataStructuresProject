
#include "average.hpp"
#include <cmath>


Average::Average(){
    ortalama = 0;
}

void Average::ortalamaAl(ArrayList *Array){
    Liste* temp;

    int count = 0;
    int a;
    int arraySize = Array->size();
    double allsum=0.0;
    int listSize=0;
    int maxSira = max(Array);

    for(int k = 0;k<maxSira;k++){
        float toplam = 0;
        

        Liste* temp2 = new Liste();
        
        //arraySize
        for(int i = 0;i<arraySize;i++){
            
            temp=Array->items[i];

            listSize = temp->size();
            
            if(listSize<maxSira){
                temp->Ekle(10);

            }
            
            a=temp->forAverage(k);
            
            temp2->Ekle(a);

            toplam += a;
      
        }

        if(check(temp2)){
            count= checkHowMany(temp2);
            toplam -=(count*10);
            toplam = toplam / (Array->size()-(count*1));

        }else{
            toplam = toplam / Array->size();
            }
      

        temp2->~Liste();
        allsum +=toplam;
    }
    allsum=floor(allsum*10)/10;
    cout<<allsum;
    temp->~Liste();
    
}
int Average::max(ArrayList *tempMax){
    Liste* temp1;
    
    int maxdata=0;
    int tempdata=0;

    for(int i=0;i<tempMax->size();i++){
        temp1=tempMax->items[i];
        tempdata=temp1->size();
        if(maxdata < tempdata){
            maxdata=tempdata;
        }
    }
    return maxdata+1;

    temp1->~Liste();
}

bool Average::check(Liste* temp){
    Node* current = temp->head;
    while(current!=nullptr){
        if(current->data > 9){
            return true;
        }
        current = current ->next;
    }

    return false;
}

int Average::checkHowMany(Liste* temp){
    Node* current = temp->head;
    int count=0;
    while(current!=nullptr){
        if(current->data > 9){
            count++;
        }
        current = current ->next;
    }
    
    return count;
}
