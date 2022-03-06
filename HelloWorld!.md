# Hello World! in C

## Note
scanf() function reads(!) the input. The given format specifier is a bit complex for such a beginner project but here goes the explanation:

"%[^\n]%*c" is the format; % begins a new conversion specification %[set] accepts the characters in the set definition. this is similar to regular expressions, so set can be a-z, 0-9, etc. In this case, since set starts with ^ character, just like in regexps, it is the inverse of the set, so all characters NOT in the set are matched. Therefore, %[^\n] matches a string of characters not including the \n (new line) character.

The next matcher is %*c: %c is for matching a single character. But with a * specifier, it is not assigned to a resulting parameter, so the value is simply ignored. Remember in the first matcher we matched until a \n character is encountered. So this is the step we are skipping that one.
