class Solution {
public:
    int insidePoints(int x,int y,int radius,vector<vector<int>> points){
        int sum = 0;
        for(int i=0;i<points.size();i++){
            int x0 = points[i][0];
            int y0 = points[i][1];
            float distance = sqrt(pow(x-x0,2)+pow(y-y0,2));
            if(distance<=radius){
                sum++;
            }
        }
        return sum;
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector <int> ans;
        for(int i=0;i<queries.size();i++){
            int cnt = insidePoints(queries[i][0],queries[i][1],queries[i][2],points);
            ans.push_back(cnt);
        }
        return ans;
    }
};

