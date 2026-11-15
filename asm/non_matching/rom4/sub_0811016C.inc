	THUMB_FUNC_START sub_0811016C
sub_0811016C: @ 0x0811016C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _081101D4  @ =gUnknown_0817D3F4
	add r1, r0, r1
	ldrb r4, [r1]
	ldr r1, _081101D8  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r3, r1, r2
	mov r2, #31
	strb r2, [r3]
	ldr r5, _081101DC  @ =0x00000EE2
	add r2, r1, r5
	add r7, r0, r2
	add r5, r5, #32
	add r2, r1, r5
	add r6, r0, r2
	sub r5, r5, #48
	add r2, r1, r5
	add r5, r0, r2
	ldr r2, _081101E0  @ =0x00000EF2
	add r1, r1, r2
	add r2, r0, r1
_0811019C:
	ldr r0, _081101E4  @ =gUnknown_0200EC18
	add r1, r4, r0
	ldrb r0, [r7]
	strb r0, [r1]
	ldr r0, _081101E8  @ =gUnknown_0200EC98
	add r1, r4, r0
	ldrb r0, [r6]
	strb r0, [r1]
	ldr r0, _081101EC  @ =gUnknown_0200ED18
	add r1, r4, r0
	ldrb r0, [r5]
	strb r0, [r1]
	ldr r0, _081101F0  @ =gUnknown_0200ED98
	add r1, r4, r0
	ldrb r0, [r2]
	strb r0, [r1]
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811019C
	pop {r4-r7}
	pop {r0}
	bx r0
_081101D4:
	.4byte gUnknown_0817D3F4
_081101D8:
	.4byte gRam
_081101DC:
	.4byte 0x00000EE2
_081101E0:
	.4byte 0x00000EF2
_081101E4:
	.4byte gUnknown_0200EC18
_081101E8:
	.4byte gUnknown_0200EC98
_081101EC:
	.4byte gUnknown_0200ED18
_081101F0:
	.4byte gUnknown_0200ED98
	THUMB_FUNC_END sub_0811016C

