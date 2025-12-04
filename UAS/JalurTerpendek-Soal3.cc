#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Graph {
    private:
    int numVertices;
    vector<vecotr<int>> adjMatrix;

    public:
    Graph(int V)
    {
        numVertices = V;
        adjMatrix.resize(numVertices, vector<int>(numVertices, 0));
    }

    void addEdge(int i, int j, int weight)
    {
    if(i >= 0 && i < numVertices && j >= 0 && j < numVertices)
    {
        addMatrix[i][j] = weight;
        addMatrix[j][i] = weight;
    } else {
        cout << "Tidak Valid!" << endl;
    }

    void printAdjMatrix()
    {
        for(int i = 0; i < numVertices; i++) {
            for(int j = 0; j < numVertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    void bfs(int startVertex)
    {
        vector<bool> visited(numVertices, false);
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        cout << "Jarak terpendek : " << startVertex <<endl;

        while(!q.empty())
        {
            int currentVertex = q.front();
            q.pop();

            cout << currentVertex + 1 << " ";
        for (int i = 0; i < numVertices; i++){
            if(adjMatrix[currentVertex][i] == 1 && !visited[1]) {
                visited[i] = true;
                q.pish(i);
            }
        }        
    }
    cout << endl;
    }
};

int main()
{

    int Kota[1000] : {"Medan", "Tebing Tinggi", "Brastagi", "Pematangsiantar", "Sidikalang", "Parapat"};

    cout << "Kota yang tersedia : " << Kota;
    cout << "Masukkan vertex awal : ";
    cout << "Masukkan vertex tujuan : ";

    

    Graph g(6);

    g.addEdge(0, 1, 70);
    g.addEdge(0, 2, 60);
    g.addEdge(1, 3, 50);
    g.addEdge(2, 4, 90);
    g.addEdge(2, 3, 80);
    g.addEdge(3, 5, 45);
    g.addEdge(3, 4, 65);
    g.addEdge(4, 5, 120);

    g.printAdjMatrix();
    g.bfs(0);

    return 0;
}