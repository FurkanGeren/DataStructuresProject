
#include "liste.hpp"
#include "node.hpp"
#include <ostream>

Liste::Liste(){
    head = nullptr;

}

void Liste::Ekle(int data){
    Node* yeniNode = new Node(data);
    if(head == nullptr){
        head = yeniNode;
        return;
    }else  {
        Node* current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = yeniNode;
    }
}

int Liste::last(){
    if(!head){
        return -1;
    }
    Node* current = head;
    while(current->next){
        current=current->next;
    }
    return current->data;
}
void Liste::display() {
    Node * current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void Liste::display(int index) {

    Node* current = head;
    for(int i = 0;i<index;i++){
        current = current ->next;
    }
    std::cout << current->data;

}
int Liste::size() const{
			int length=0;
			for(Node *itr=head->next;itr!=NULL;itr=itr->next){
				length++;
			}
			return length;
		}
void Liste::removeAt(int index){
			if(isEmpty()) throw "Empty list";
			Node *del;
			Node *prev = FindPrevByPosition(index);
			del = prev->next;
			prev->next = prev->next->next;
			
			delete del;
		}
bool Liste::isEmpty() const{
			return head->next == NULL;
		}
void Liste::clear(){
			while(!isEmpty())
				removeAt(0);
		}

int Liste::elementAt(int index){
    if (index < 0 || index >= size()) throw "No Such Element";
    if (index == 0) return head->data;
    return FindPrevByPosition(index)->next->data;
}

int Liste::forAverage(int index){

    if(FindPrevByPosition(index)==nullptr) return head->data;
    
    return FindPrevByPosition(index)->data;
    

}



Liste::~Liste(){
			clear();	
			delete head;
		}

