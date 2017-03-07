# detect_endianess function details:
A function that determines whether a machine is big or little endian written in C. 

## Notes:

Uses an unsigned integer for bit manipulation & pointer casting.


Format to store multi-byte date types:


1. Big endian == Network byte order  

The most significant byte (MSB) is stored first at the smallest address byte and the following bits to the right are placed consecutively.

2. Little endian == Host byte order

The least significant byte (LSB) is stored first at the smallest address byte and the follwoing bits to the left are placed consecutively.


## Example

char example[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // a six byte string


```

Big endian format:
------------------
Byte address  | n    | n + 1 | n + 2 | n + 3 | n + 4 | n + 5 |
              ++++++++++++++++++++++++++++++++++++++++++++++
Byte content  | 0x48 | 0x65  | 0x6C  | 0x6C  | 0x6F  | 0x00  |        <--- Based on the ASCII table

			  | MSB  |                               | LSB   |


Little endian format:
------------------
Byte address  | n    | n + 1 | n + 2 | n + 3 | n + 4 | n + 5 |
              ++++++++++++++++++++++++++++++++++++++++++++++
Byte content  | 0x00 | 0x6F  | 0x6C  | 0x6C  | 0x65  | 0x48  |        <--- Based on the ASCII table

			  | LSB  |                               | MSB   |

```

## Interesting read:

Writing endian-independent code in C:

https://www.ibm.com/developerworks/aix/library/au-endianc/

## Reference

Part of this summary of notes were adapted from: 

http://cs-fundamentals.com/tech-interview/c/c-program-to-check-little-and-big-endian-architecture.php



