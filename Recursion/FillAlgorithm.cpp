#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {0, 1, 0, -1};
vector<int> dy = {1, 0, -1, 0};
void show2DVec(vector<vector<int>> ve)
{
    for (int i = 0; i < ve.size(); i++)
    {
        for (int j = 0; j < ve[i].size(); j++)
        {
            cout << ve[i][j] << " ";
        }
        cout << "\n";
    }
}
void show2DVecChar(vector<vector<char>> ve)
{
    for (int i = 0; i < ve.size(); i++)
    {
        for (int j = 0; j < ve[i].size(); j++)
        {
            cout << ve[i][j] << " ";
        }
        cout << "\n";
    }
}
bool valid(vector<vector<char>> ma, vector<vector<int>> visited, int row, int col)
{
    if (row < 0 || row > ma.size() - 1 || col < 0 || col > ma[0].size() - 1 || visited[row][col] == 1 || ma[row][col] == '#')
    {
        return false;
    }
    return true;
}
void fillAlgo(vector<vector<char>> ma, vector<vector<int>> &visited, int row, int col, int &numberOfcellsInIsland)
{
    visited[row][col] = 1;

    numberOfcellsInIsland++;
    for (int dir = 0; dir < 4; dir++)
    {
        if (valid(ma, visited, row + dx[dir], col + dy[dir]))
        {
            fillAlgo(ma, visited, row + dx[dir], col + dy[dir], numberOfcellsInIsland);
        }
    }
}

int main()
{
    vector<vector<char>> ma = {{'#', '.', '#', '.', '.','.','#'},
                               {'#', '.', '#', '.', '#','.','#'},
                               {'#', '.', '#', '.', '#','.','#'},
                               {'.', '.', '#', '.', '.','.','#'}};
    vector<vector<int>> visited(ma.size(), vector<int>(ma[0].size()));
    int numberOFIslands = 0;

    int maximus = INT_MIN;
    int numberOfcellsInIsland = 0;

    for (int i = 0; i < ma.size(); i++)
    {
        for (int j = 0; j < ma[i].size(); j++)
        {
            if (valid(ma, visited, i, j))
            {
                numberOfcellsInIsland = 0;
                numberOFIslands++;
                fillAlgo(ma, visited, i, j, numberOfcellsInIsland);
                maximus = max(maximus, numberOfcellsInIsland);
            }
        }
    }

    show2DVec(visited);
    cout << numberOFIslands << " " << maximus;
    return 0;
}