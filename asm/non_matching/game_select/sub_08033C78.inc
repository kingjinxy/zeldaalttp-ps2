	THUMB_FUNC_START sub_08033C78
sub_08033C78: @ 0x08033C78
	push {lr}
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08033CA4
	ldr r2, _08033CA0  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #1
	orr r0, r0, r1
	str r0, [r2]
	mov r0, #3
	strb r0, [r3, #20]
	add r0, r3, #0
	bl sub_08003BCC
	b _08033CC2
	.byte 0x00
	.byte 0x00
_08033CA0:
	.4byte gUnknown_0201F000
_08033CA4:
	ldr r1, [r3, #12]
	ldr r0, _08033CC8  @ =0xFFFE8000
	add r1, r1, r0
	str r1, [r3, #12]
	ldr r0, _08033CCC  @ =gUnknown_03000488
	mov r2, #128
	lsl r2, r2, #1
	strh r2, [r0]
	asr r1, r1, #16
	strh r1, [r0, #2]
	mov r1, #0
	strh r1, [r0, #4]
	add r1, r3, #0
	bl sub_0803D770
_08033CC2:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033CC8:
	.4byte 0xFFFE8000
_08033CCC:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08033C78

