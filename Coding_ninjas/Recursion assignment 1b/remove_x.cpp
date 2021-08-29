# REMOVE X
Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc

##############################SOLUTION###############################

#include <cstring>
void removeX(char input[])
{
    if (input[0] == '\0')
        return;
    else if (input[0] == 'x') {
        int count = 1;
        for (int i = 0; i <= strlen(input); i++) {
            if (input[i] == 'x' && input[i + 1] == 'x') {
                count++;
            }
            else {
                break;
            }
        }
        for (int i = count; i <= strlen(input); i++) {
            input[i - count] = input[i];
        }
    }
    removeX(input + 1);
}