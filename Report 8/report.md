# Report

## Problem 1

![image.png](https://i.loli.net/2021/05/23/DHUVav4ehiN8jIC.png)

### Answer

a. Programmed I/O, Direct Memory Access

b. Head identifier, Track identifier, Sector identifier

c. Seek time, Rotational delay, Transfer time

d. Latency, Bandwidth

## Problem 2

![image.png](https://i.loli.net/2021/05/23/l8KLifUnFPh3B5D.png)

### Answer

1. device driver is told to transfer disk data to buffer at address X

2. device driver tells disk controller to transfer C bytes from disk to buffer at addrexx X

3. disk controller initiates DMA transfer

4. disk controller sends each byte to DMA controller

5. DMA controller transfers bytes to buffer X, increasing memory address and decreasing C until 0

6. When C = 0, DMA interrupts CPU to signal transfer completion

## Problem 3

![image.png](https://i.loli.net/2021/05/23/l8KLifUnFPh3B5D.png)

### Answer

Since SSTF scheduling is a form of SJF scheduling, if a request is far from current head, it may not get schedule forever. In this circumstance the job starves.

## Problem 4

![image.png](https://i.loli.net/2021/05/23/QMduxSA863gIi7k.png)

### Answer

#### a)

##### (1)

100, 120, 20, 30, 60, 70 , 90

##### (2)

100 ----> 120  20ms

120 ----> 20 100ms

20 ----> 30   10ms

30 ----> 60   30ms

60 ----> 70   10ms  

70 ----> 90   20ms

20 + 100 + 10 + 30 + 10 + 20 = 190 ms

#### b)

FCFS. Because SSDs do not have moving parts and therefore performance is insensitive to issues such as seek time and rotational latency.  