#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node *left;
	node *right;
};

typedef node* Node;

Node makenode(int a){
	Node newnode = new node;
	newnode -> data = a;
	newnode -> left = NULL;
	newnode -> right = NULL;
	return newnode;
}

Node buildtree(Node &A, char c, int par, int child)
{
	if(A!=NULL)
	{
		if(A->data == par){
			if(c == 'L'){
				A->left =  makenode(child);
			}
			else {
				A->right =  makenode(child);
			}
		}
		buildtree(A->left,c,par,child);
		buildtree(A->right,c,par,child);
	}
}

void levelorder(Node root){
	queue<Node> q;
	Node top;
	q.push(root);
	while(q.size())
	{
		top = q.front();
		q.pop();
		cout << top->data <<" ";
		if(top->left!=NULL){
			q.push(top->left);
		}
		if(top->right!=NULL){
			q.push(top->right);
		}
	}
}



int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		Node root = NULL;
		int par, child;
		char c;
		cin >> par >> child >> c;
		root = makenode(par);
		buildtree(root, c, par, child);
		n--;
		while(n--){
			cin >> par >> child >> c;
			buildtree(root, c, par, child);
		}
		levelorder(root);
		cout << endl;
	}
	return 0;
}