#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
    int src;
    int neg;
    int wet;
    edge(){}
    edge(int src , int neg , int wet){
        this->src = src;
        this->neg = neg;
        this->wet = wet;
    }
};
void display(vector<vector<edge*>> G , int*arr){
    for(int i=0 ; i<G.size() ; i++){
        for(auto x:G[i]){
            cout<<"src :"<<x->src<<" neg :"<<x->neg<<" wet :"<<x->wet<<endl;
        }
    }
}

bool haspath(vector<vector<edge*>> G , int src , int dest , bool visited[]){
    if(src == dest ){
        return true;
    }
    visited[src] = true;
    for(int i=0 ; i<G[src].size() ; i++){
        if(visited[G[src][i]->neg] == false){
            bool hasnbrpath = haspath(G , G[src][i]->neg , dest , visited);
            if (hasnbrpath == true){
                return true;
            }
        }
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" ,  "w" , stdout);
    freopen("error.txt" , "w" , stderr);
    #endif
    int nv;
    cin>>nv;
    int arr[] = {2,2,2,3,3,2,2};
    bool visited[sizeof(arr)/sizeof(arr[0])];
    vector<vector<edge*>> G(nv , vector<edge*>());
    for(int i=0  ; i<nv ; i++){
        for(int j=0 ; j<arr[i] ; j++){
            int src , neg , wet ; 
            cin>>src>>neg>>wet;
            G[i].push_back(new edge(src , neg , wet));
        }
    }
    display(G , arr);
    cout<<"Haspath :"<<haspath(G , 0 ,909 ,visited);
    return 0;  
}
