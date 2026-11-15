	THUMB_FUNC_START sub_0806D334
sub_0806D334: @ 0x0806D334
	push {r4,r5,lr}
	bl sub_0807FF10
	bl sub_08075AE8
	ldr r4, _0806D39C  @ =gRam
	ldr r0, _0806D3A0  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strh r0, [r1]
	ldr r1, _0806D3A4  @ =0x00000A4C
	add r0, r4, r1
	strh r2, [r0]
	ldr r5, _0806D3A8  @ =0x000009DC
	add r2, r4, r5
	ldrh r3, [r2]
	sub r1, r1, #114
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r5, _0806D3AC  @ =0x00000B36
	add r0, r4, r5
	strh r1, [r0]
	strh r3, [r2]
	bl sub_080CB278
	bl sub_0806C544
	mov r1, #176
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0806D394
	ldr r2, _0806D3B0  @ =0x00000952
	add r0, r4, r2
	ldrh r1, [r0]
	mov r5, #149
	lsl r5, r5, #4
	add r0, r4, r5
	strh r1, [r0]
	ldr r1, _0806D3B4  @ =0x00000958
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
_0806D394:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806D39C:
	.4byte gRam
_0806D3A0:
	.4byte 0x000009E8
_0806D3A4:
	.4byte 0x00000A4C
_0806D3A8:
	.4byte 0x000009DC
_0806D3AC:
	.4byte 0x00000B36
_0806D3B0:
	.4byte 0x00000952
_0806D3B4:
	.4byte 0x00000958
	THUMB_FUNC_END sub_0806D334

