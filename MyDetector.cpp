

/**
 * TODO: Complete these class definitions
 */

/// Starter includes (YW)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"

//
namespace CPSC131::PalindromeDetector {
	/// YOUR WELCOME
	MyDetector::MyDetector() {}

	//
	bool MyDetector::isPalindrome(std::string s) {
		MyStack<char> stack;
		MyQueue<char> queue;
		
		for (char c : s) {
        	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            	c = std::tolower(c);
            stack.push(c);
            queue.enqueue(c);
        }
    }
		while (!stack.empty() && !queue.empty()) {
			char c1 = stack.top();
			char c2 = queue.front();
			if (c1 != c2) {
				return false;
			}
			stack.pop();
			queue.dequeue();
		}
		return true;
	}
}
