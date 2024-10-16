#include<iostream>
#include<vector>

//undirected and Weighted direction
using namespace std;

int main ()
{
    int vertex, edges;
    cin >> vertex >> edges;

    vector<vector<int> > AdjMat(vertex, vector<int>(vertex, 0));

    int u, v,weight;
    for(int k = 0; k < edges; k++)
    {
        cin >> u >> v;
        AdjMat[u][v] = weight;
        AdjMat[v][u] = weight;
    }
    for (int l = 0; l < vertex; l++)
    {
        for (int m = 0; m < vertex; m++)
            cout << AdjMat[l][m] << " ";
        cout << endl;
    }
    return 0;
}




