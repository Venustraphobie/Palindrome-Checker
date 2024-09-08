#include <algorithm> 
#include<iostream>
#include<string>

int main() {
    std::string palindromeChecker;

    while (true) {
        std::cout << "Palindrome Checker" << std::endl;
        std::cout << "Enter a word to determine if it qualifies as a palindrome." << std::endl;
        std::cin >> palindromeChecker;

        if (palindromeChecker == "q") {
            break;
        }

        std::string reversedPalindromeChecker = palindromeChecker;
        reverse(reversedPalindromeChecker.begin(), reversedPalindromeChecker.end());

        if (palindromeChecker == reversedPalindromeChecker) {
            std::cout << palindromeChecker << " is a palindrome." << std::endl;
        } else {
            std::cout << palindromeChecker << " is not a palindrome." << std::endl;
        }
    }

    return 0;
}