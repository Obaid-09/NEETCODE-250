class Solution {
public:
    void rev(vector<int> &arr, int i, int j)
    {
        while(i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;
        int a = n - k;
        rev(arr, 0, a - 1);
        rev(arr, a, n - 1);
        rev(arr, 0, n - 1);
    }
};