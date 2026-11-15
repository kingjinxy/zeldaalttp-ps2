	THUMB_FUNC_START sub_0806B064
sub_0806B064: @ 0x0806B064
	push {r4,lr}
	bl sub_08075508
	ldr r3, _0806B0A0  @ =gRam
	ldr r0, _0806B0A4  @ =0x000009E8
	add r4, r3, r0
	ldrh r0, [r4]
	cmp r0, #0
	beq _0806B09A
	ldr r1, _0806B0A8  @ =0x000009AD
	add r2, r3, r1
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #0
	strb r0, [r2]
	strh r1, [r4]
	ldr r2, _0806B0AC  @ =0x00000952
	add r0, r3, r2
	ldrh r1, [r0]
	add r2, r2, #10
	add r0, r3, r2
	strh r1, [r0]
	ldr r0, _0806B0B0  @ =0x0000095E
	add r1, r3, r0
	mov r0, #194
	lsl r0, r0, #3
	strh r0, [r1]
_0806B09A:
	pop {r4}
	pop {r0}
	bx r0
_0806B0A0:
	.4byte gRam
_0806B0A4:
	.4byte 0x000009E8
_0806B0A8:
	.4byte 0x000009AD
_0806B0AC:
	.4byte 0x00000952
_0806B0B0:
	.4byte 0x0000095E
	THUMB_FUNC_END sub_0806B064

