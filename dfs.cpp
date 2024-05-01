#include <iostream>
#include <stack>
using namespace std;
int graph [50][50]={0};
bool visited_node[50]={false};

void dfs(int node,int S_node){
    stack <int> st;
    st.push(S_node);
    visited_node[S_node]=true;
    while(!st.empty()){
        int crnt_node=st.top();
        st.pop();
        cout<< crnt_node <<" ";
        for(int nei=0; nei<node; nei++){
            if(graph[crnt_node][nei] && !visited_node[nei]){
                st.push(nei);
                visited_node[nei]=true;
            }
        }
    }
}
int main(){
    int node,S_node;
    cout<<"Enter node number: ";
    cin>>node;
    cout<<"Enter the matrix : "<<endl;
    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            cin>>graph[i][j];
        }
    }
    cout<<"Enter starting node number: ";
    cin>>S_node;
    dfs(node,S_node);
    return 0;
}
