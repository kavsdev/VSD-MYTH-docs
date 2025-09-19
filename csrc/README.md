# RISC-V C Programs and Assembly Projects

This directory contains several small C programs and one assembly file written for RISC-V, compiled using the `riscv64-unknown-elf-gcc` toolchain. Programs can be run using the RISC-V simulator `spike`, and binaries can be inspected using `objdump`.

## Files in this Directory

```
.
├── ABIsum1toN.c          # Uses ABI calling conventions with sum logic
├── load.S                # Assembly file used with ABIsum1toN.c
├── sum1toc.c             # Basic C program to sum numbers from 1 to N
├── unsighedHighest.c     # Program to find highest unsigned number (likely contains a typo in filename)
```

---

## Prerequisites

Ensure the following tools are installed and available in your PATH:

- `riscv64-unknown-elf-gcc`
- `riscv64-unknown-elf-objdump`
- `spike`
- `pk` (proxy kernel for `spike`)
- `gedit` (optional, for editing)
- `nautilus` (optional, for file browsing)

---

## 1. `sum1toc.c`

### Description:
Simple C program to compute the sum of numbers from 1 to N.

### Compile for native execution (x86-64):

```bash
gcc sum1toc.c -o sum1toc
./sum1toc
```

### Compile for RISC-V:

```bash
riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o sum1toc.o sum1toc.c
```

### Run using spike:

```bash
spike pk sum1toc.o
```

### Inspect binary:

```bash
riscv64-unknown-elf-objdump -d sum1toc.o | less
```

---

## 2. `unsignedHighest.c`

### Description:
Program to demonstrate behavior of unsigned integers.

### Compile & run on spike:

```bash
riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o unsignedHighest.o unsighedHighest.c
spike pk unsignedHighest.o
```

---

## 3. `ABIsum1toN.c` with `load.S`

### Description:
Demonstrates ABI usage with RISC-V C and assembly interworking.

### Compile:

```bash
riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o ABIsum1toN.o ABIsum1toN.c load.S
```

### Run:

```bash
spike pk ABIsum1toN.o
```

### Inspect binary:

```bash
riscv64-unknown-elf-objdump -d ABIsum1toN.o | less
```

---

## Debugging & Analysis

### View assembly output:

```bash
riscv64-unknown-elf-objdump -d sum1toc.o > sum1toc.assembly
gedit sum1toc.assembly &
```

### Run spike in debug mode:

```bash
spike -d pk sum1toc.o
```

This will launch the simulator in interactive debug mode, allowing you to step through instructions.

---

## General Notes

- To open files in a GUI editor:
  ```bash
  gedit filename.c &
  ```
- To open the directory in a file browser:
  ```bash
  nautilus .
  ```

---

## Extra Tips

- Make sure `load.s` is capitalized to `load.S` to be correctly processed as assembly:
  ```bash
  mv load.s load.S
  ```
- If using `*.v` files or Verilog simulation, you may want to filter them:
  ```bash
  ls | grep .v
  ```

---

## Cleanup

To remove compiled binaries:

```bash
rm *.o sum1toc unsignedHighest ABIsum1toN
```
