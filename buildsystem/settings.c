#include "settings.h"

//MAIN-SYS-EXECS
char* C_Compiler = "gcc";
char* CPP_Compiler = "g++";
char* Linker = "ld";

//ARCH-EXECS
char* Cross_C_Compiler = NULL;
char* Cross_CPP_Compiler = NULL;
char* Cross_Linker = NULL;

//IMAGE DATA
char* Image_Name = "OS.hdd";

extern unsigned char Config = I686_BIOS;

//MBR PARTTABLE IDS
unsigned char PartID1 = 0;
unsigned char PartID2 = 0;
unsigned char PartID3 = 0;
unsigned char PartID4 = 0;

//UEFI
char* EFI_COMPILER = X86_MINGW32;

void InitilizeBuild()
{
    if (Config == I686_BIOS || Config == I686_UEFI)
    {
        Cross_C_Compiler = (char*)malloc(strlen(I686_GCC));
        Cross_CPP_Compiler = (char*)malloc(strlen(I686_GPP));
        Cross_Linker = (char*)malloc(strlen(I686_LD));
        strcpy(Cross_C_Compiler,I686_GCC);
        strcpy(Cross_CPP_Compiler,I686_GPP);
        strcpy(Cross_Linker,I686_LD);
    }
}
void DeinitilizeBuild()
{
    free(Cross_C_Compiler);
    free(Cross_CPP_Compiler);
    free(Cross_Linker);
}