	THUMB_FUNC_START sub_080899C8
sub_080899C8: @ 0x080899C8
	push {r4,lr}
	ldr r3, _08089A18  @ =gRam
	ldr r0, _08089A1C  @ =0x00000ACA
	add r1, r3, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	asr r4, r0, #16
	cmp r4, #0
	bne _08089A12
	mov r0, #4
	strh r0, [r1]
	ldr r1, _08089A20  @ =0x000009E8
	add r2, r3, r1
	ldrh r0, [r2]
	add r1, r0, #1
	strh r1, [r2]
	sub r0, r0, #3
	ldr r2, _08089A24  @ =0x0000097C
	add r1, r3, r2
	strh r0, [r1]
	ldr r0, _08089A28  @ =0x00000BF8
	add r1, r3, r0
	mov r0, #8
	strh r0, [r1]
	ldr r1, _08089A2C  @ =0x00000BFC
	add r0, r3, r1
	strh r4, [r0]
	ldr r2, _08089A30  @ =0x00000BF6
	add r1, r3, r2
	mov r0, #48
	strh r0, [r1]
	ldr r0, _08089A34  @ =gUnknown_08165B74
	add r0, r0, #16
	bl sub_08089824
_08089A12:
	pop {r4}
	pop {r0}
	bx r0
_08089A18:
	.4byte gRam
_08089A1C:
	.4byte 0x00000ACA
_08089A20:
	.4byte 0x000009E8
_08089A24:
	.4byte 0x0000097C
_08089A28:
	.4byte 0x00000BF8
_08089A2C:
	.4byte 0x00000BFC
_08089A30:
	.4byte 0x00000BF6
_08089A34:
	.4byte gUnknown_08165B74
	THUMB_FUNC_END sub_080899C8

