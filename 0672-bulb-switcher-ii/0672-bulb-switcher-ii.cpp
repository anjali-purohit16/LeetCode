class Solution {
public:
    int flipLights(int n, int presses) {
      n = min(n, 3);

        if (presses == 0) {
            return 1;
        } 
        else if (presses == 1) {
            int arr[] = {2, 3, 4};
            return arr[n - 1];
        } 
        else if (presses == 2) {
            int arr[] = {2, 4, 7};
            return arr[n - 1];
        }

        return (int)pow(2, n);
    }
};