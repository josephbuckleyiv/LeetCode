# LeetCode
2023/11/16
Increaing Decreasing String -- sort, erase(iterator), where iter is std::string::iterator.
Dijkstra -- we can start from a source, then just return array with distances once priority, queue is empty
3Sum (extrapolate to KSum) -- essentially turn into a two-sum and then 1-sum problem, how to deal with
                              repetitions?
Maximal Increasing Sum -- take care of i and j, loop through i and then increment j (where j is anterior pointer)
Hare and Tortoise pointer to reverse something.

2023/11/21
Priority Queue and Comparator review C++; comparator comparing two indices. N-Queens solutions with negative and
positive diagonal.

2023/11/28
Looks like you can count the occurrences of a character using std::count(str.begin(),str.end(), x);
Multiplicative recurse should set base value to 1; DUH!
Take care to modulo correctly to avoid signed int overflow on the Divisor Count problem.

2023/11/28
Check this -- https://www.geeksforgeeks.org/converting-number-to-string-in-cpp/ (send to stream and voila!)
uint32_t for unsigned.

2023/11/29
kthFactor -- sort(),unique(); Issue: how to properly pass vectors around in c++?

2023/12/05
When rounding integers, c++ rounds down.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

7/20/2024 -- MergedSortedArray, use auto k, remember when merging make a 2nd copy initially,
          -- this wille be very good for runtime, rather than doing "shifts."
          
7/21/2024 -- Minimum Size Subarray Sum. Very basic sliding window problem, main issue: corner cases,
          -- remember to initialize width to 1. Then deal with "no-hit" case as a corner case.
