#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p1, pair<int,int>p2){
    double a = (p1.first*1.0)/(p1.second*1.0);
    double b = (p2.first*1.0)/(p2.second*1.0);
    return a>b;
}

double fractionKnapsack(vector<int> &profit, vector<int> &weight, int n, int W){
    vector< pair<int,int> > arr;
    for(int i=0; i<n; i++){
        arr.push_back({profit[i],weight[i]});
    }

    sort(arr.begin(), arr.end(), cmp);
    double ans = 0;
    for(int i=0; i<n; i++){
        if(arr[i].second<=W){
            ans += arr[i].first;
            W -= arr[i].second;
        }

        // pick in fraction
        else{
            double ratio = (arr[i].first*1.0) / (arr[i].second*1.0);
            ans += ratio*W;
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> profit = { 60, 100, 120 };
    vector<int> weight = { 10, 20 ,30 };
    int W = 50;
    int n = 3;
    cout<< fractionKnapsack(profit, weight, n, W);
    return 0;
}


// T.C = O(nlogn)