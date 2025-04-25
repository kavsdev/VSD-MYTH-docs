## Digital logic with TLVerilog and Makerchip
### TLVerilog
TL-Verilog is an extension to SystemVerilog that facilitates transaction-level design, a methodology for designing digital systems at a higher level of abstraction than traditional Register Transfer Level (RTL). Instead of focusing on individual register transfers, TL-Verilog allows designers to model the flow of "transactions" through a system, such as data packets or machine instructions, and associate logic with these transactions. This approach simplifies the design process and improves design productivity. 

Advantages of TLVerilog:
- TL-Verilog abstracts away the detailed timing and implementation details of individual logic gates, allowing designers to focus on the functional behavior of the system
- The core concept is the "transaction," an entity that moves through the system, such as a packet or an instruction. Logic can be associated with the transaction's flow
- TL-Verilog enables faster design iterations and easier maintenance of complex systems by allowing designers to work at a higher level of abstraction
## Pythagoras theorem
![Pasted image 20250420112039](https://github.com/user-attachments/assets/d3785979-75f7-404a-b573-96e292df47ac)

can use `>>n$varilable_name` to access its value from previous slide
## calculator
![image](https://github.com/user-attachments/assets/265bce72-46e7-4b98-9e33-b2cddfec084c)

Need to explicitly declare the vector size for variables in LHS

## pipelining
- TLverilog helps separate the function that is being performed and the implementation of it (functionality, implementation decoupled)
- TLverilog uses timing abstract modelling
- TLverilog uses strict naming symantics

## validity
- validity - notion of when values of signals are meaningful
- `?$valid` = `when($valid)` (indent what needs to be in the valid block)
syntax:
![image](https://github.com/user-attachments/assets/d079f018-9c1f-4808-952f-72e7e8225c6c)

## clock gating
uses notion of validity when circuit is holding something meaningful. this can be used to know if clock needs to be provided at that time
clock gating:
![Pasted image 20250420204225](https://github.com/user-attachments/assets/7c22d5cb-3071-4456-8ad0-7009a139b28f)
