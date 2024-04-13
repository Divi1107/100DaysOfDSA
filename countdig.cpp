int countDigits(int n){
		std::string n_str = std::to_string(n);
    
    // Initialize a counter to keep track of divisible digits
    int divisibleCount = 0;
    
    // Iterate over each character in n_str
    for (char digitChar : n_str) {
        // Convert the character back to integer
        int digit = digitChar - '0';
        
        // Check if digit evenly divides n
        if (digit != 0 && n % digit == 0) {
          divisibleCount++;
        }
    }
    return divisibleCount;
}
