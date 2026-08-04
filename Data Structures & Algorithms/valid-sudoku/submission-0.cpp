class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            vector<int>a(10,0);
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')continue;
                a[board[i][j]-'0']++;
                if(a[board[i][j]-'0']>1)return false;
            }
        }
        for(int i=0;i<9;i++){
            vector<int>a(10,0);
            for(int j=0;j<9;j++){
                if(board[j][i]=='.')continue;
                a[board[j][i]-'0']++;
                if(a[board[j][i]-'0']>1)return false;
            }
        }
         for(int i=3;i<=9;i+=3){
            for(int j=3;j<=9;j+=3){
                vector<int>a(10,0);
                for(int b=i-3;b<i;b++){
                    for(int k=j-3;k<j;k++){
                        if(board[b][k]=='.')continue;
                        a[board[b][k]-'0']++;
                        if(a[board[b][k]-'0']>1)return false;
                    }
                }
            }
         }
        return true; 
    }
};
