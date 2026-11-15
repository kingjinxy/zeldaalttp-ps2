	THUMB_FUNC_START sub_081027A0
sub_081027A0: @ 0x081027A0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _081027E8  @ =gRam
	ldr r1, _081027EC  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldr r2, _081027F0  @ =0x00000F72
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r6]
	lsl r3, r1, #24
	ldrb r0, [r0]
	cmp r1, r0
	beq _08102800
	ldr r0, _081027F4  @ =0x00001082
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _081027F8  @ =gUnknown_0817B7BA
	lsr r0, r3, #27
	add r0, r0, r2
	ldrb r0, [r0]
	mov r2, #0
	strb r0, [r1]
	ldr r1, _081027FC  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	add r1, r1, #16
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	b _0810281E
_081027E8:
	.4byte gRam
_081027EC:
	.4byte 0x00000FC2
_081027F0:
	.4byte 0x00000F72
_081027F4:
	.4byte 0x00001082
_081027F8:
	.4byte gUnknown_0817B7BA
_081027FC:
	.4byte 0x00000F82
_08102800:
	add r0, r4, #0
	bl sub_080C36D8
	ldr r2, _08102824  @ =0x00001082
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	ldr r0, _08102828  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #32
	strb r0, [r6]
_0810281E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08102824:
	.4byte 0x00001082
_08102828:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_081027A0

