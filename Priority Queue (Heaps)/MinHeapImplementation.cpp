#include<bits/stdc++.h>
using namespace std;

class MinHeap{
public: 
    int arr[20];
    int idx;

    MinHeap(){
        idx = 1;
    }

    int top(){
        return arr[1];
    }

    int size(){
        return idx-1;
    }

    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;
        while(i!=1){
            int parent =  i/2;
            if(arr[parent]>arr[i]){
                swap(arr[parent],arr[i]);
                i = parent;
            }
            else break;
        }
    }

    void pop(){
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while(1){
            int l = i*2;
            int r = l+1;
            if(l>idx-1) break;
            if(r>idx-1){
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
                }
                break;
            }

            if(arr[l]<arr[r]){
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
                }
                else break;
            }

            else{
                if(arr[i]>arr[r]){
                    swap(arr[i],arr[r]);
                    i = r;
                }
                else break;
            }
        }
    }

    void display(){
        for(int i=1; i<idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    cout<<pq.size()<<" "<<pq.top()<<endl;
    pq.push(11);
    pq.push(2);
    cout<<pq.size()<<" "<<pq.top()<<endl;
    pq.display();
    pq.pop();
    cout<<pq.size()<<" "<<pq.top()<<endl;
    pq.display();
}