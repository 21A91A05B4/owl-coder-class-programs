 void dfs(int node,vector<int>adj[],vector<int>&vis,vector<int>&v){
        vis[node]=1;
        v.push_back(node);
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(it,adj,vis,v);
            }
        }
        
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>v;
        vector<int>vis(V+1,0);
        dfs(0,adj,vis,v);
        return v;
    }
