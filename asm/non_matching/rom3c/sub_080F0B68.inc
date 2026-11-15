	THUMB_FUNC_START sub_080F0B68
sub_080F0B68: @ 0x080F0B68
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r5, _080F0BAC  @ =gRam
	ldr r1, _080F0BB0  @ =0x00001082
	add r0, r5, r1
	add r6, r4, r0
	mov r7, #3
	eor r2, r2, r7
	strb r2, [r6]
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080F0BB8
	ldr r1, _080F0BB4  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	sub r1, r1, #16
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	b _080F0C00
_080F0BAC:
	.4byte gRam
_080F0BB0:
	.4byte 0x00001082
_080F0BB4:
	.4byte 0x00000F22
_080F0BB8:
	bl sub_08093078
	add r0, r4, #0
	bl sub_080C2FA8
	eor r0, r0, r7
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080F0C08  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	mov r0, #1
	eor r2, r2, r0
	mov r0, #2
	orr r2, r2, r0
	strb r2, [r6]
	ldr r0, _080F0C0C  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	mov r0, #1
	and r0, r0, r2
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F0C10  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080F0C14  @ =gUnknown_08178D88
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080F0C18  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
_080F0C00:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0C08:
	.4byte 0x00000FB2
_080F0C0C:
	.4byte 0x00000F52
_080F0C10:
	.4byte 0x00000F22
_080F0C14:
	.4byte gUnknown_08178D88
_080F0C18:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080F0B68

