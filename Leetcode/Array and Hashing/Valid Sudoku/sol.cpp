class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char,int>> row(9),col(9),box(9);
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c = board[i][j];
                if(c=='.')continue; // for '.' ie for empty space
                //for row
                row[i][c]++; 
                if(row[i][c]>1) return false;

                //for col
                col[j][c]++; 
                if(col[j][c]>1) return false;

                int boxIndex = (i/3)*3+(j/3);
                // for 3*3 boxes
                box[boxIndex][c]++;
                if(box[boxIndex][c]>1) return false;

            }
        }

        return true;

    }
};
