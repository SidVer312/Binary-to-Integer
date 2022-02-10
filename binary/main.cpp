#include <iostream>
#include <math.h>

using namespace std;

int bitToInts(char bitList[], int bitCount)
{
    int result = 0;
    int placeValue = pow(2, bitCount - 1);
    char bit = '0';

    for (int bitNum = 0; bitNum < bitCount; bitNum++)
    {
        bit = bitList[bitNum];
        result += (bit == '1') ? placeValue: 0;
        placeValue *= 0.5; // division slower so use multiplication
    }

    return result;

}

int main()
{
    char myBitList[] = "11111111";
    int result = bitToInts(myBitList, 8);
    cout << result << endl;

    return 0;
}