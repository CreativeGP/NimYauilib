/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/usr/lib/nim -o /home/cgp/Develop/hexe/src/nimcache/sdl.o /home/cgp/Develop/hexe/src/nimcache/sdl.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef union Event_NT5PKfaL3rfxfEzQMihptw Event_NT5PKfaL3rfxfEzQMihptw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Commoneventobj_Py5pzTaMjgDVBExbdXgKFw Commoneventobj_Py5pzTaMjgDVBExbdXgKFw;
typedef struct Displayeventobj_o9aNCNNLJGpafAjzCvXPr9bQ Displayeventobj_o9aNCNNLJGpafAjzCvXPr9bQ;
typedef struct Windoweventobj_rMipjZiVKVw28sNceqYxuw Windoweventobj_rMipjZiVKVw28sNceqYxuw;
typedef struct Keyboardeventobj_WuAAw9ayJbtiDi4R7X4BCGg Keyboardeventobj_WuAAw9ayJbtiDi4R7X4BCGg;
typedef struct Keysym_9a7STppugJenQmkMcY19cH3Q Keysym_9a7STppugJenQmkMcY19cH3Q;
typedef struct Texteditingeventobj_e6ZJQWpPOV6fnjwVjk5xgA Texteditingeventobj_e6ZJQWpPOV6fnjwVjk5xgA;
typedef struct Textinputeventobj_tHQnpSrdZWXcabc9bAFnwRw Textinputeventobj_tHQnpSrdZWXcabc9bAFnwRw;
typedef struct Mousemotioneventobj_tZGG3QElMSQMOtOR8FJigA Mousemotioneventobj_tZGG3QElMSQMOtOR8FJigA;
typedef struct Mousebuttoneventobj_PxG4Y9a9a6jhcvRxaljjNzeQ Mousebuttoneventobj_PxG4Y9a9a6jhcvRxaljjNzeQ;
typedef struct Mousewheeleventobj_24an2OH9cfintND7OMGXOSQ Mousewheeleventobj_24an2OH9cfintND7OMGXOSQ;
typedef struct Joyaxiseventobj_uw0t0u3f9aJ7lIVO6Wnqymw Joyaxiseventobj_uw0t0u3f9aJ7lIVO6Wnqymw;
typedef struct Joyballeventobj_dHtVw1L6fOcI49amm024iEA Joyballeventobj_dHtVw1L6fOcI49amm024iEA;
typedef struct Joyhateventobj_BqMeXjQ3abTp1BlbS87UdQ Joyhateventobj_BqMeXjQ3abTp1BlbS87UdQ;
typedef struct Joybuttoneventobj_9bGpcZV0ba7ad7sSX9amCLoA Joybuttoneventobj_9bGpcZV0ba7ad7sSX9amCLoA;
typedef struct Joydeviceeventobj_SYmzvnnMg54mt6meeDFSkA Joydeviceeventobj_SYmzvnnMg54mt6meeDFSkA;
typedef struct Controlleraxiseventobj_vg7gTG2sYTlHKVi9cFTwdsQ Controlleraxiseventobj_vg7gTG2sYTlHKVi9cFTwdsQ;
typedef struct Controllerbuttoneventobj_JCI9aJswV5pbR8GVeDUZrNw Controllerbuttoneventobj_JCI9aJswV5pbR8GVeDUZrNw;
typedef struct Controllerdeviceeventobj_jk3khyfKZsFOx3t82Bt35w Controllerdeviceeventobj_jk3khyfKZsFOx3t82Bt35w;
typedef struct Audiodeviceeventobj_lKePD4FKNrK75bdZWniACg Audiodeviceeventobj_lKePD4FKNrK75bdZWniACg;
typedef struct Sensoreventobj_lp752bOrZO44FrW3ymBYAw Sensoreventobj_lp752bOrZO44FrW3ymBYAw;
typedef struct Quiteventobj_n6QwLLEF9bwOze4qnKxoljw Quiteventobj_n6QwLLEF9bwOze4qnKxoljw;
typedef struct Usereventobj_MAwVQs0rbcBcQG1VsjHA0g Usereventobj_MAwVQs0rbcBcQG1VsjHA0g;
typedef struct Syswmeventobj_VLLtsWkCWXlheVKlFOIbBQ Syswmeventobj_VLLtsWkCWXlheVKlFOIbBQ;
typedef struct Touchfingereventobj_0pz0iUmZZJ16fvpG3ojijA Touchfingereventobj_0pz0iUmZZJ16fvpG3ojijA;
typedef struct Multigestureeventobj_KibL9byWrTBFbr9aPdCqKbew Multigestureeventobj_KibL9byWrTBFbr9aPdCqKbew;
typedef struct Dollargestureeventobj_XphXvfWOgSZ6i7xklGuhyA Dollargestureeventobj_XphXvfWOgSZ6i7xklGuhyA;
typedef struct Dropeventobj_LKqmsykaSvleoOUXbYvFvQ Dropeventobj_LKqmsykaSvleoOUXbYvFvQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(int, TY_qLs9bEMEYHZYOeFIf1LOpoQ) (NU32 flags0);
typedef N_CDECL_PTR(NCSTRING, TY_09bvyvHFtWbkzL5AHgf0bKw) (void);
typedef N_CDECL_PTR(void*, TY_hKarI59cLAeI0v1WuQhCZ9ag) (NCSTRING title0, int x0, int y0, int w0, int h0, NU32 flags0);
typedef N_CDECL_PTR(void*, TY_jPHHnsvDYo8Q3NQemQIGWg) (void* window0, int index0, NU32 flags0);
typedef N_CDECL_PTR(int, TY_buOIiiD42E5nxpbw32t0bA) (void* renderer0, NU8 r0, NU8 g0, NU8 b0, NU8 a0);
typedef N_CDECL_PTR(int, TY_15yOfscvzUa4fkCceQZeBg) (Event_NT5PKfaL3rfxfEzQMihptw* event0);
typedef NI32 Logcategory_53rE8px7tkZw1h4eKH19b6A;
typedef N_CDECL_PTR(void, TY_PWALQuLZ8UDZbXEqot0bSw) (Logcategory_53rE8px7tkZw1h4eKH19b6A category0, NCSTRING fmt0, ...);
typedef NI32 Keycode_4JhAkMHsSpfaaoatfOE3Lw;
typedef NU8 Tnimkind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p0);
struct  TNimType  {
NI size;
Tnimkind_jIBKr1ejBgsfM33Kxw4j7A kind;
Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef N_CDECL_PTR(void, TY_32w2ZypAyMWuajvi2Jt79cg) (void* renderer0);
typedef N_CDECL_PTR(void, TY_ln4kdL5W9bbX4a1xl8nnVXQ) (void);
typedef N_CDECL_PTR(int, TY_fbYpjfe38x3ujjAmVRbI1Q) (void* renderer0);
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI32 Eventkind_EsZhlcfytIsxALaI7nZ2OQ;
struct  Commoneventobj_Py5pzTaMjgDVBExbdXgKFw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
};
struct  Displayeventobj_o9aNCNNLJGpafAjzCvXPr9bQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 display;
NU8 event;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI32 data1;
};
typedef NU8 Windoweventid_A0bhkjGAhyRjY4uTwWUqzw;
struct  Windoweventobj_rMipjZiVKVw28sNceqYxuw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
Windoweventid_A0bhkjGAhyRjY4uTwWUqzw event;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI32 data1;
NI32 data2;
};
typedef NI32 Scancode_pV4uroLoxCNb1YXcIzhICw;
struct  Keysym_9a7STppugJenQmkMcY19cH3Q  {
Scancode_pV4uroLoxCNb1YXcIzhICw scancode;
Keycode_4JhAkMHsSpfaaoatfOE3Lw sym;
NU16 mods;
NU32 unused;
};
struct  Keyboardeventobj_WuAAw9ayJbtiDi4R7X4BCGg  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NU8 state;
NU8 repeat;
NU8 padding2;
NU8 padding3;
Keysym_9a7STppugJenQmkMcY19cH3Q keysym;
};
typedef NIM_CHAR TY_x9aRkN8DVcTBDUl3hEPJutg[32];
struct  Texteditingeventobj_e6ZJQWpPOV6fnjwVjk5xgA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
TY_x9aRkN8DVcTBDUl3hEPJutg text;
NI32 start;
NI32 length;
};
struct  Textinputeventobj_tHQnpSrdZWXcabc9bAFnwRw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
TY_x9aRkN8DVcTBDUl3hEPJutg text;
};
struct  Mousemotioneventobj_tZGG3QElMSQMOtOR8FJigA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NU32 which;
NU32 state;
NI32 x;
NI32 y;
NI32 xrel;
NI32 yrel;
};
struct  Mousebuttoneventobj_PxG4Y9a9a6jhcvRxaljjNzeQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NU32 which;
NU8 button;
NU8 state;
NU8 clicks;
NU8 padding1;
NI32 x;
NI32 y;
};
typedef NI32 Mousewheeldirection_s5b18B0UfQKsO06UCJDCvw;
struct  Mousewheeleventobj_24an2OH9cfintND7OMGXOSQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NU32 which;
NI32 x;
NI32 y;
Mousewheeldirection_s5b18B0UfQKsO06UCJDCvw direction;
};
struct  Joyaxiseventobj_uw0t0u3f9aJ7lIVO6Wnqymw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
NU8 axis;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI16 value;
NU16 padding4;
};
struct  Joyballeventobj_dHtVw1L6fOcI49amm024iEA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
NU8 ball;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI16 xrel;
NI16 yrel;
};
typedef NU8 Hatposition_Z9a9bEuYcdzJUSJdyWutBRtQ;
struct  Joyhateventobj_BqMeXjQ3abTp1BlbS87UdQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
NU8 hat;
Hatposition_Z9a9bEuYcdzJUSJdyWutBRtQ value;
NU8 padding1;
NU8 padding2;
};
struct  Joybuttoneventobj_9bGpcZV0ba7ad7sSX9amCLoA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
NU8 button;
NU8 state;
NU8 padding1;
NU8 padding2;
};
struct  Joydeviceeventobj_SYmzvnnMg54mt6meeDFSkA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
};
typedef NU8 Gamecontrolleraxis_rfs85p6FSkdgRbf9aaewgHg;
struct  Controlleraxiseventobj_vg7gTG2sYTlHKVi9cFTwdsQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
Gamecontrolleraxis_rfs85p6FSkdgRbf9aaewgHg axis;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI16 value;
NU16 padding4;
};
typedef NU8 Gamecontrollerbutton_LJjI8O9bqAQ2hoT8I9bKN2dw;
struct  Controllerbuttoneventobj_JCI9aJswV5pbR8GVeDUZrNw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
Gamecontrollerbutton_LJjI8O9bqAQ2hoT8I9bKN2dw button;
NU8 state;
NU8 padding1;
NU8 padding2;
};
struct  Controllerdeviceeventobj_jk3khyfKZsFOx3t82Bt35w  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
};
struct  Audiodeviceeventobj_lKePD4FKNrK75bdZWniACg  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 which;
NU8 iscapture;
NU8 padding1;
NU8 padding2;
NU8 padding3;
};
typedef float TY_bcCZD120ZH4XloSsubkq6w[6];
struct  Sensoreventobj_lp752bOrZO44FrW3ymBYAw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI32 which;
TY_bcCZD120ZH4XloSsubkq6w data;
};
struct  Quiteventobj_n6QwLLEF9bwOze4qnKxoljw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
};
struct  Usereventobj_MAwVQs0rbcBcQG1VsjHA0g  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NU32 windowid;
NI32 code;
void* data1;
void* data2;
};
struct  Syswmeventobj_VLLtsWkCWXlheVKlFOIbBQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
void* msg;
};
struct  Touchfingereventobj_0pz0iUmZZJ16fvpG3ojijA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI64 touchid;
NI64 fingerid;
float x;
float y;
float dx;
float dy;
float pressure;
};
struct  Multigestureeventobj_KibL9byWrTBFbr9aPdCqKbew  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI64 touchid;
float dtheta;
float ddist;
float x;
float y;
NU16 numfingers;
NU16 padding;
};
struct  Dollargestureeventobj_XphXvfWOgSZ6i7xklGuhyA  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NI64 touchid;
NI64 gestureid;
NU32 numfingers;
float error;
float x;
float y;
};
struct  Dropeventobj_LKqmsykaSvleoOUXbYvFvQ  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
NU32 timestamp;
NCSTRING file;
NU32 windowid;
};
typedef NU8 TY_sH9avbK619blGCGFZhgSDaWg[56];
union  Event_NT5PKfaL3rfxfEzQMihptw  {
Eventkind_EsZhlcfytIsxALaI7nZ2OQ kind;
Commoneventobj_Py5pzTaMjgDVBExbdXgKFw common;
Displayeventobj_o9aNCNNLJGpafAjzCvXPr9bQ display;
Windoweventobj_rMipjZiVKVw28sNceqYxuw window;
Keyboardeventobj_WuAAw9ayJbtiDi4R7X4BCGg key;
Texteditingeventobj_e6ZJQWpPOV6fnjwVjk5xgA edit;
Textinputeventobj_tHQnpSrdZWXcabc9bAFnwRw text;
Mousemotioneventobj_tZGG3QElMSQMOtOR8FJigA motion;
Mousebuttoneventobj_PxG4Y9a9a6jhcvRxaljjNzeQ button;
Mousewheeleventobj_24an2OH9cfintND7OMGXOSQ wheel;
Joyaxiseventobj_uw0t0u3f9aJ7lIVO6Wnqymw jaxis;
Joyballeventobj_dHtVw1L6fOcI49amm024iEA jball;
Joyhateventobj_BqMeXjQ3abTp1BlbS87UdQ jhat;
Joybuttoneventobj_9bGpcZV0ba7ad7sSX9amCLoA jbutton;
Joydeviceeventobj_SYmzvnnMg54mt6meeDFSkA jdevice;
Controlleraxiseventobj_vg7gTG2sYTlHKVi9cFTwdsQ caxis;
Controllerbuttoneventobj_JCI9aJswV5pbR8GVeDUZrNw cbutton;
Controllerdeviceeventobj_jk3khyfKZsFOx3t82Bt35w cdevice;
Audiodeviceeventobj_lKePD4FKNrK75bdZWniACg adevice;
Sensoreventobj_lp752bOrZO44FrW3ymBYAw sensor;
Quiteventobj_n6QwLLEF9bwOze4qnKxoljw quit;
Usereventobj_MAwVQs0rbcBcQG1VsjHA0g user;
Syswmeventobj_VLLtsWkCWXlheVKlFOIbBQ syswm;
Touchfingereventobj_0pz0iUmZZJ16fvpG3ojijA tfinger;
Multigestureeventobj_KibL9byWrTBFbr9aPdCqKbew mgesture;
Dollargestureeventobj_XphXvfWOgSZ6i7xklGuhyA dgesture;
Dropeventobj_LKqmsykaSvleoOUXbYvFvQ drop;
TY_sH9avbK619blGCGFZhgSDaWg padding;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path0);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path0);
N_NIMCALL(void*, nimGetProcAddr)(void* lib0, NCSTRING name0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static void* T_So9cgMs7Jdq9c62SPD8FtedA_2;
TY_qLs9bEMEYHZYOeFIf1LOpoQ Dl_100825;
TY_09bvyvHFtWbkzL5AHgf0bKw Dl_101933;
TY_hKarI59cLAeI0v1WuQhCZ9ag Dl_105912;
TY_jPHHnsvDYo8Q3NQemQIGWg Dl_109752;
TY_buOIiiD42E5nxpbw32t0bA Dl_109935;
TY_15yOfscvzUa4fkCceQZeBg Dl_108849;
TY_PWALQuLZ8UDZbXEqot0bSw Dl_109505;
TNimType NTI_4JhAkMHsSpfaaoatfOE3Lw;
TY_32w2ZypAyMWuajvi2Jt79cg Dl_110053;
TY_32w2ZypAyMWuajvi2Jt79cg Dl_106134;
TY_ln4kdL5W9bbX4a1xl8nnVXQ Dl_100837;
TNimType NTI_vr5DoT1jILTGdRlYv1OYpw;
TY_fbYpjfe38x3ujjAmVRbI1Q Dl_109970;
TY_32w2ZypAyMWuajvi2Jt79cg Dl_110047;
extern TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(T_So9cgMs7Jdq9c62SPD8FtedA_4, "libSDL2.so", 10);
STRING_LITERAL(T_So9cgMs7Jdq9c62SPD8FtedA_6, "libSDL2.so.0.9.0", 16);
STRING_LITERAL(T_So9cgMs7Jdq9c62SPD8FtedA_8, "libSDL2.so.0", 12);
STRING_LITERAL(T_So9cgMs7Jdq9c62SPD8FtedA_10, "libSDL2-2.0.so", 14);
STRING_LITERAL(T_So9cgMs7Jdq9c62SPD8FtedA_12, "libSDL2-2.0.so.0.9.0", 20);
STRING_LITERAL(T_So9cgMs7Jdq9c62SPD8FtedA_14, "libSDL2-2.0.so.0", 16);
STRING_LITERAL(T_So9cgMs7Jdq9c62SPD8FtedA_15, "libSDL2(|-2.0).so(|.0.9.0|.0)", 29);

static N_INLINE(void, nimFrame)(TFrame* s0) {
	NI LOC1;
	LOC1 = (NI)0;
	{
		if (!(frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s0).calldepth = ((NI16) (LOC1));
	(*s0).prev = frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw = s0;
	{
		if (!((*s0).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
NIM_EXTERNC N_NOINLINE(void, unknown_sdlInit000)(void) {
	nimfr("sdl", "sdl.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, unknown_sdlDatInit000)(void) {
static TNimNode* T_So9cgMs7Jdq9c62SPD8FtedA_30[240];
NI T_So9cgMs7Jdq9c62SPD8FtedA_32;
static char* NIM_CONST T_So9cgMs7Jdq9c62SPD8FtedA_31[240] = {
"K_UNKNOWN", 
"K_BACKSPACE", 
"K_TAB", 
"K_RETURN", 
"K_ESCAPE", 
"K_SPACE", 
"K_EXCLAIM", 
"K_QUOTEDBL", 
"K_HASH", 
"K_DOLLAR", 
"K_PERCENT", 
"K_AMPERSAND", 
"K_QUOTE", 
"K_LEFTPAREN", 
"K_RIGHTPAREN", 
"K_ASTERISK", 
"K_PLUS", 
"K_COMMA", 
"K_MINUS", 
"K_PERIOD", 
"K_SLASH", 
"K_0", 
"K_1", 
"K_2", 
"K_3", 
"K_4", 
"K_5", 
"K_6", 
"K_7", 
"K_8", 
"K_9", 
"K_COLON", 
"K_SEMICOLON", 
"K_LESS", 
"K_EQUALS", 
"K_GREATER", 
"K_QUESTION", 
"K_AT", 
"K_LEFTBRACKET", 
"K_BACKSLASH", 
"K_RIGHTBRACKET", 
"K_CARET", 
"K_UNDERSCORE", 
"K_BACKQUOTE", 
"K_a", 
"K_b", 
"K_c", 
"K_d", 
"K_e", 
"K_f", 
"K_g", 
"K_h", 
"K_i", 
"K_j", 
"K_k", 
"K_l", 
"K_m", 
"K_n", 
"K_o", 
"K_p", 
"K_q", 
"K_r", 
"K_s", 
"K_t", 
"K_u", 
"K_v", 
"K_w", 
"K_x", 
"K_y", 
"K_z", 
"K_DELETE", 
"K_CAPSLOCK", 
"K_F1", 
"K_F2", 
"K_F3", 
"K_F4", 
"K_F5", 
"K_F6", 
"K_F7", 
"K_F8", 
"K_F9", 
"K_F10", 
"K_F11", 
"K_F12", 
"K_PRINTSCREEN", 
"K_SCROLLLOCK", 
"K_PAUSE", 
"K_INSERT", 
"K_HOME", 
"K_PAGEUP", 
"K_END", 
"K_PAGEDOWN", 
"K_RIGHT", 
"K_LEFT", 
"K_DOWN", 
"K_UP", 
"K_NUMLOCKCLEAR", 
"K_KP_DIVIDE", 
"K_KP_MULTIPLY", 
"K_KP_MINUS", 
"K_KP_PLUS", 
"K_KP_ENTER", 
"K_KP_1", 
"K_KP_2", 
"K_KP_3", 
"K_KP_4", 
"K_KP_5", 
"K_KP_6", 
"K_KP_7", 
"K_KP_8", 
"K_KP_9", 
"K_KP_0", 
"K_KP_PERIOD", 
"K_APPLICATION", 
"K_POWER", 
"K_KP_EQUALS", 
"K_F13", 
"K_F14", 
"K_F15", 
"K_F16", 
"K_F17", 
"K_F18", 
"K_F19", 
"K_F20", 
"K_F21", 
"K_F22", 
"K_F23", 
"K_F24", 
"K_EXECUTE", 
"K_HELP", 
"K_MENU", 
"K_SELECT", 
"K_STOP", 
"K_AGAIN", 
"K_UNDO", 
"K_CUT", 
"K_COPY", 
"K_PASTE", 
"K_FIND", 
"K_MUTE", 
"K_VOLUMEUP", 
"K_VOLUMEDOWN", 
"K_KP_COMMA", 
"K_KP_EQUALSAS400", 
"K_ALTERASE", 
"K_SYSREQ", 
"K_CANCEL", 
"K_CLEAR", 
"K_PRIOR", 
"K_RETURN2", 
"K_SEPARATOR", 
"K_OUT", 
"K_OPER", 
"K_CLEARAGAIN", 
"K_CRSEL", 
"K_EXSEL", 
"K_KP_00", 
"K_KP_000", 
"K_THOUSANDSSEPARATOR", 
"K_DECIMALSEPARATOR", 
"K_CURRENCYUNIT", 
"K_CURRENCYSUBUNIT", 
"K_KP_LEFTPAREN", 
"K_KP_RIGHTPAREN", 
"K_KP_LEFTBRACE", 
"K_KP_RIGHTBRACE", 
"K_KP_TAB", 
"K_KP_BACKSPACE", 
"K_KP_A", 
"K_KP_B", 
"K_KP_C", 
"K_KP_D", 
"K_KP_E", 
"K_KP_F", 
"K_KP_XOR", 
"K_KP_POWER", 
"K_KP_PERCENT", 
"K_KP_LESS", 
"K_KP_GREATER", 
"K_KP_AMPERSAND", 
"K_KP_DBLAMPERSAND", 
"K_KP_VERTICALBAR", 
"K_KP_DBLVERTICALBAR", 
"K_KP_COLON", 
"K_KP_HASH", 
"K_KP_SPACE", 
"K_KP_AT", 
"K_KP_EXCLAM", 
"K_KP_MEMSTORE", 
"K_KP_MEMRECALL", 
"K_KP_MEMCLEAR", 
"K_KP_MEMADD", 
"K_KP_MEMSUBTRACT", 
"K_KP_MEMMULTIPLY", 
"K_KP_MEMDIVIDE", 
"K_KP_PLUSMINUS", 
"K_KP_CLEAR", 
"K_KP_CLEARENTRY", 
"K_KP_BINARY", 
"K_KP_OCTAL", 
"K_KP_DECIMAL", 
"K_KP_HEXADECIMAL", 
"K_LCTRL", 
"K_LSHIFT", 
"K_LALT", 
"K_LGUI", 
"K_RCTRL", 
"K_RSHIFT", 
"K_RALT", 
"K_RGUI", 
"K_MODE", 
"K_AUDIONEXT", 
"K_AUDIOPREV", 
"K_AUDIOSTOP", 
"K_AUDIOPLAY", 
"K_AUDIOMUTE", 
"K_MEDIASELECT", 
"K_WWW", 
"K_MAIL", 
"K_CALCULATOR", 
"K_COMPUTER", 
"K_AC_SEARCH", 
"K_AC_HOME", 
"K_AC_BACK", 
"K_AC_FORWARD", 
"K_AC_STOP", 
"K_AC_REFRESH", 
"K_AC_BOOKMARKS", 
"K_BRIGHTNESSDOWN", 
"K_BRIGHTNESSUP", 
"K_DISPLAYSWITCH", 
"K_KBDILLUMTOGGLE", 
"K_KBDILLUMDOWN", 
"K_KBDILLUMUP", 
"K_EJECT", 
"K_SLEEP", 
"K_APP1", 
"K_APP2", 
"K_AUDIOREWIND", 
"K_AUDIOFASTFORWARD"};
static TNimNode T_So9cgMs7Jdq9c62SPD8FtedA_0[241];
NTI_4JhAkMHsSpfaaoatfOE3Lw.size = sizeof(Keycode_4JhAkMHsSpfaaoatfOE3Lw);
NTI_4JhAkMHsSpfaaoatfOE3Lw.kind = 14;
NTI_4JhAkMHsSpfaaoatfOE3Lw.base = 0;
NTI_4JhAkMHsSpfaaoatfOE3Lw.flags = 3;
for (T_So9cgMs7Jdq9c62SPD8FtedA_32 = 0; T_So9cgMs7Jdq9c62SPD8FtedA_32 < 240; T_So9cgMs7Jdq9c62SPD8FtedA_32++) {
T_So9cgMs7Jdq9c62SPD8FtedA_0[T_So9cgMs7Jdq9c62SPD8FtedA_32+0].kind = 1;
T_So9cgMs7Jdq9c62SPD8FtedA_0[T_So9cgMs7Jdq9c62SPD8FtedA_32+0].offset = T_So9cgMs7Jdq9c62SPD8FtedA_32;
T_So9cgMs7Jdq9c62SPD8FtedA_0[T_So9cgMs7Jdq9c62SPD8FtedA_32+0].name = T_So9cgMs7Jdq9c62SPD8FtedA_31[T_So9cgMs7Jdq9c62SPD8FtedA_32];
T_So9cgMs7Jdq9c62SPD8FtedA_30[T_So9cgMs7Jdq9c62SPD8FtedA_32] = &T_So9cgMs7Jdq9c62SPD8FtedA_0[T_So9cgMs7Jdq9c62SPD8FtedA_32+0];
}
T_So9cgMs7Jdq9c62SPD8FtedA_0[0].offset = 0;
T_So9cgMs7Jdq9c62SPD8FtedA_0[1].offset = 8;
T_So9cgMs7Jdq9c62SPD8FtedA_0[2].offset = 9;
T_So9cgMs7Jdq9c62SPD8FtedA_0[3].offset = 13;
T_So9cgMs7Jdq9c62SPD8FtedA_0[4].offset = 27;
T_So9cgMs7Jdq9c62SPD8FtedA_0[5].offset = 32;
T_So9cgMs7Jdq9c62SPD8FtedA_0[6].offset = 33;
T_So9cgMs7Jdq9c62SPD8FtedA_0[7].offset = 34;
T_So9cgMs7Jdq9c62SPD8FtedA_0[8].offset = 35;
T_So9cgMs7Jdq9c62SPD8FtedA_0[9].offset = 36;
T_So9cgMs7Jdq9c62SPD8FtedA_0[10].offset = 37;
T_So9cgMs7Jdq9c62SPD8FtedA_0[11].offset = 38;
T_So9cgMs7Jdq9c62SPD8FtedA_0[12].offset = 39;
T_So9cgMs7Jdq9c62SPD8FtedA_0[13].offset = 40;
T_So9cgMs7Jdq9c62SPD8FtedA_0[14].offset = 41;
T_So9cgMs7Jdq9c62SPD8FtedA_0[15].offset = 42;
T_So9cgMs7Jdq9c62SPD8FtedA_0[16].offset = 43;
T_So9cgMs7Jdq9c62SPD8FtedA_0[17].offset = 44;
T_So9cgMs7Jdq9c62SPD8FtedA_0[18].offset = 45;
T_So9cgMs7Jdq9c62SPD8FtedA_0[19].offset = 46;
T_So9cgMs7Jdq9c62SPD8FtedA_0[20].offset = 47;
T_So9cgMs7Jdq9c62SPD8FtedA_0[21].offset = 48;
T_So9cgMs7Jdq9c62SPD8FtedA_0[22].offset = 49;
T_So9cgMs7Jdq9c62SPD8FtedA_0[23].offset = 50;
T_So9cgMs7Jdq9c62SPD8FtedA_0[24].offset = 51;
T_So9cgMs7Jdq9c62SPD8FtedA_0[25].offset = 52;
T_So9cgMs7Jdq9c62SPD8FtedA_0[26].offset = 53;
T_So9cgMs7Jdq9c62SPD8FtedA_0[27].offset = 54;
T_So9cgMs7Jdq9c62SPD8FtedA_0[28].offset = 55;
T_So9cgMs7Jdq9c62SPD8FtedA_0[29].offset = 56;
T_So9cgMs7Jdq9c62SPD8FtedA_0[30].offset = 57;
T_So9cgMs7Jdq9c62SPD8FtedA_0[31].offset = 58;
T_So9cgMs7Jdq9c62SPD8FtedA_0[32].offset = 59;
T_So9cgMs7Jdq9c62SPD8FtedA_0[33].offset = 60;
T_So9cgMs7Jdq9c62SPD8FtedA_0[34].offset = 61;
T_So9cgMs7Jdq9c62SPD8FtedA_0[35].offset = 62;
T_So9cgMs7Jdq9c62SPD8FtedA_0[36].offset = 63;
T_So9cgMs7Jdq9c62SPD8FtedA_0[37].offset = 64;
T_So9cgMs7Jdq9c62SPD8FtedA_0[38].offset = 91;
T_So9cgMs7Jdq9c62SPD8FtedA_0[39].offset = 92;
T_So9cgMs7Jdq9c62SPD8FtedA_0[40].offset = 93;
T_So9cgMs7Jdq9c62SPD8FtedA_0[41].offset = 94;
T_So9cgMs7Jdq9c62SPD8FtedA_0[42].offset = 95;
T_So9cgMs7Jdq9c62SPD8FtedA_0[43].offset = 96;
T_So9cgMs7Jdq9c62SPD8FtedA_0[44].offset = 97;
T_So9cgMs7Jdq9c62SPD8FtedA_0[45].offset = 98;
T_So9cgMs7Jdq9c62SPD8FtedA_0[46].offset = 99;
T_So9cgMs7Jdq9c62SPD8FtedA_0[47].offset = 100;
T_So9cgMs7Jdq9c62SPD8FtedA_0[48].offset = 101;
T_So9cgMs7Jdq9c62SPD8FtedA_0[49].offset = 102;
T_So9cgMs7Jdq9c62SPD8FtedA_0[50].offset = 103;
T_So9cgMs7Jdq9c62SPD8FtedA_0[51].offset = 104;
T_So9cgMs7Jdq9c62SPD8FtedA_0[52].offset = 105;
T_So9cgMs7Jdq9c62SPD8FtedA_0[53].offset = 106;
T_So9cgMs7Jdq9c62SPD8FtedA_0[54].offset = 107;
T_So9cgMs7Jdq9c62SPD8FtedA_0[55].offset = 108;
T_So9cgMs7Jdq9c62SPD8FtedA_0[56].offset = 109;
T_So9cgMs7Jdq9c62SPD8FtedA_0[57].offset = 110;
T_So9cgMs7Jdq9c62SPD8FtedA_0[58].offset = 111;
T_So9cgMs7Jdq9c62SPD8FtedA_0[59].offset = 112;
T_So9cgMs7Jdq9c62SPD8FtedA_0[60].offset = 113;
T_So9cgMs7Jdq9c62SPD8FtedA_0[61].offset = 114;
T_So9cgMs7Jdq9c62SPD8FtedA_0[62].offset = 115;
T_So9cgMs7Jdq9c62SPD8FtedA_0[63].offset = 116;
T_So9cgMs7Jdq9c62SPD8FtedA_0[64].offset = 117;
T_So9cgMs7Jdq9c62SPD8FtedA_0[65].offset = 118;
T_So9cgMs7Jdq9c62SPD8FtedA_0[66].offset = 119;
T_So9cgMs7Jdq9c62SPD8FtedA_0[67].offset = 120;
T_So9cgMs7Jdq9c62SPD8FtedA_0[68].offset = 121;
T_So9cgMs7Jdq9c62SPD8FtedA_0[69].offset = 122;
T_So9cgMs7Jdq9c62SPD8FtedA_0[70].offset = 127;
T_So9cgMs7Jdq9c62SPD8FtedA_0[71].offset = 1073741881;
T_So9cgMs7Jdq9c62SPD8FtedA_0[72].offset = 1073741882;
T_So9cgMs7Jdq9c62SPD8FtedA_0[73].offset = 1073741883;
T_So9cgMs7Jdq9c62SPD8FtedA_0[74].offset = 1073741884;
T_So9cgMs7Jdq9c62SPD8FtedA_0[75].offset = 1073741885;
T_So9cgMs7Jdq9c62SPD8FtedA_0[76].offset = 1073741886;
T_So9cgMs7Jdq9c62SPD8FtedA_0[77].offset = 1073741887;
T_So9cgMs7Jdq9c62SPD8FtedA_0[78].offset = 1073741888;
T_So9cgMs7Jdq9c62SPD8FtedA_0[79].offset = 1073741889;
T_So9cgMs7Jdq9c62SPD8FtedA_0[80].offset = 1073741890;
T_So9cgMs7Jdq9c62SPD8FtedA_0[81].offset = 1073741891;
T_So9cgMs7Jdq9c62SPD8FtedA_0[82].offset = 1073741892;
T_So9cgMs7Jdq9c62SPD8FtedA_0[83].offset = 1073741893;
T_So9cgMs7Jdq9c62SPD8FtedA_0[84].offset = 1073741894;
T_So9cgMs7Jdq9c62SPD8FtedA_0[85].offset = 1073741895;
T_So9cgMs7Jdq9c62SPD8FtedA_0[86].offset = 1073741896;
T_So9cgMs7Jdq9c62SPD8FtedA_0[87].offset = 1073741897;
T_So9cgMs7Jdq9c62SPD8FtedA_0[88].offset = 1073741898;
T_So9cgMs7Jdq9c62SPD8FtedA_0[89].offset = 1073741899;
T_So9cgMs7Jdq9c62SPD8FtedA_0[90].offset = 1073741901;
T_So9cgMs7Jdq9c62SPD8FtedA_0[91].offset = 1073741902;
T_So9cgMs7Jdq9c62SPD8FtedA_0[92].offset = 1073741903;
T_So9cgMs7Jdq9c62SPD8FtedA_0[93].offset = 1073741904;
T_So9cgMs7Jdq9c62SPD8FtedA_0[94].offset = 1073741905;
T_So9cgMs7Jdq9c62SPD8FtedA_0[95].offset = 1073741906;
T_So9cgMs7Jdq9c62SPD8FtedA_0[96].offset = 1073741907;
T_So9cgMs7Jdq9c62SPD8FtedA_0[97].offset = 1073741908;
T_So9cgMs7Jdq9c62SPD8FtedA_0[98].offset = 1073741909;
T_So9cgMs7Jdq9c62SPD8FtedA_0[99].offset = 1073741910;
T_So9cgMs7Jdq9c62SPD8FtedA_0[100].offset = 1073741911;
T_So9cgMs7Jdq9c62SPD8FtedA_0[101].offset = 1073741912;
T_So9cgMs7Jdq9c62SPD8FtedA_0[102].offset = 1073741913;
T_So9cgMs7Jdq9c62SPD8FtedA_0[103].offset = 1073741914;
T_So9cgMs7Jdq9c62SPD8FtedA_0[104].offset = 1073741915;
T_So9cgMs7Jdq9c62SPD8FtedA_0[105].offset = 1073741916;
T_So9cgMs7Jdq9c62SPD8FtedA_0[106].offset = 1073741917;
T_So9cgMs7Jdq9c62SPD8FtedA_0[107].offset = 1073741918;
T_So9cgMs7Jdq9c62SPD8FtedA_0[108].offset = 1073741919;
T_So9cgMs7Jdq9c62SPD8FtedA_0[109].offset = 1073741920;
T_So9cgMs7Jdq9c62SPD8FtedA_0[110].offset = 1073741921;
T_So9cgMs7Jdq9c62SPD8FtedA_0[111].offset = 1073741922;
T_So9cgMs7Jdq9c62SPD8FtedA_0[112].offset = 1073741923;
T_So9cgMs7Jdq9c62SPD8FtedA_0[113].offset = 1073741925;
T_So9cgMs7Jdq9c62SPD8FtedA_0[114].offset = 1073741926;
T_So9cgMs7Jdq9c62SPD8FtedA_0[115].offset = 1073741927;
T_So9cgMs7Jdq9c62SPD8FtedA_0[116].offset = 1073741928;
T_So9cgMs7Jdq9c62SPD8FtedA_0[117].offset = 1073741929;
T_So9cgMs7Jdq9c62SPD8FtedA_0[118].offset = 1073741930;
T_So9cgMs7Jdq9c62SPD8FtedA_0[119].offset = 1073741931;
T_So9cgMs7Jdq9c62SPD8FtedA_0[120].offset = 1073741932;
T_So9cgMs7Jdq9c62SPD8FtedA_0[121].offset = 1073741933;
T_So9cgMs7Jdq9c62SPD8FtedA_0[122].offset = 1073741934;
T_So9cgMs7Jdq9c62SPD8FtedA_0[123].offset = 1073741935;
T_So9cgMs7Jdq9c62SPD8FtedA_0[124].offset = 1073741936;
T_So9cgMs7Jdq9c62SPD8FtedA_0[125].offset = 1073741937;
T_So9cgMs7Jdq9c62SPD8FtedA_0[126].offset = 1073741938;
T_So9cgMs7Jdq9c62SPD8FtedA_0[127].offset = 1073741939;
T_So9cgMs7Jdq9c62SPD8FtedA_0[128].offset = 1073741940;
T_So9cgMs7Jdq9c62SPD8FtedA_0[129].offset = 1073741941;
T_So9cgMs7Jdq9c62SPD8FtedA_0[130].offset = 1073741942;
T_So9cgMs7Jdq9c62SPD8FtedA_0[131].offset = 1073741943;
T_So9cgMs7Jdq9c62SPD8FtedA_0[132].offset = 1073741944;
T_So9cgMs7Jdq9c62SPD8FtedA_0[133].offset = 1073741945;
T_So9cgMs7Jdq9c62SPD8FtedA_0[134].offset = 1073741946;
T_So9cgMs7Jdq9c62SPD8FtedA_0[135].offset = 1073741947;
T_So9cgMs7Jdq9c62SPD8FtedA_0[136].offset = 1073741948;
T_So9cgMs7Jdq9c62SPD8FtedA_0[137].offset = 1073741949;
T_So9cgMs7Jdq9c62SPD8FtedA_0[138].offset = 1073741950;
T_So9cgMs7Jdq9c62SPD8FtedA_0[139].offset = 1073741951;
T_So9cgMs7Jdq9c62SPD8FtedA_0[140].offset = 1073741952;
T_So9cgMs7Jdq9c62SPD8FtedA_0[141].offset = 1073741953;
T_So9cgMs7Jdq9c62SPD8FtedA_0[142].offset = 1073741957;
T_So9cgMs7Jdq9c62SPD8FtedA_0[143].offset = 1073741958;
T_So9cgMs7Jdq9c62SPD8FtedA_0[144].offset = 1073741977;
T_So9cgMs7Jdq9c62SPD8FtedA_0[145].offset = 1073741978;
T_So9cgMs7Jdq9c62SPD8FtedA_0[146].offset = 1073741979;
T_So9cgMs7Jdq9c62SPD8FtedA_0[147].offset = 1073741980;
T_So9cgMs7Jdq9c62SPD8FtedA_0[148].offset = 1073741981;
T_So9cgMs7Jdq9c62SPD8FtedA_0[149].offset = 1073741982;
T_So9cgMs7Jdq9c62SPD8FtedA_0[150].offset = 1073741983;
T_So9cgMs7Jdq9c62SPD8FtedA_0[151].offset = 1073741984;
T_So9cgMs7Jdq9c62SPD8FtedA_0[152].offset = 1073741985;
T_So9cgMs7Jdq9c62SPD8FtedA_0[153].offset = 1073741986;
T_So9cgMs7Jdq9c62SPD8FtedA_0[154].offset = 1073741987;
T_So9cgMs7Jdq9c62SPD8FtedA_0[155].offset = 1073741988;
T_So9cgMs7Jdq9c62SPD8FtedA_0[156].offset = 1073742000;
T_So9cgMs7Jdq9c62SPD8FtedA_0[157].offset = 1073742001;
T_So9cgMs7Jdq9c62SPD8FtedA_0[158].offset = 1073742002;
T_So9cgMs7Jdq9c62SPD8FtedA_0[159].offset = 1073742003;
T_So9cgMs7Jdq9c62SPD8FtedA_0[160].offset = 1073742004;
T_So9cgMs7Jdq9c62SPD8FtedA_0[161].offset = 1073742005;
T_So9cgMs7Jdq9c62SPD8FtedA_0[162].offset = 1073742006;
T_So9cgMs7Jdq9c62SPD8FtedA_0[163].offset = 1073742007;
T_So9cgMs7Jdq9c62SPD8FtedA_0[164].offset = 1073742008;
T_So9cgMs7Jdq9c62SPD8FtedA_0[165].offset = 1073742009;
T_So9cgMs7Jdq9c62SPD8FtedA_0[166].offset = 1073742010;
T_So9cgMs7Jdq9c62SPD8FtedA_0[167].offset = 1073742011;
T_So9cgMs7Jdq9c62SPD8FtedA_0[168].offset = 1073742012;
T_So9cgMs7Jdq9c62SPD8FtedA_0[169].offset = 1073742013;
T_So9cgMs7Jdq9c62SPD8FtedA_0[170].offset = 1073742014;
T_So9cgMs7Jdq9c62SPD8FtedA_0[171].offset = 1073742015;
T_So9cgMs7Jdq9c62SPD8FtedA_0[172].offset = 1073742016;
T_So9cgMs7Jdq9c62SPD8FtedA_0[173].offset = 1073742017;
T_So9cgMs7Jdq9c62SPD8FtedA_0[174].offset = 1073742018;
T_So9cgMs7Jdq9c62SPD8FtedA_0[175].offset = 1073742019;
T_So9cgMs7Jdq9c62SPD8FtedA_0[176].offset = 1073742020;
T_So9cgMs7Jdq9c62SPD8FtedA_0[177].offset = 1073742021;
T_So9cgMs7Jdq9c62SPD8FtedA_0[178].offset = 1073742022;
T_So9cgMs7Jdq9c62SPD8FtedA_0[179].offset = 1073742023;
T_So9cgMs7Jdq9c62SPD8FtedA_0[180].offset = 1073742024;
T_So9cgMs7Jdq9c62SPD8FtedA_0[181].offset = 1073742025;
T_So9cgMs7Jdq9c62SPD8FtedA_0[182].offset = 1073742026;
T_So9cgMs7Jdq9c62SPD8FtedA_0[183].offset = 1073742027;
T_So9cgMs7Jdq9c62SPD8FtedA_0[184].offset = 1073742028;
T_So9cgMs7Jdq9c62SPD8FtedA_0[185].offset = 1073742029;
T_So9cgMs7Jdq9c62SPD8FtedA_0[186].offset = 1073742030;
T_So9cgMs7Jdq9c62SPD8FtedA_0[187].offset = 1073742031;
T_So9cgMs7Jdq9c62SPD8FtedA_0[188].offset = 1073742032;
T_So9cgMs7Jdq9c62SPD8FtedA_0[189].offset = 1073742033;
T_So9cgMs7Jdq9c62SPD8FtedA_0[190].offset = 1073742034;
T_So9cgMs7Jdq9c62SPD8FtedA_0[191].offset = 1073742035;
T_So9cgMs7Jdq9c62SPD8FtedA_0[192].offset = 1073742036;
T_So9cgMs7Jdq9c62SPD8FtedA_0[193].offset = 1073742037;
T_So9cgMs7Jdq9c62SPD8FtedA_0[194].offset = 1073742038;
T_So9cgMs7Jdq9c62SPD8FtedA_0[195].offset = 1073742039;
T_So9cgMs7Jdq9c62SPD8FtedA_0[196].offset = 1073742040;
T_So9cgMs7Jdq9c62SPD8FtedA_0[197].offset = 1073742041;
T_So9cgMs7Jdq9c62SPD8FtedA_0[198].offset = 1073742042;
T_So9cgMs7Jdq9c62SPD8FtedA_0[199].offset = 1073742043;
T_So9cgMs7Jdq9c62SPD8FtedA_0[200].offset = 1073742044;
T_So9cgMs7Jdq9c62SPD8FtedA_0[201].offset = 1073742045;
T_So9cgMs7Jdq9c62SPD8FtedA_0[202].offset = 1073742048;
T_So9cgMs7Jdq9c62SPD8FtedA_0[203].offset = 1073742049;
T_So9cgMs7Jdq9c62SPD8FtedA_0[204].offset = 1073742050;
T_So9cgMs7Jdq9c62SPD8FtedA_0[205].offset = 1073742051;
T_So9cgMs7Jdq9c62SPD8FtedA_0[206].offset = 1073742052;
T_So9cgMs7Jdq9c62SPD8FtedA_0[207].offset = 1073742053;
T_So9cgMs7Jdq9c62SPD8FtedA_0[208].offset = 1073742054;
T_So9cgMs7Jdq9c62SPD8FtedA_0[209].offset = 1073742055;
T_So9cgMs7Jdq9c62SPD8FtedA_0[210].offset = 1073742081;
T_So9cgMs7Jdq9c62SPD8FtedA_0[211].offset = 1073742082;
T_So9cgMs7Jdq9c62SPD8FtedA_0[212].offset = 1073742083;
T_So9cgMs7Jdq9c62SPD8FtedA_0[213].offset = 1073742084;
T_So9cgMs7Jdq9c62SPD8FtedA_0[214].offset = 1073742085;
T_So9cgMs7Jdq9c62SPD8FtedA_0[215].offset = 1073742086;
T_So9cgMs7Jdq9c62SPD8FtedA_0[216].offset = 1073742087;
T_So9cgMs7Jdq9c62SPD8FtedA_0[217].offset = 1073742088;
T_So9cgMs7Jdq9c62SPD8FtedA_0[218].offset = 1073742089;
T_So9cgMs7Jdq9c62SPD8FtedA_0[219].offset = 1073742090;
T_So9cgMs7Jdq9c62SPD8FtedA_0[220].offset = 1073742091;
T_So9cgMs7Jdq9c62SPD8FtedA_0[221].offset = 1073742092;
T_So9cgMs7Jdq9c62SPD8FtedA_0[222].offset = 1073742093;
T_So9cgMs7Jdq9c62SPD8FtedA_0[223].offset = 1073742094;
T_So9cgMs7Jdq9c62SPD8FtedA_0[224].offset = 1073742095;
T_So9cgMs7Jdq9c62SPD8FtedA_0[225].offset = 1073742096;
T_So9cgMs7Jdq9c62SPD8FtedA_0[226].offset = 1073742097;
T_So9cgMs7Jdq9c62SPD8FtedA_0[227].offset = 1073742098;
T_So9cgMs7Jdq9c62SPD8FtedA_0[228].offset = 1073742099;
T_So9cgMs7Jdq9c62SPD8FtedA_0[229].offset = 1073742100;
T_So9cgMs7Jdq9c62SPD8FtedA_0[230].offset = 1073742101;
T_So9cgMs7Jdq9c62SPD8FtedA_0[231].offset = 1073742102;
T_So9cgMs7Jdq9c62SPD8FtedA_0[232].offset = 1073742103;
T_So9cgMs7Jdq9c62SPD8FtedA_0[233].offset = 1073742104;
T_So9cgMs7Jdq9c62SPD8FtedA_0[234].offset = 1073742105;
T_So9cgMs7Jdq9c62SPD8FtedA_0[235].offset = 1073742106;
T_So9cgMs7Jdq9c62SPD8FtedA_0[236].offset = 1073742107;
T_So9cgMs7Jdq9c62SPD8FtedA_0[237].offset = 1073742108;
T_So9cgMs7Jdq9c62SPD8FtedA_0[238].offset = 1073742109;
T_So9cgMs7Jdq9c62SPD8FtedA_0[239].offset = 1073742110;
T_So9cgMs7Jdq9c62SPD8FtedA_0[240].len = 240; T_So9cgMs7Jdq9c62SPD8FtedA_0[240].kind = 2; T_So9cgMs7Jdq9c62SPD8FtedA_0[240].sons = &T_So9cgMs7Jdq9c62SPD8FtedA_30[0];
NTI_4JhAkMHsSpfaaoatfOE3Lw.node = &T_So9cgMs7Jdq9c62SPD8FtedA_0[240];
NTI_4JhAkMHsSpfaaoatfOE3Lw.flags = 1<<2;
NTI_vr5DoT1jILTGdRlYv1OYpw.size = sizeof(void*);
NTI_vr5DoT1jILTGdRlYv1OYpw.kind = 26;
NTI_vr5DoT1jILTGdRlYv1OYpw.base = 0;
NTI_vr5DoT1jILTGdRlYv1OYpw.flags = 3;
if (!((T_So9cgMs7Jdq9c62SPD8FtedA_2 = nimLoadLibrary((NimStringDesc*) &T_So9cgMs7Jdq9c62SPD8FtedA_4))
||(T_So9cgMs7Jdq9c62SPD8FtedA_2 = nimLoadLibrary((NimStringDesc*) &T_So9cgMs7Jdq9c62SPD8FtedA_6))
||(T_So9cgMs7Jdq9c62SPD8FtedA_2 = nimLoadLibrary((NimStringDesc*) &T_So9cgMs7Jdq9c62SPD8FtedA_8))
||(T_So9cgMs7Jdq9c62SPD8FtedA_2 = nimLoadLibrary((NimStringDesc*) &T_So9cgMs7Jdq9c62SPD8FtedA_10))
||(T_So9cgMs7Jdq9c62SPD8FtedA_2 = nimLoadLibrary((NimStringDesc*) &T_So9cgMs7Jdq9c62SPD8FtedA_12))
||(T_So9cgMs7Jdq9c62SPD8FtedA_2 = nimLoadLibrary((NimStringDesc*) &T_So9cgMs7Jdq9c62SPD8FtedA_14))
)) nimLoadLibraryError((NimStringDesc*) &T_So9cgMs7Jdq9c62SPD8FtedA_15);
	Dl_100825 = (TY_qLs9bEMEYHZYOeFIf1LOpoQ) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_Init");
	Dl_101933 = (TY_09bvyvHFtWbkzL5AHgf0bKw) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_GetError");
	Dl_105912 = (TY_hKarI59cLAeI0v1WuQhCZ9ag) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_CreateWindow");
	Dl_109752 = (TY_jPHHnsvDYo8Q3NQemQIGWg) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_CreateRenderer");
	Dl_109935 = (TY_buOIiiD42E5nxpbw32t0bA) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_SetRenderDrawColor");
	Dl_108849 = (TY_15yOfscvzUa4fkCceQZeBg) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_PollEvent");
	Dl_109505 = (TY_PWALQuLZ8UDZbXEqot0bSw) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_LogInfo");
	Dl_110053 = (TY_32w2ZypAyMWuajvi2Jt79cg) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_DestroyRenderer");
	Dl_106134 = (TY_32w2ZypAyMWuajvi2Jt79cg) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_DestroyWindow");
	Dl_100837 = (TY_ln4kdL5W9bbX4a1xl8nnVXQ) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_Quit");
	Dl_109970 = (TY_fbYpjfe38x3ujjAmVRbI1Q) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_RenderClear");
	Dl_110047 = (TY_32w2ZypAyMWuajvi2Jt79cg) nimGetProcAddr(T_So9cgMs7Jdq9c62SPD8FtedA_2, "SDL_RenderPresent");
}

