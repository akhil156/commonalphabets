Print common characters of two Strings in alphabetical order

The idea is to use character count arrays.

1) Count occurrences of all characters from ‘a’ to ‘z’ in first and second strings.
Store these counts in two arrays a1[] and a2[].
2) Traverse a1[] and a2[] (Note size of both is 26).
For every index i, print character ‘a’ + i number of times equal min(a1[i], a2[i]).
