	THUMB_FUNC_START sub_080D3CD4
sub_080D3CD4: @ 0x080D3CD4
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080D3CF0  @ =gRam
	ldr r3, _080D3CF4  @ =0x00000965
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080D3CF8
	sub r3, r3, #5
	b _080D3CFA
	.byte 0x00
	.byte 0x00
_080D3CF0:
	.4byte gRam
_080D3CF4:
	.4byte 0x00000965
_080D3CF8:
	ldr r3, _080D3D10  @ =0x00000961
_080D3CFA:
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080D3D14  @ =0x00000965
	add r1, r1, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, #1
	cmp r0, #1
	ble _080D3D18
	mov r0, #1
	b _080D3D20
_080D3D10:
	.4byte 0x00000961
_080D3D14:
	.4byte 0x00000965
_080D3D18:
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #0
_080D3D20:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080D3CD4

