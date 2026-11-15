	THUMB_FUNC_START sub_08125904
sub_08125904: @ 0x08125904
	push {r4-r6,lr}
	ldr r4, _08125938  @ =gRam
	ldr r0, _0812593C  @ =0x00001B28
	add r5, r4, r0
	mov r1, #0
	ldrsh r0, [r5, r1]
	ldr r2, _08125940  @ =0x00001B2C
	add r6, r4, r2
	mov r2, #0
	ldrsh r1, [r6, r2]
	bl Div
	strh r0, [r5]
	ldr r0, _08125944  @ =0x00001B2A
	add r4, r4, r0
	mov r1, #0
	ldrsh r0, [r4, r1]
	mov r2, #0
	ldrsh r1, [r6, r2]
	bl Div
	strh r0, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08125938:
	.4byte gRam
_0812593C:
	.4byte 0x00001B28
_08125940:
	.4byte 0x00001B2C
_08125944:
	.4byte 0x00001B2A
	THUMB_FUNC_END sub_08125904

