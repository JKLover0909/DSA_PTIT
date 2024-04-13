#include<bits/stdc++.h>
using namespace std;

struct node {
	char data;
	node *left;
	node *right;
};

node* makenode(char x){
	node* newnode = new node;
	newnode->data = x;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

void order (node* a){
	if(a != NULL ){
		order(a->left);
		cout << a-> data;
		order(a->right);
	}

}
int main(){
	int t; cin >> t;
	while(t--){
	   stack<node*> st;
	   string s;
	   cin >> s;
	    for(int i = 0; i<s.size(); i++){
	   	    if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
	   	        node* tmp =  makenode(s[i]);
	   	        tmp -> right = st.top();
	   	        st.pop();
	   	        tmp -> left = st.top();
	   	        st.pop();
	   	        st.push(tmp);
			   }
			else {
				st.push(makenode(s[i]));
			}  	
	    }
	    cout << endl;
		order(st.top());	
			cout << endl;
	}
	return 0;
}

