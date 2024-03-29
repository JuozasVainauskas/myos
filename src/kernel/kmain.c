#include "headers/io.h"
#include "headers/gdt.h"
#include "headers/pic.h"
#include "headers/interrupt.h"

int kmain() {
    gdt_init();
    pic_init();
    idt_init();

    char output[] = "Text_";
    io_clear_screen();
    io_set_color(BLACK, LIGHT_GREY);
    io_print_str(output);
    io_delete_char();
    return 0;
}
