# report

## Problem 1

+ Consider a really simple filesystem, cs302fs, where each inode only has 10 direct pointers, each of which can point to a single file block. Direct pointers are 32 bits in size (4 bytes). What is the maximum file size for cs302fs?

### Answer

Assume the filesystem blocks are 4 KBytes.

The maximum cs302fs file size is 10 x 4 KByte = 40 KByte

## Problem 2

+ Consider a filesystem, called extcs302fs, with a construct called an extent. Extents have a pointer (base address) and a length (in blocks). Assume the length field is 8 bits (1 byte). Assuming that an inode has exactly one extent. What is the maximum file size for extcs302fs?

### Answer

Assume the filesystem blocks are 4 KBytes.

The maximum extcs302fs file size is (28 – 1) x 4 KByte = 255 x 4 KByte = 1 MByte

## Problem 3

+ Consider a filesystem that uses direct pointers, but also adds indirect pointers and double-indirect pointers. We call this filesystem, indcs302fs. Specifically, an inode within indcs302fs has 1 direct pointer, l indirect pointer, and 1 doubly-indirect pointer field. Pointers, as before, are 4 bytes (32 bits) in size. What is the maximum file size for indcs302fs?
   
### Answer

Assume the filesystem blocks are 4 KBytes.

The maximum indcs302fs file size is (1 + 1024 + (1024 x 1024)) x 4 KByte = 4 GB + 4100 KByte


## Reference

https://cs162.org/static/exams/fa16-mt3-solutions.pdf