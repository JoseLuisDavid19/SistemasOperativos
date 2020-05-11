#!/bin/sh
echo "Build"
bcc -ansi -c -o kernel.o kernel.c. 
echo "As68 link"
as86 kernel.asm -o kernel_asm.o 
echo "ld86 kernel"
ld86 -o kernel -d kernel.o kernel_asm.o 
echo "Move with dd"
dd if=kernel of=floppya.img bs=512 conv=notrunc seek=3