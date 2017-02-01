#ifndef WINIO_H
#define WINIO_H

// Define the various device type values.  Note that values used by Microsoft
// Corporation are in the range 0-32767, and 32768-65535 are reserved for use
// by customers.

#define FILE_DEVICE_WINIO 0x00008010

// Macro definition for defining IOCTL and FSCTL function control codes.
// Note that function codes 0-2047 are reserved for Microsoft Corporation,
// and 2048-4095 are reserved for customers.

#define WINIO_IOCTL_INDEX 0x810

// Define our own private IOCTL

#define IOCTL_WINIO_MAPPHYSTOLIN  CTL_CODE(FILE_DEVICE_WINIO,  \
                                  WINIO_IOCTL_INDEX,      \
                                  METHOD_BUFFERED,        \
                                  FILE_ANY_ACCESS)

#define IOCTL_WINIO_UNMAPPHYSADDR CTL_CODE(FILE_DEVICE_WINIO,  \
                                  WINIO_IOCTL_INDEX + 1,  \
                                  METHOD_BUFFERED,        \
                                  FILE_ANY_ACCESS)

#define IOCTL_WINIO_WRITEPORT     CTL_CODE(FILE_DEVICE_WINIO,  \
                                  WINIO_IOCTL_INDEX + 2,   \
                                  METHOD_BUFFERED,         \
                                  FILE_ANY_ACCESS)

#define IOCTL_WINIO_READPORT      CTL_CODE(FILE_DEVICE_WINIO,  \
                                  WINIO_IOCTL_INDEX + 3,   \
                                  METHOD_BUFFERED,         \
                                  FILE_ANY_ACCESS)

struct tagPhys32Struct
{
  HANDLE PhysicalMemoryHandle;
  ULONG dwPhysMemSizeInBytes;
  PVOID pvPhysAddress;
  PVOID pvPhysMemLin;
};

extern struct tagPhys32Struct Phys32Struct;

struct tagPort32Struct
{
  USHORT wPortAddr;
  ULONG dwPortVal;
  UCHAR bSize;
};

extern struct tagPort32Struct Port32Struct;

#endif
