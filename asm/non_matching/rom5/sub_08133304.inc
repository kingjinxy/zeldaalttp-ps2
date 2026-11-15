	THUMB_FUNC_START sub_08133304
sub_08133304: @ 0x08133304
	push {r4-r7,lr}
	mov r1, #5
	ldr r5, _08133344  @ =gUnknown_02031700
	mov r7, #15
	ldr r0, _08133348  @ =gRam
	mov r2, #202
	lsl r2, r2, #4
	add r0, r0, r2
	ldrh r0, [r0]
	add r0, r0, #32
	ldr r6, _0813334C  @ =gUnknown_02000800
	lsl r3, r0, #1
_0813331C:
	add r2, r7, #0
	sub r4, r1, #1
	cmp r2, #0
	blt _08133336
	add r1, r3, r6
_08133326:
	ldrh r0, [r5]
	strh r0, [r1]
	add r5, r5, #2
	add r1, r1, #2
	add r3, r3, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _08133326
_08133336:
	add r1, r4, #0
	cmp r1, #0
	bge _0813331C
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08133344:
	.4byte gUnknown_02031700
_08133348:
	.4byte gRam
_0813334C:
	.4byte gUnknown_02000800
	THUMB_FUNC_END sub_08133304

