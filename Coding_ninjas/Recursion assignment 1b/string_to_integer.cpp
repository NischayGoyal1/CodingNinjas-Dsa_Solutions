# STRING TO INTEGER
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 <= |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567

###############################SOLTUION############################

#include<bits/stdc++.h>
int val(char input[],int n)
             {
                 if(n==1)
                 {
                     return input[0]-48;
                 }
    				return val(input,n-1)*10+ input[n-1]-48;
             }          
int stringToNumber(char input[]) {
    return val(input,strlen(input));
}
