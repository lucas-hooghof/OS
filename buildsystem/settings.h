#pragma once

#include <stdlib.h>
#include <string.h>

#define NULL (void*)0

#define I686_GCC "i686-elf-gcc"
#define I686_GPP "i686-elf-g++"
#define I686_LD  "i686-elf-ld"

#define I686_ARCH 0
#define X64_ARCH  1 

#define BIOS_BOOT 0
#define UEFI_BOOT 1

#define X86_MINGW32 "x86_64-w64-mingw32-gcc"

#define I686_BIOS 0
#define I686_UEFI 1
#define X64_BIOS  2
#define X64_UEFI  3



//MAIN-SYS-EXECS
extern char* C_Compiler;
extern char* CPP_Compiler;
extern char* Linker;

//ARCH-EXECS
extern char* Cross_C_Compiler;
extern char* Cross_CPP_Compiler;
extern char* Cross_Linker;

//IMAGE DATA
extern char* Image_Name;

//CONFIG
extern unsigned char Config;

//MBR PARTTABLE IDS
extern unsigned char PartID1;
extern unsigned char PartID2;
extern unsigned char PartID3;
extern unsigned char PartID4;

//UEFI
extern char* EFI_COMPILER;

void InitilizeBuild();
void DeinitilizeBuild();