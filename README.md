## ALX SE Program
 Project: 0x11. C - printf
 By Julien Barbier, co-founder & CEO

### Custom printf function
A custom printf function that mirrors the standard library function **printf**

### To run the function _printf
### clone repo
```
git clone https://github.com/M-kip/printf.git
```
### Compile the file with the following command
```
 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
### run executable
```
./a.out
```
|FILES | DESCRIPTION|
|------|------------|
| _printf.c | Main file that drives the custom printf function|
| main.h | header file containing the helper function declarations|
| print_i.c | prints integers ( convert integer to string rep) |
| print_b.c | prints binary ( convert an integer to binary rep) |
| _print_spec_func.c | Holds the functions that print a character and a string |
| print_hex.c | prints hexadecimal upper  |
| print_hex_low.c | print hexadecimal in lower |
| print_oct.c | prints octal ( converts an integer to octal rep ) |
| print_u.c | prints unsigned integer ( converts to string rep ) |
| ret_position.c | skips the white spaces in the format string |
| _strcat.c | concantenate to strings |
| _strcpy.c | copies src string to dest string |
| _strlen.c | returns the lenght of a string |
| rot13.c | encrypts a string using rot13 method |

### format capabilities
Character: %c
Strings: %s
Signed integers: %d
Signed decimal intergers: %i
Unsigned integers: %u
Hex (lower and upper): %x and %X
Octal: %o
Binary: %b
ROT13: %R
Reverse String: %r

### Running Examples
The test folder has the **main.c** for proof of concept

```
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
### main.c function stdout image
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```