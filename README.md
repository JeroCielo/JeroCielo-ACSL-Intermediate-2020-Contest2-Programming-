# JeroCielo-ACSL-Intermediate-2020-Contest2-Programming-
JeroCielo/ACSL-Intermediate-2020-Contest2-Programming Solution (there are other ways)
I used multiple vectors (using pairs was probably a better idea).
You can use string groups or other thing..

<br><br/>
# Problem:
Transform a given string of all capital letters so that repeated blocks of letters are at the front, arranged such that longer blocks come first and blocks of the same length are in alphabetical order. Each string has an associated number, m. In the final output, all groupings of the same character must be no longer than m. Other than sorting the groups of letters that have the same frequency in the original string, no other rearranging is done.
<br><br/>
For example, in the input line “MBAMMDXXMMMGGMMZ 3”, the string contains one block of 3 letters (the M’s); four blocks of 2 letters (M, X, G, and M), and 5 single letters (M, B, A, D, and Z). The 3-letter block comes first, then the 2-letter blocks (in alphabetical order), and finally, the single letters (in alphabetical order): MMMGGMMMMXXABDMZ. The number 3 requires that there is no substring of a single letter that is longer than 3 characters. In this example, MMMGGMMMXXABDMZ is output.
