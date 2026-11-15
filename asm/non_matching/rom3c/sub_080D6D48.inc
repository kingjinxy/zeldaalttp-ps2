	THUMB_FUNC_START sub_080D6D48
sub_080D6D48: @ 0x080D6D48
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080D6D78  @ =gRam
	ldr r2, _080D6D7C  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D6D88
	ldr r3, _080D6D80  @ =0x00000F92
	add r1, r1, r3
	add r1, r4, r1
	ldr r2, _080D6D84  @ =gUnknown_081755C4
	lsr r0, r0, #28
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080D6D98
	.byte 0x00
	.byte 0x00
_080D6D78:
	.4byte gRam
_080D6D7C:
	.4byte 0x00000FC2
_080D6D80:
	.4byte 0x00000F92
_080D6D84:
	.4byte gUnknown_081755C4
_080D6D88:
	ldr r3, _080D6DA0  @ =0x00000F52
	add r0, r1, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #128
	strb r0, [r2]
_080D6D98:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6DA0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D6D48

