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
    void insert(int val);
    int deleteRoot();
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

int main(){
    Heap h(6);
    
    int arr[]={10,15,21,30,18,9};
    for (int i = 0; i < 6; i++){
        h.insert(arr[i]);
    }

    // for (int i = 0; i < 6; i++){ //descending order
    //     arr[i]=h.deleteRoot();
    // }


    for (int i = 5; i >= 0; i--){ //ascending order
        arr[i]=h.deleteRoot();
    }

    for (int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }cout<<endl; 
}

