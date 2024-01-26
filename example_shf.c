void unused_function() {
    return;
}

int main() {
    asm("Section_Pusher_Symbol:\n");
    asm(".pushsection .should_not_GC,\"ao\",@progbits,Section_Pusher_Symbol\n"
        ".popsection");
    return 0;
}
