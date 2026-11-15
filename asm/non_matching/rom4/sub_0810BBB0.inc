	THUMB_FUNC_START sub_0810BBB0
sub_0810BBB0: @ 0x0810BBB0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r0, #29
	ldr r5, _0810BC24  @ =gRam
	ldr r1, _0810BC28  @ =0x00000965
	add r1, r1, r5
	mov r9, r1
	ldr r2, _0810BC2C  @ =gUnknown_0817CC00
	mov r8, r2
_0810BBCA:
	lsl r4, r0, #24
	asr r4, r4, #24
	mov r1, r8
	add r0, r4, r1
	ldrb r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r6, r5, r2
	strb r0, [r6]
	ldr r0, _0810BC30  @ =gUnknown_0817CC1E
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _0810BC34  @ =gUnknown_0817CC3C
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _0810BC38  @ =gUnknown_0817CC5A
	add r0, r4, r0
	ldrb r0, [r0]
	mov r1, r9
	strb r0, [r1]
	bl sub_0810BC40
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r0, r4, #24
	cmp r4, #0
	bge _0810BBCA
	ldr r2, _0810BC3C  @ =0x00000752
	add r0, r6, r2
	add r0, r7, r0
	mov r1, #32
	strb r1, [r0]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810BC24:
	.4byte gRam
_0810BC28:
	.4byte 0x00000965
_0810BC2C:
	.4byte gUnknown_0817CC00
_0810BC30:
	.4byte gUnknown_0817CC1E
_0810BC34:
	.4byte gUnknown_0817CC3C
_0810BC38:
	.4byte gUnknown_0817CC5A
_0810BC3C:
	.4byte 0x00000752
	THUMB_FUNC_END sub_0810BBB0

