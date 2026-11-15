	THUMB_FUNC_START sub_08010B64
sub_08010B64: @ 0x08010B64
	push {r4,lr}
	bl sub_08010DC0
	cmp r0, #0
	bne _08010BC0
	mov r4, #192
	lsl r4, r4, #18
	ldrb r0, [r4, #4]
	bl sub_080112E0
	bl sub_0801017C
	ldr r1, _08010BA4  @ =gUnknown_0200B250
	ldrb r2, [r4, #4]
	lsl r0, r2, #6
	add r0, r0, r1
	add r0, r0, #63
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bgt _08010BAC
	add r0, r2, #0
	bl sub_08011184
	mov r0, #6
	mov r1, #0
	bl sub_08010104
	ldr r1, _08010BA8  @ =gSubState
	mov r0, #5
	b _08010BBE
_08010BA4:
	.4byte gUnknown_0200B250
_08010BA8:
	.4byte gSubState
_08010BAC:
	mov r0, #3
	mov r1, #16
	bl sub_0800C0B0
	ldr r1, _08010BC8  @ =gUnknown_03000520
	mov r0, #31
	strb r0, [r1, #7]
	ldr r1, _08010BCC  @ =gSubState
	mov r0, #3
_08010BBE:
	strb r0, [r1]
_08010BC0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08010BC8:
	.4byte gUnknown_03000520
_08010BCC:
	.4byte gSubState
	THUMB_FUNC_END sub_08010B64

