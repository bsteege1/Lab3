//Brandon Steege
//Lab3-bsteege1
1. n = 5, sum = 15

2. The value of N that causes the overflow is at 256 for the short data type.
   This can be detected by stopping the function and reporting the value of n if the sum is ever less than zero. 

3. The value of N that causes an overflow for the long data type is 65536. 

4. The value that causes the overflow with type float as the product is 35. With this type of data type, you know that an overflow occured if the output is equal to "inf".

5. The value that causes the overflow with type double as the product is 171.

6. When type float is being used, 10 causes an overflow. When type double is being used,
   6 causes the overflow. I tested this by showing that the computations should always equal zero. 
   If they didn't equal zero, then that means that some type of overflow occured. The float could get 
   to a larger number before overflowing when compared to the double, because the float must be more 
   accurate when it comes to division. 

7. The float does not store the exact value, which makes the for loop believe that i is actually less
   than 4.4, when if it was more accurate, it shouldn't have. The double is far more accurate 
   and will actually go to the correct values because it will store values that are much more close to the actual
   values than a float. 
