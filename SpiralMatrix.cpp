void spiral_matrix(int b[4][4],int m,int n){
    int starting_row = 0;
    int starting_col = 0;
    int ending_row = m-1;
    int ending_col = n-1;
    int total = m*n;
    int count = 0;

    while(total--){
        for(int i=starting_col;i<=ending_col;i++){
            cout<<b[starting_row][i]<<" ";
            count++;
        }
        starting_row++;
        for(int i=starting_row;i<=ending_row;i++){
            cout<<b[i][ending_col]<<" ";
            count++;
        }
        ending_col--;
        for(int i=ending_col;i>=starting_col;i--){
            cout<<b[ending_row][i]<<" ";
            count++;
        }
        ending_row--;
        for(int i=ending_row;i>=starting_row;i--){
            cout<<b[i][starting_col]<<" ";
            count++;
        }
        starting_col++;
    }
}
