# cs375-project1

B1:
    (a)   Provide a program package, a readme file to explain how to run your program, and show your code and results.

        Input: ABACBACACBBAC, Output: AAAAABBBBCCCC

                                      Execution Time: 52 microseconds.
 
    (b)   Explain your implemented algorithm and its worst-case time complexity:

        First I looked in the file when it detects A,B,C. Then uploaded them into a string variable. Using the string variable I used a bucket sort that to use an array to count how many of each letter there is then to sort / print I just check the number at each element, 0 being A, 1 being B, and 2 being C. This is all constant time and O(n) worse case. 


B2: 
    (a)   Provide a program package, a readme file to explain how to run your program, and show your code and results.

        Input: 
            1
            2
            3
            7
            8
            15
            22

        Output: 
            2-1=1
            3-1=2
            8-1=7
            3-2=1
            8-7=1
            15-7=8
            22-7=15
            15-8=7
            22-15=7

            Execution Time: 3806 microseconds.

    (b)   Explain your implemented algorithm and its worst-case time complexity 
        After leaving off B1, then upload it to them of a vector. I then sort the vector using the c++ sort that is O(nlogn). Then using two nested loops, I found the difference of every value and using a binary search to see if that difference is in my sorted vector. The nested loops are O(n^2) and the Search is O(logn) so at the end it is O(n^2nlogn).