class SubrectangleQueries {
    vector<vector<int>> a;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle):a(rectangle){}
    void updateSubrectangle(int r1,int c1,int r2,int c2,int v){
        for(int i=r1;i<=r2;i++)
            for(int j=c1;j<=c2;j++) a[i][j]=v;
    }
    int getValue(int r,int c){return a[r][c];}
};