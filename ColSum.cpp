void col_sum(int arr[4][2], int m, int n){
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum+=arr[j][i];
        }
        cout<<sum <<" ";
        maxi = max(maxi,sum);
    }
    cout<<endl;
    cout<<maxi;
}
