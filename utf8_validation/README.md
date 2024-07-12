# directory utf8_validation by A.OTMANI
## Write a method that determines if a given data set represents a valid UTF-8 encoding.
1) Prototype: def validUTF8(data)
2) Return: True if data is a valid UTF-8 encoding, else return False
3) A character in UTF-8 can be 1 to 4 bytes long
4) The data set can contain multiple characters
5) The data will be represented by a list of integers
6) Each integer represents 1 byte of data, therefore you only need to handle the 8 least significant bits of each integer
