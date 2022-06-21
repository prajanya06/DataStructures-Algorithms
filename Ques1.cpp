//Written in C++17
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int n, i=0;
	cout<<"Welcome to Stacks!"<<endl;
	cin>>n;
	stack<int> st;
	string str="star";
	while(str!="stop"){
	    cout<<"Give one of options: pop, push, stop"<<endl;
	    cin>>str;
	    if(str=="push"){
	        if(i==n){
	            cout<<"Can't push anymore"<<endl;
	            break;
	        }
	        int k=0;
	        cin>>k;
	        st.push(k);
	        i++;
	    }
	    else if(str=="pop"){
	        int k = st.top();
	        cout<<"Element Poped : "<<k<<endl;
	        st.pop();
	        i--;
	    }
	}
	cout<<"Stack elemnts are :"<<endl;
	while(!st.empty()){
	    int k=st.top();
	    cout<<"|"<<k<<"|"<<endl;
	    cout<<"---"<<endl;
	    st.pop();
	}
	return 0;
}