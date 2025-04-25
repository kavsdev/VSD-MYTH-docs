## Pipelined RISCV micoarchitecture
### Hazards in this design when pipelining
- control hazard - taken branches alter the PC
- data hazard - RAW, source data of the 2nd instruction is the destination for the 1st instruction
-mitigate by using concept of valid cycles, data forwarding (register file bypass)

![image](https://github.com/user-attachments/assets/62d5b937-cd8d-49c2-b7d0-48772ed1c647)

### Pipelining
increase pipeline stages from 3 to 5, this lets us overlap instrucions each cycle unlike previous 3 cycle offset between instructions

### Load store
memory access instrutions are not feasible in a single cycle.
need to offset by 2 cycles for the load/ store to occur and stall the other isntructions. this is done by extending the `$valid` logic.

## Jumps
jumps are unconditional branches, most of the logic is similar to branch logic

## Testing
The sumto9 program written in day 1 is converted to assembly and its execution is cheked in the visualiser. 
Sum is stored and loaded from memory to check the functionality of the Load and Store logic.
