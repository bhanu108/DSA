void dfs(int vertex, vector<bool> &vis, vector<int>adj[], vector<int>& ans)
	{
	    vis[vertex]=true;
	    for(int child : adj[vertex])
	    {
	        if(vis[child]) continue;
	        dfs(child, vis, adj, ans);
	    }
	    ans.push_back(vertex);
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>ans;
	    vector<bool>vis(V, false);
	    for(int i = 0; i<V; i++){
	        if(vis[i]) continue;
	        dfs(i, vis, adj, ans);
	    }
	    reverse(ans.begin(), ans.end());
	    return ans;
	}