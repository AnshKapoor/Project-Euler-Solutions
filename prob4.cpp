/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
int oneDigit(int num) 
{ 
    // comparison operation is faster than division operation. 
    // So using following instead of "return num / 10 == 0;" 
    return (num >= 0 && num < 10); 
} 
  
// A recursive function to find out whether num is palindrome 
// or not. Initially, dupNum contains address of a copy of num. 
bool isPalUtil(int num, int* dupNum) 
{ 
    // Base case (needed for recursion termination): This statement 
    // mainly compares the first digit with the last digit 
    if (oneDigit(num)) 
        return (num == (*dupNum) % 10); 
  
    // This is the key line in this method. Note that all recursive 
    // calls have a separate copy of num, but they all share same copy 
    // of *dupNum. We divide num while moving up the recursion tree 
    if (!isPalUtil(num/10, dupNum)) 
        return false; 
  
    // The following statements are executed when we move up the 
    // recursion call tree 
    *dupNum /= 10; 
  
    // At this point, if num%10 contains i'th digit from beiginning, 
    // then (*dupNum)%10 contains i'th digit from end 
    return (num % 10 == (*dupNum) % 10); 
} 
  
// The main function that uses recursive function isPalUtil() to 
// find out whether num is palindrome or not 
int isPal(int num) 
{ 
    // If num is negative, make it positive 
    if (num < 0) 
       num = -num; 
  
    // Create a separate copy of num, so that modifications made 
    // to address dupNum don't change the input number. 
    int *dupNum = new int(num); // *dupNum = num 
  
    return isPalUtil(num, dupNum); 
} 
  
// Driver program to test above functions 
int main() 
{ int n1 = 999,n2=999;
 for(int i=n1;i>=100;i--){
 long long double n = n1*i;
     
 }
    
    return 0; 
} 
