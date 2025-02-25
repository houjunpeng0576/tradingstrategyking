#define INVALID_HANDLE_VALUE   -1
#define _MAX_PATH           260 /* max. length of full pathname */

#define HANDLE              int
#define MAX_PATH            260
#define TRUE                true
#define FALSE               false
#define __stdcall
#define __declspec(x)
#define __cdecl
#define max(a, b)            (((a) > (b)) ? (a) : (b))
#define min(a, b)            (((a) < (b)) ? (a) : (b))

typedef int BOOL;
typedef unsigned char BYTE;
typedef float FLOAT;
typedef FLOAT *PFLOAT;
typedef char CHAR;
typedef unsigned char UCHAR;
typedef unsigned char *PUCHAR;
typedef short SHORT;
typedef unsigned short USHORT;
typedef unsigned short *PUSHORT;
typedef long LONG;
typedef unsigned short WORD;
typedef unsigned long DWORD;
typedef long long LONGLONG;
typedef unsigned long long ULONGLONG;
typedef ULONGLONG *PULONGLONG;
typedef unsigned long ULONG;
typedef int INT;
typedef unsigned int UINT;
typedef unsigned int *PUINT;
typedef void VOID;

typedef char *LPSTR;
typedef const char *LPCSTR;
typedef wchar_t WCHAR;
typedef WCHAR *LPWSTR;
typedef const WCHAR *LPCWSTR;
typedef unsigned long UINT_PTR;
typedef UINT_PTR SIZE_T;
typedef LONGLONG USN;
typedef BYTE BOOLEAN;
typedef void *PVOID;
typedef DWORD *LPDWORD;

typedef int INT;
typedef unsigned int UINT;
typedef unsigned int *PUINT;


typedef struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} FILETIME;

typedef union _ULARGE_INTEGER {
    struct {
        DWORD LowPart;
        DWORD HighPart;
    };
    struct {
        DWORD LowPart;
        DWORD HighPart;
    } u;
    ULONGLONG QuadPart;
} ULARGE_INTEGER,
        *PULARGE_INTEGER;
