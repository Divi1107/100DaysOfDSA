class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int lar = INT_MIN, seclar = INT_MIN;
        
        if (n <= 1) {
            return -1; // Return -1 if array size is 0 or 1
        }

        // Find the largest element
        for (int i = 0; i < n; i++) {
            lar = std::max(lar, arr[i]);
        }

        // Find the second largest element
        for (int i = 0; i < n; i++) {
            if (arr[i] < lar && arr[i] > seclar) {
                seclar = arr[i];
            }
        }

        if (seclar == INT_MIN) {
            return -1; // If no second largest element found
        } else {
            return seclar; // Return the second largest element
        }
	}
};
