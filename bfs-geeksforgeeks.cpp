vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>v;

        vector<int>vis(V+1,0);
        vis[0]=1;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int t=q.front();
            v.push_back(t);
            q.pop();
            for(auto it :adj[t]){
                if(vis[it]!=1){
                    q.push(it);
                vis[it]=1;
                }
            }
        }
        return v;
    }
