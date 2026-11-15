	THUMB_FUNC_START sub_080D1CF8
sub_080D1CF8: @ 0x080D1CF8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r2, #0
	ldr r5, _080D1D74  @ =gRam
	ldr r1, _080D1D78  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #24
	and r0, r0, r1
	cmp r0, #0
	bne _080D1D12
	mov r2, #3
_080D1D12:
	ldr r1, _080D1D7C  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r1, _080D1D80  @ =0x00001627
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D1D6C
	ldr r0, _080D1D84  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D1D88  @ =0x00000FB2
	add r2, r5, r1
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	ldr r0, _080D1D8C  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080D1D90  @ =gUnknown_08174B78
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080D1D94  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080D1D98  @ =0x00001152
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080D1D9C  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #248
	strb r1, [r0]
_080D1D6C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D1D74:
	.4byte gRam
_080D1D78:
	.4byte 0x00000996
_080D1D7C:
	.4byte 0x00000F92
_080D1D80:
	.4byte 0x00001627
_080D1D84:
	.4byte 0x00000F52
_080D1D88:
	.4byte 0x00000FB2
_080D1D8C:
	.4byte 0x00000F22
_080D1D90:
	.4byte gUnknown_08174B78
_080D1D94:
	.4byte 0x00000FC2
_080D1D98:
	.4byte 0x00001152
_080D1D9C:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080D1CF8

