class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int len = endTime.size();
        int count=0;
        for(int i=0; i<len; i++)
        {
            if((startTime[i] <= queryTime)&& (queryTime <= endTime[i]))
                count = count+1;;
            
        }
    return count;
    }
};
