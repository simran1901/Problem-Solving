#include <bits/stdc++.h>
using namespace std;

#define N 4
#define M 5

class Node
{
public:
    int x, y;
    int dir;

    Node(int i, int j)
    {
        x = i;
        y = j;
        dir = 0;
    }
};

int n = N, m = M;

int finalX, finalY;
bool visited[N][M];

bool isReachable(int maze[N][M])
{
    int i = 0, j = 0;

    stack<Node> st;

    Node temp(i, j);

    st.push(temp);

    while (!st.empty())
    {

        temp = st.top();
        int d = temp.dir;
        i = temp.x, j = temp.y;

        temp.dir++;
        st.pop();
        st.push(temp);

        if (i == finalX && j == finalY)
        {
            return true;
        }

        if (d == 0)
        {
            if (i - 1 >= 0 && maze[i - 1][j] && visited[i - 1][j])
            {
                Node temp1(i - 1, j);
                visited[i - 1][j] = false;
                st.push(temp1);
            }
        }

        else if (d == 1)
        {
            if (j - 1 >= 0 && maze[i][j - 1] && visited[i][j - 1])
            {
                Node temp1(i, j - 1);
                visited[i][j - 1] = false;
                st.push(temp1);
            }
        }

        else if (d == 2)
        {
            if (i + 1 < n && maze[i + 1][j] && visited[i + 1][j])
            {
                Node temp1(i + 1, j);
                visited[i + 1][j] = false;
                st.push(temp1);
            }
        }

        else if (d == 3)
        {
            if (j + 1 < m && maze[i][j + 1] && visited[i][j + 1])
            {
                Node temp1(i, j + 1);
                visited[i][j + 1] = false;
                st.push(temp1);
            }
        }

        else
        {
            visited[temp.x][temp.y] = true;
            st.pop();
        }
    }

    return false;
}

// Driver code
int main()
{
    memset(visited, true, sizeof(visited));

    int maze[N][M] = {
        {1, 0, 1, 1, 0},
        {1, 1, 1, 0, 1},
        {0, 1, 0, 1, 1},
        {1, 1, 1, 1, 1}};

    // Destination coordinates
    finalX = 2;
    finalY = 3;

    if (isReachable(maze))
    {
        cout << "Path Found!" << '\n';
    }
    else
        cout << "No Path Found!" << '\n';

    return 0;
}
