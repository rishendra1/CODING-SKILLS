/*
===================================================
             STRING NOTES IN C
===================================================

1. Definition of String
---------------------------------------------------
- A string is a collection of characters terminated 
  by the null character '\0'.
- Example Declaration:
    char str[20];     // stores up to 19 chars + '\0'

2. Initialization of Strings
---------------------------------------------------
    char str[20] = "hello dear";
    char str[20] = {'h','e','l','l','o','\0'};
    char *str = "hello dear";

3. ASCII Values
---------------------------------------------------
    'A' = 65 , 'Z' = 90
    'a' = 97 , 'z' = 122
    Difference between uppercase and lowercase = 32

4. Input / Output of Strings
---------------------------------------------------
scanf("%s", str);
    -> Reads only one word (stops at space)

scanf("%[^\n]", str);
    -> Reads input until newline (accepts spaces)

gets(str);
    -> Reads full line (deprecated/unsafe)

fgets(str, size, stdin);
    -> Safe method for reading strings with spaces

5. Important String Functions (string.h)
---------------------------------------------------
1. strlen(str)        → returns length of string
2. strcpy(s1, s2)     → copies s2 into s1
3. strcat(s1, s2)     → concatenates s2 to s1
4. strcmp(s1, s2)     → compares two strings
                        returns <0, 0, >0
5. strrev(str)        → reverses string 
                        (non-standard in GCC)
6. strncmp(s1,s2,n)   → compares first n chars
7. strncpy(s1,s2,n)   → copies first n chars

6. Special String Problems
---------------------------------------------------
(a) Toggle Case
    - Convert uppercase → lowercase
    - Convert lowercase → uppercase
    - Uses ASCII difference of 32

(b) Count Unique Characters
    - Use frequency array for a–z
    - Count how many characters appear at least once

(c) Pangram Check
    - A string is a pangram if it contains 
      all 26 letters at least once
    - Example: "The quick brown fox jumps over a lazy dog"

(d) Anagram Check
    - Two strings are anagrams if their 
      characters and frequencies match

(e) Minimum Deletions for Palindrome
    - For a string to be rearranged into a palindrome:
        → At most ONE character can have odd frequency
    - Answer = oddCount - 1

7. Examples
---------------------------------------------------
printf("%.5s", str);   → prints first 5 chars
printf("%s", str+3);   → prints string from index 3
---------------------------------------------------
*/
