#include <bits/stdc++.h>
using namespace std;

struct Node {
    double key;
    vector<Node*> child;
};


Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    return temp;
}

// Driver program
int main()
{
    cout<<"Enter 1 to create new node";
    cout<<"Enter 2 to view existing node";
    cout<<"Enter 3 to modify node";
    cout<<"Enter 4 to view longest chain";
    int n;
    cin>>n;
    switch(n)
    {
        case 1:
        void enter_new_node();
        break;

        case 2:
        void view_node();
        break;

        case 3:
        void modify_node();
        break;

        case 4:
        void longest_chain();
        break;
    }
    return 0;
}
void enter_new_node()
{

    cout<<"Enter a new node";
    double abc;
    cin>>abc;
    int no;
    cout<<"Enter the level of new node";
    cin>>no;
    Node* root =NULL;//Creating Genesis node and making it null;
    vector<double>sum;//to store summ of parent node of different levels
    if(sum[no==0])//checking the sum of parent node if exists
        sum[no]=abc;//assign the sum if not existed;
    if(sum[no]-abc>)
    unordered_map <string, string> hash_srt;//creating a hash set
    string name;
    cout<<"Enter your name";
    cin>>name;
    double data = encryption(abc,name,hash_srt);
    `if(Node*root == NULL)//checking root node to be null or not
        Node* root = newNode(data);//Creating Genesis node and making it null;
    else
    {
         if(no==2)
          (root->child).push_back(newNode(data));//pushing no of nodes at level 1
         else
           (root->child[no-1]->child).push_back(newNode(data));// pushinh no of nodes at any level
    }
}
void view_node()
{
    cout<<"Enter your name";
    string name;
    cin>>string;
    if(hash_srt.find(name))//if the owner name is present in the hash set
    {
        cout<<"enter your key";
        int b;
        cin>>b;//enter the private key for decryption
        cout<<decryption(b,name,hash_srt);
    }
}

double encryption(double msg,string name,unordered_map hash_srt)
{
 //2 random prime numbers
    double p = 3;
    double q = 7;
    double n=p*q;
    double count;
    double totient = (p-1)*(q-1);

    //public key
    //e stands for encrypt
    double e=2;

    //for checking co-prime which satisfies e>1
    while(e<totient){
    count = gcd(e,totient);
    if(count==1)
        break;
    else
        e++;
    }

    //private key
    //d stands for decrypt
    double d;

    //k can be any arbitrary value
    double k = 2;

    //choosing d such that it satisfies d*e = 1 + k * totient
    d = (1 + (k*totient))/e;

    hash_srt.insert(pair <string, string> (c, abc));//hashing the owner name to the encrypted data of key
    hash_srt.insert(pair <string, string> (c, d));//hashing the private key to the encrypted data of key

  return c;
}

double decryption(double key,string name,unordered_map hash_srt)
{
 //2 random prime numbers
    double p = 3;
    double q = 7;
    double n=p*q;
    double count;
    double totient = (p-1)*(q-1);

    //public key
    //e stands for encrypt
    double e=2;

    //for checking co-prime which satisfies e>1
    while(e<totient){
    count = gcd(e,totient);
    if(count==1)
        break;
    else
        e++;
    }

    //private key
    //d stands for decrypt
    double d;

    //k can be any arbitrary value
    double k = 2;

    //choosing d such that it satisfies d*e = 1 + k * totient
    d = (1 + (k*totient))/e;
    double c = pow(msg,e);
    double m = pow(c,d);
    c=fmod(c,n);
    m=fmod(m,n);

    if(hash_srt.find(m))
        cout<<hash_srt->second;

}

void modify_node()
{
    cout<<"Enter your name";
    string name;
    cin>>string;
    if(hash_srt.find(name))//if name is present in hash table
    {
        cout<<"enter new key";
        double b;
        cout<<"enter level";
    hash_srt.delete(key,name);//delete the existing key
    void encryption(key,name,hash_srt);//and create a new one at that level
    }
}

void transfer_ownership()
{
    cout<<"Enter your name";
    string name;
    cin>>string;
    if(hash_srt.find(name))//if name is present in hash table
    {
     string abc;
     cout<<"Enter new owner name";
     cin>>abc;
     hash_srt->second=abc;//updating hash table on a new owner
    }
}

void diameter(struct node * root)
{
   if (root == NULL)
     return 0;

  int lheight = height(root->left);
  int rheight = height(root->right);

  /* get the diameter of left and right sub-trees */
  int ldiameter = diameter(root->left);
  int rdiameter = diameter(root->right);

  return max(lheight + rheight + 1, max(ldiameter, rdiameter));
}
