#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> inputMatrix(){
    int n;

    cout<<"Enter the size of matrix (n x n): ";
    cin>>n;

    vector<vector<int>> mat(n, vector<int>(n));
    cout<<"Enter the elements in row wise (only 0 and 1) : \n";

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> mat[i][j];
        }
    }

    return mat;
}

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans, vector<vector<bool>> &visited){

    int n = mat.size();
    // Base cases 
    if(r < 0 || c < 0|| r >= n || c >= n || mat[r][c]==0 || visited[r][c] == true ){
        return;
    }

    if(r == n-1 && c == n-1){
        ans.push_back(path);
        return;
    }

    visited[r][c] = true;

    helper(mat, r+1, c, path + "D ", ans, visited);
    helper(mat, r-1, c, path + "U ", ans, visited);
    helper(mat, r, c-1, path + "L ", ans, visited);
    helper(mat, r, c+1, path + "R ", ans, visited);

    visited[r][c] = false;
}

vector<string> ratInMaze(vector<vector<int>> &mat){
    int n = mat.size();
    vector<string> ans;
    string path = "";

    vector<vector<bool>> visited(n, vector<bool>(n, false));

    helper(mat, 0,0 , path, ans, visited);

    return ans;
}
int main(){

    vector<vector<int>> mat =inputMatrix();

    vector<string> ans = ratInMaze(mat);

    if(ans.empty()){
        cout<< "No path found..";
    }else{
        cout<<"Here's the all possible paths: \n";
        for(string path : ans){
            int n;
            for(int i=0;i<n;i++){
                cout << n<<". "<<path << endl;

            }
            // n++;
        }
    }
    return 0;
}