class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> posList, negList;
        for (int num : arr) {
            if (num >= 0)
                posList.push_back(num);
            else
                negList.push_back(num);
        }

        vector<int> result;
        int i = 0, j = 0;
        bool turnPositive = true;
        while (i < posList.size() && j < negList.size()) {
            if (turnPositive)
                result.push_back(posList[i++]);
            else
                result.push_back(negList[j++]);
            turnPositive = !turnPositive;
        }
        while (i < posList.size()) {
            result.push_back(posList[i++]);
        }
        while (j < negList.size()) {
            result.push_back(negList[j++]);
        }

        for (int k = 0; k < arr.size(); ++k) {
            arr[k] = result[k];
        }
        return arr;
    }
};