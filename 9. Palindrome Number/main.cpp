//
//  main.cpp
//  9. Palindrome Number
//
//  Created by chenyufeng on 10/3/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isPalindrome(int x)
{
    // 负数不是回文
    if (x < 0)
    {
        return false;
    }

    string inputStr;
    ostringstream os;
    os << x;
    inputStr = os.str();

    string reverseInputStr = inputStr;
    reverse(reverseInputStr.begin(), reverseInputStr.end());

    if (reverseInputStr == inputStr)
    {
        return true;
    }

    return false;
}

int main(int argc, const char * argv[])
{
    return 0;
}
