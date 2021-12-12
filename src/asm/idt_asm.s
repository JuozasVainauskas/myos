global idt_load_and_set

section .text

idt_load_and_set:
    mov eax, [esp+4]
    lidt [eax]     ; load the IDT into the processor
    ret