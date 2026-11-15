	THUMB_FUNC_START sub_08092E50
sub_08092E50: @ 0x08092E50
	push {r4-r6,lr}
	ldr r4, _08092F08  @ =gRam
	ldr r1, _08092F0C  @ =0x000016CC
	add r0, r4, r1
	mov r5, #0
	strb r5, [r0]
	ldr r2, _08092F10  @ =0x00001727
	add r0, r4, r2
	strb r5, [r0]
	ldr r0, _08092F14  @ =0x000017AA
	add r6, r4, r0
	strb r5, [r6]
	ldr r1, _08092F18  @ =0x000017DA
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #41
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #5
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #102
	add r0, r4, r2
	strb r5, [r0]
	bl sub_08092B0C
	ldr r1, _08092F1C  @ =0x0000176D
	add r0, r4, r1
	strb r5, [r0]
	strb r5, [r6]
	ldr r2, _08092F20  @ =0x00001871
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08092F24  @ =0x00001711
	add r0, r4, r2
	strb r5, [r0]
	ldr r0, _08092F28  @ =0x0000188C
	add r2, r4, r0
	ldrh r1, [r2]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	mov r1, #0
	strh r0, [r2]
	ldr r2, _08092F2C  @ =0x0000188E
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strb r1, [r0]
	sub r2, r2, #5
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #3
	add r0, r4, r2
	strh r5, [r0]
	sub r2, r2, #19
	add r0, r4, r2
	strb r1, [r0]
	sub r2, r2, #122
	add r0, r4, r2
	strb r1, [r0]
	sub r2, r2, #92
	add r0, r4, r2
	strb r1, [r0]
	sub r2, r2, #41
	add r0, r4, r2
	strh r5, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strb r1, [r0]
	sub r2, r2, #14
	add r0, r4, r2
	strh r5, [r0]
	sub r2, r2, #2
	add r0, r4, r2
	strb r1, [r0]
	mov r0, #187
	lsl r0, r0, #5
	add r4, r4, r0
	strb r1, [r4]
	bl sub_08092CA0
	bl sub_08092F30
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08092F08:
	.4byte gRam
_08092F0C:
	.4byte 0x000016CC
_08092F10:
	.4byte 0x00001727
_08092F14:
	.4byte 0x000017AA
_08092F18:
	.4byte 0x000017DA
_08092F1C:
	.4byte 0x0000176D
_08092F20:
	.4byte 0x00001871
_08092F24:
	.4byte 0x00001711
_08092F28:
	.4byte 0x0000188C
_08092F2C:
	.4byte 0x0000188E
	THUMB_FUNC_END sub_08092E50

