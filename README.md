I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life. Write a function that produces output according to a format - Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Education is when you read the fine print. Experience is what you get if you don't. Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
With a face like mine, I do better in print - Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary
What one has not experienced, one will never understand in print - Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Nothing in fine print is ever good news - Use a local buffer of 1024 chars in order to call write as little as possible.

My weakness is wearing too much leopard print - Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print - Handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
The big print gives and the small print takes away - Handle the following flag characters for non-custom conversion specifiers:

'+'
'space'
'#'
Sarcasm is lost in print - Handle the following length modifiers for non-custom conversion specifiers:

l
h Conversion specifiers to handle: d, i, u, o, x, X
Print some money and give it to us for the rain forests - Handle the field width for non-custom conversion specifiers.

The negative is the equivalent of the composer's score, and the print the performance - Handle the precision for non-custom conversion specifiers.

It's depressing when you're still around and your albums are out of print - Handle the 0 flag character for non-custom conversion specifiers.

Print is the sharpest and the strongest weapon of our party - r : prints the reversed string

The flood of print has turned reading into a process of gulping rather than savoring - R: prints the rot13'ed string

All the above options work well together.
