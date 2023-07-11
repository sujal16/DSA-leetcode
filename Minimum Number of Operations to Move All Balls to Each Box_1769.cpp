class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector <int> ans;
        int sum = 0;
        int front = 0;
        int back = 0;
        for(int i=0;i<boxes.length();i++){
            if(boxes[i]=='1'){
                front++;
                sum += i;
            }
        }
        ans.push_back(sum);
        if(boxes[0]=='1'){
            back++;
            front--;
        }
        for(int i=1;i<boxes.length();i++){
            sum = sum - front + back;
            ans.push_back(sum);
            if(boxes[i]=='1'){
                back++;
                front--;
            }
        } return ans;
    }
};


