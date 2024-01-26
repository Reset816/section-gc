void unused_function() {
    return;
}

int main() {
    asm(".pushsection .section_A_should_not_GC,\"a\",@progbits\n"
        "        .string \"hello riscv\"\n"
        ".popsection");
    return 0;
}
