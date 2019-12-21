####Insertion sort & Text search

## (Programming_Systems_HW3)

This program implements insertion sort and text search.

### Insertion sort
The first part of the program implements insertion sort  using "shift_element". "shift_element" is a function that simpely shifts the array elements one position right.
The "insertion_sort" gets 50 intigers, sorts it and prints it to the screen with comma beween every number.

### Text search
The second part of the program has two main functions:
1. Prints all of line with the searced word.
2. Prints all of the similar words with a diffrence of up to two letters.
The program receivs a word as a String and a text paragraph and could execute one of the two functions from the above.
These functions use the functions:
1."getline" - gets the text and returns the amount the characters in the geven String.
2. "getword" - gets the String word and returns the amount of the characters int the geven String.
3. "substring" - check if one string is a sub string of another
4. "similar" - checks if two given strings are similar
5. "print_lines" - gets the searched word and the text and prints the lines that the word appears in.
6. "print_similar_Words" - gets the searched word and the text and prints the similar words.
