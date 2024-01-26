void unused_function() {
    return;
}

int main() {
    asm(".attach_to_group \"MyGroup\"");
    asm(".attach_to_group \"MyGroup\"");

    asm(".pushsection .should_not_GC,\"aG\",@progbits,\"MyGroup\"\n"
        "        .string \"hello riscv\"\n"
        ".popsection");
    return 0;
}
