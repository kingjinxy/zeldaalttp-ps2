	THUMB_FUNC_START sub_08070B60
sub_08070B60: @ 0x08070B60
	push {r4,lr}
	mov r4, #22
	ldr r0, _08070BA0  @ =gUnknown_0814CAD4
	ldr r3, _08070BA4  @ =gRam
	ldr r2, _08070BA8  @ =0x00000ABA
	add r1, r3, r2
	ldrh r1, [r1]
	add r0, r1, r0
	ldrb r2, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08070B80
	mov r4, #23
	mov r2, #0
_08070B80:
	cmp r1, #2
	bne _08070B86
	mov r2, #3
_08070B86:
	ldr r1, _08070BAC  @ =0x000009B4
	add r0, r3, r1
	strb r4, [r0]
	add r1, r1, #1
	add r0, r3, r1
	strb r2, [r0]
	bl sub_0806D598
	bl sub_0807166C
	pop {r4}
	pop {r0}
	bx r0
_08070BA0:
	.4byte gUnknown_0814CAD4
_08070BA4:
	.4byte gRam
_08070BA8:
	.4byte 0x00000ABA
_08070BAC:
	.4byte 0x000009B4
	THUMB_FUNC_END sub_08070B60

