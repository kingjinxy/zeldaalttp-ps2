	THUMB_FUNC_START sub_08131DCC
sub_08131DCC: @ 0x08131DCC
	push {r4,r5,lr}
	mov r2, #0
	mov r0, #14
	ldr r3, _08131E10  @ =gRam
	mov r5, #208
	lsl r5, r5, #1
	ldr r4, _08131E14  @ =gUnknown_02000D00
_08131DDA:
	lsl r1, r0, #24
	asr r1, r1, #24
	add r0, r1, r5
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	strh r2, [r0]
	sub r1, r1, #2
	lsl r1, r1, #24
	lsr r0, r1, #24
	cmp r1, #0
	bge _08131DDA
	ldr r1, _08131E18  @ =0x00000CF8
	add r0, r3, r1
	strh r2, [r0]
	ldr r0, _08131E1C  @ =0x00000CFA
	add r1, r3, r0
	mov r0, #2
	strh r0, [r1]
	ldr r0, _08131E20  @ =0x0000099B
	add r1, r3, r0
	mov r0, #1
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08131E10:
	.4byte gRam
_08131E14:
	.4byte gUnknown_02000D00
_08131E18:
	.4byte 0x00000CF8
_08131E1C:
	.4byte 0x00000CFA
_08131E20:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08131DCC

