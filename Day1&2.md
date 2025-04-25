## RISCV Basics
RISC-V is an open-source instruction set architecture (ISA) that defines how a processor executes instructions. It's designed to be modular, extensible, and customizable, allowing designers to create a wide range of processors for different applications.This course implements a RV32I pipelined cpu
### Types of RISCV instructions
- pseudo instructions - mv
- base integer instructions - RV64I
- multiply extension instruction - RV64M
- single and double precision floating point extension - RV64F & RV64D
- ABI instructions
- memory and stack pointer instructions
### ABI
- ABI - application binary interface
- one of the abstraction layers bw application program and hardware
- aka system call interface
- application programs have access to hardware resources through syscalls
- RISCV is little endian
Little vs big endian:
![little vs big endian](https://github.com/user-attachments/assets/05ac980e-bf8c-46db-a252-547a1e3c283e)
- The core has 32 register of width XLEN
- XLEN - 32 for RV32 arch, 64 for RV464 arch
- registers can be loaded 2 ways - immediate(direct), memory access
- address of word is the location of the byte 0
- register address widths are 5 bits; 2^5 = 32 ; 32 int registers in ISA
ABI registers:
![123235177-4258e780-d4f9-11eb-8308-e543d68b57f0](https://github.com/user-attachments/assets/0e0f387d-4f6b-491e-a736-d140cdb1e86c)
