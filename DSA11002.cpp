#include<bits/stdc++.h>
using namespace std;

string s[150];
int n;

struct node {
	string c;
	node* left;
	node* right;
};

typedef node* Node;

Node makenode(string x){
	Node newnode = new node;
	newnode -> c = x;
	newnode -> left = NULL;
	newnode -> right = NULL;
	return newnode;
}

Node buildtree(Node root, int i){
	if(i<n)
	{
		root = makenode(s[i]);
		root->left=buildtree(root->left, (i<<1)+1);
		root->right=buildtree(root->right,(i<<1)+2);
	}
	return root;
}

long long calc(Node root){
	if(root -> c != "+" and root -> c != "-" and root -> c != "*" and root -> c != "/")
	return stoll(root -> c);
	if(root -> c =="+") return calc(root->left) + calc(root->right);
	else if
	(root -> c =="-") return calc(root->left) - calc(root->right);
	else if
	(root -> c =="*") return calc(root->left) * calc(root->right);
	else if
	(root -> c =="/") return calc(root->left) / calc(root->right);
}
int main(){
	int t; cin >> t;
	while(t--){
	    cin >> n;
	    for(int i = 0; i<n; i++)
			{
			    cin >> s[i];	
			}
		Node A = NULL;
		A = buildtree(A,0);
		cout << calc(A)<<endl;
		delete A;		
		}
		return 0;
}