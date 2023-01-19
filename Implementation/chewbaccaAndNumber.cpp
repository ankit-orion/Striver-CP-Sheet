/*
Problem Tag - A. Chewbaсca and Number

Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input
The first line contains a single integer x (1 ≤ x ≤ 1018) — the number that Luke Skywalker gave to Chewbacca.

Output
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Examples
inputCopy
27
outputCopy
22
inputCopy
4545
outputCopy
4444
*/
// solution
#include<iostream>
using namespace std;
int main(){
    string s;
    // why taking string - because we have to excess each and every digits 
    // also we don't have to change every digit 
    // we can also do this using int but it is lengthy process
    cin >> s;
    int n;
  // storing the size of string in n as it is easy to traverse
    int len = s.size();
 
    // first digit 
    int f = s[0] - '0'; // this will extract the number from ascii value as we have stored the digits in string so we need to subtract char '0' from it
    if(f == 9){
      // we need to check for the first digit as we don't want any leading zeroes as already mentioned in the problem statement
      // if the first digit is 9 we are storing char 9 on first place
        s[0] = '9';
    }else{
        if(f>4){
            s[0] = (9-f)+'0'; // why adding zero because we are converting number into string from integer as we have extracted digit in int
        }
    }
    for (int i = 1; i < len; i++)
    {
        /* code */
        int a = s[i] - '0';
        if(a < 5 || a == 0){
            continue;
        }else
        {
            s[i] = ((9-a) + '0');
        }
        
    }
    cout << s << endl;
}
