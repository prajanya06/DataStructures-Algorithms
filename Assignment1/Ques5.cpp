//Written in C++17
#include <iostream>

using namespace std;

#define SIZE 1000

class QueueCounter{
    int front, rear;
    char* arr;
    
    public:
    
    int counter;
    
    QueueCounter(){
        front=-1;
        rear=-1;
        counter=0;
        arr=new char[SIZE];
    }
    
    void insert(char ch){
        rear++;
        if(front==-1){
            arr[rear]=ch;
            front++;
        }
        else{
            arr[rear]=ch;
        }
    }
    
    void delete_(){
        front++;
    }
    
    void counts(){
        counter++;
    }
    
    void traverse(){
        if(front!=-1 || rear!=-1){
            for(int i=front; i<=rear; i++){
                counts();
            }
        }
    }
};

int main() {
    QueueCounter male, female, kid;
    char ch;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ch;
        if(ch=='M'){
            male.insert(ch);
        }
        else if(ch=='F'){
            female.insert(ch);
        }
        else if(ch=='K'){
            kid.insert(ch);
        }
    }
    male.traverse();
    female.traverse();
    kid.traverse();
    cout<<"Total Males are: "<<male.counter<<endl;
    cout<<"Total Females are: "<<female.counter<<endl;
    cout<<"Total Kids are: "<<kid.counter<<endl;
	return 0;
}