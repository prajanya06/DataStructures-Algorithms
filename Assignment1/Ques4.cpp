//Written in C++17
#include <iostream>

using namespace std;

#define SIZE 1000  //I have assumed that size of the inputs will not be more than 1000

class SIMPLE_QUEUE{
    int front, rear, cap;
    int* arr;
    public:
    
    int  ins, del;
    SIMPLE_QUEUE(int size){
        cap=size;
        arr=new int[SIZE];
        front=-1;
        rear=-1;
        ins=0;
        del=0;
    }
    
    void enqueue(int a){
        int k = rear-front+1;
        if(k >= cap){
            cout<<"Queue limit reached";
        }
        else{
            rear++;
            if(ins==0){
                arr[rear]=a;
                front++;
            }
            else{
                arr[rear]=a;
            }
            ins++;
        }
    }
    
    void dequeue(){
        if(rear<1){
            cout<<"Queue is empty";
        }
        else{
            front++;
        }
        del++;
    }
    
    void display(){
        int t=0;
        cout<<"The contents of the queue are: "<<endl<<endl;
        if(front>rear || rear==-1 || front==-1){
            cout<<"Queue is empty, there is nothing to display"<<endl<<endl;
        }
        else{
            for(int i=front; i<=rear; i++){
                cout<<"Q["<<t<<"]="<<arr[i]<<" ";
                t++;
            }
            cout<<endl<<endl;
        }
    }
};

int main() {
	SIMPLE_QUEUE Q(10);
	int n=0;
	while(n!=4){
	    cin>>n;
	    if(n<1 || n>3){
	        n=4;
	        cout<<"Inserted: "<<Q.ins<<" ";
	        cout<<"Deleted: "<<Q.del;
	    }
	    else if(n==1){
	        int k;
	        cin>>k;
	        Q.enqueue(k);
	    }
	    else if(n==2){
	        Q.dequeue();
	    }
	    else if(n==3){
	        Q.display();
	    }
	}
	return 0;
}