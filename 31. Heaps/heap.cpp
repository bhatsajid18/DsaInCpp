#include<iostream>
using namespace std;

class Heap{
    static const int MAX_VAL=99999;
    int *a;
    int maxSize;
    int n;

    public:
    Heap(int sz=20);
    ~Heap();
    void restoreUp(int n);
    void restoreDown(int n);
    bool isEmpty();
    void display();
    void insert(int val);
    int deleteRoot();
    void deleteNode(int val);
};

Heap::Heap(int sz){
    maxSize=sz;
    a=new int[maxSize];
    n=0;
    a[0]=MAX_VAL;
}

Heap::~Heap(){
    delete[] a;
}

bool Heap::isEmpty(){
    return n==0;
}

void Heap::display(){
    int i;
    if (n==0){
        cout<<"Heap is empty.\n";
        return;
    }
    for (int i = 1; i <= n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    cout<<"Number of elements = "<<n<<endl;
}

void Heap::insert(int val){
    if (n==maxSize){
        cout<<"Can't insert more.\n";
        return;
    }
    n++;
    a[n]=val;
    restoreUp(n);
}

void Heap::restoreUp(int i){
    int k=a[i];
    int iParent=i/2;

    while (a[iParent]<k){
        a[i]=a[iParent];
        i=iParent;
        iParent=i/2;
    }
    a[i]=k;
}

void Heap::restoreDown(int i){
    int k=a[i];
    int lChild=2*i, rChild=2*i+1;

    while (rChild<=n){
        if (k>=a[lChild] && k>=a[rChild]){
            a[i]=k;
            return;
        }
        else if (a[lChild] > a[rChild]){
            a[i]=a[lChild];
            i=lChild;
        }
        else{
            a[i]=a[rChild];
            i=rChild;
        }

        lChild=2*i;
        rChild=2*i+1;
    }

    //if no. of nodes is even
    if (lChild==n && k<a[lChild]){
        a[i]=a[lChild];
        i=lChild;
    }
    a[i]=k;
}

int Heap::deleteRoot(){
    int maxValue=a[1];
    a[1]=a[n];
    n--;
    restoreDown(1);
    return maxValue;
}

void Heap::deleteNode(int val){
    int x;
    for(x=1;x<=n;x++){
        if (a[x]==val){
            break;
        }
    }
    a[x]=a[n];
    n--;
    restoreDown(x);
}
int main(){
    Heap h(6);
    
    int arr[]={10,15,21,30,18,9};
    for (int i = 0; i < 6; i++){
        h.insert(arr[i]);
    }
    
    h.display(); //30 21 15 10 18 9
    
    // h.insert(6); //Can't insert more.

    // cout<<h.isEmpty()<<endl;//0-->false

    // cout<<h.deleteRoot()<<endl;
    // h.display();// 21 18 15 10 9

    h.deleteNode(21);
    h.display();
}

