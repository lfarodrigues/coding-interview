/* MODO INOCENTE DE RESOLVER
void nullifyLineAndColumn(const vector<vector<int>>& mat, int line, int column)
{
    for(int j = 0; j < mat[0].size(); j++)
        mat[line][j] = 0;    
    for(int i = 0; i < mat.size(); i++)
        mat[i][column] = 0;
}


void zero_matrix(const vector<vector<int>>& mat)
{
    for(int i = 0; i < mat.size(); i++)
    {
        for(int j = 0; j < mat[0].size(); j++)
        {
            if(mat[i][j] == 0){
                nullifyLineAndColumn(mat, i, j);
            }
        }
    }
}
*/

void zero_matrix(const vector<vector<int>>& mat)
{
    vector<bool> row(mat.size());
    vector<bool> column(mat[0].size());

    for(int i = 0; i < mat.size(); i++)
    {
        for(int j = 0; j < mat[0].size(); j++){
            if(mat[i][j] == 0){
                row[i] = true;
                column[j] = true;
            } else {
                row[i] = false;
                column[j] = false;
            }
        }
    }

    // nullify rows
    for(int i = 0; i < rows.size(); i++)
        if(row[i]) nullifyRow(i);

    //nullify columns
    for(int j = 0; j < column.size(); j++)
        if(column[i]) nullifyColumn(j);
}