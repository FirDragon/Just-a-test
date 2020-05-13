#include <ntddk.h>
static VOID DriverUnload(PDRIVER_OBJECT Driver);

NTSTATUS DriverEntry(PDRIVER_OBJECT Driver, PUNICODE_STRING Path) {
	UNREFERENCED_PARAMETER(Path);
	Driver->DriverUnload = DriverUnload;

	KdPrint(("This is a test!"));

	return STATUS_SUCCESS;
}

VOID DriverUnload(PDRIVER_OBJECT Driver) {
	UNREFERENCED_PARAMETER(Driver);
}