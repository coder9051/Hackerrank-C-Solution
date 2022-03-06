# Playing With Characters

The low success rate on this is because many people did this way:

```c
scanf("%c", &ch);
scanf("%s", &s);
scanf("%[^\n]%*c", &sen);
```
This will not work because the final statement will read a newline character from the previous line. you can fix this by changing the third statement to:

```c
scanf("%c", &ch);
scanf("%s", &s);
scanf(" %[^\n]%*c", &sen);
```
The space in the beginning of the format string tells it to ignore the newline character from the previous line (newlines are considered whitespace here)

Alternatively, and likely a little more clean, you can add the ignore character statement to the first two lines, which will get rid of the newline characters from them allowing the read line statement to work correctly.

```c
scanf("%c%*c", &ch);
scanf("%s%*c", &s);
scanf("%[^\n]%*c", &sen);
```
