# This is a Read File example in C  
  
#### COMPILE WITH GCC TESTED  

    gcc -m64 -Os -static main.c -o test -s  

#### NOTES  
  
The binary file is included for those who do not have a test file to work with. I included the assembly file I used in my YT video in order to create that file, in case you want to create it yourself. I used FASM in windows. The assembly code is also compatible with NASM.  
  
NASM : nasm main.asm -o main.bin  
FASM : fasm main.asm  
  
Now for the Bad news for linux users : Unfortunately, linux doesn't have ASCII support AT ALL. Not even XTERM can show Extended ASCII. Only way to show the extended ASCII text ( 128 - 255 ) is to add UNICODE support. And that is a lot more code then is worth it for this test demo. This is why I prefer Windows for my programming OS. It has everything needed. Linux does not.  
  