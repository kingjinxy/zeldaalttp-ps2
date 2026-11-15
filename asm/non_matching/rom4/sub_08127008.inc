	THUMB_FUNC_START sub_08127008
sub_08127008: @ 0x08127008
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r0, _0812703C  @ =gUnknown_03000050
	add r0, r0, #32
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08127038
	ldr r0, _08127040  @ =gRam
	ldr r1, _08127044  @ =0x0000096C
	add r0, r0, r1
	mov r1, #1
	strh r1, [r0]
	ldrb r1, [r2]
	lsl r1, r1, #3
	ldr r0, _08127048  @ =gUnknown_081808E0
	add r1, r1, r0
	add r0, r3, #0
	mov r2, #0
	bl sub_08126420
_08127038:
	pop {r0}
	bx r0
_0812703C:
	.4byte gUnknown_03000050
_08127040:
	.4byte gRam
_08127044:
	.4byte 0x0000096C
_08127048:
	.4byte gUnknown_081808E0
	THUMB_FUNC_END sub_08127008

