void frequencyCount(vector<int>& arr, int N, int P) { 
        map<int, int> mpp;
        
        // Count frequency of each element in arr
        for(int i = 0; i < N; i++) {
            if (arr[i] <= N) { // Only count frequencies for elements within range
                mpp[arr[i]]++;
            }
        }
        
        // Update arr with frequencies from 1 to N
        for(int i = 0; i < N; i++) {
            if (mpp.find(i + 1) != mpp.end()) {
                arr[i] = mpp[i + 1];
            } else {
                arr[i] = 0;
            }
        }
        
        // Print the frequencies in a single line
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
    }
};
