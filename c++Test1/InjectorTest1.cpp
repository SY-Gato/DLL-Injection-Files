#include <Windows.h>
#inckude <TlHelp32.h>

int getProcId(const wchar_t* target) {
  DWORD pID = 0;
  PROCESSENTRY32 pe32;
  pe32.dwSize = sizeof(PROCESSENTRY32);
  HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
}
