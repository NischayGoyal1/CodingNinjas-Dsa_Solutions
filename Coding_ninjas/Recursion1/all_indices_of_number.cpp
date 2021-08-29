# ALL INDEXS OF A NUMBER
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
indexes where x is present in the array (separated by space)
Constraints :
1 <= N <= 10^3
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4

##############################SOLUTIONS############################

int count=0;int index=0;
int allIndexes(int arr[], int n, int x, int output[]) {
    index++;
if(n==0)
{
    return count;
}
    if(arr[0]==x)
    {
        output[count++]=index-1;
    }
    int outputs=allIndexes(arr+1,n-1,x,output);
    return outputs;

}
