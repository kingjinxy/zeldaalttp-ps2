	THUMB_FUNC_START sub_0807FADC
sub_0807FADC: @ 0x0807FADC
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _0807FB20  @ =gRam
	ldr r1, _0807FB24  @ =0x00000964
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r3, r0, #17
	ldr r1, _0807FB28  @ =gUnknown_081677C0
	lsl r0, r3, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r5, #151
	lsl r5, r5, #4
	add r2, r4, r5
	strh r1, [r2]
	sub r5, r5, #8
	add r0, r4, r5
	mov r5, #0
	ldrsh r0, [r0, r5]
	cmp r0, #22
	bne _0807FB34
	add r0, r1, #0
	add r0, r0, #136
	strh r0, [r2]
	mov r0, #0
	ldrsh r2, [r2, r0]
	ldr r1, _0807FB2C  @ =0x00000AF4
	add r3, r4, r1
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r5, _0807FB30  @ =0x00000C32
	b _0807FB5C
	.byte 0x00
	.byte 0x00
_0807FB20:
	.4byte gRam
_0807FB24:
	.4byte 0x00000964
_0807FB28:
	.4byte gUnknown_081677C0
_0807FB2C:
	.4byte 0x00000AF4
_0807FB30:
	.4byte 0x00000C32
_0807FB34:
	cmp r0, #6
	bne _0807FB44
	str r3, [sp]
	mov r0, #3
	mov r1, sp
	bl sub_0807E398
	b _0807FBBC
_0807FB44:
	cmp r0, #20
	bne _0807FB74
	add r0, r1, #0
	add r0, r0, #136
	strh r0, [r2]
	mov r0, #0
	ldrsh r2, [r2, r0]
	ldr r1, _0807FB6C  @ =0x00000AF6
	add r3, r4, r1
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r5, _0807FB70  @ =0x00000C42
_0807FB5C:
	add r1, r4, r5
	add r0, r0, r1
	asr r2, r2, #1
	strh r2, [r0]
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	b _0807FBBC
_0807FB6C:
	.4byte 0x00000AF6
_0807FB70:
	.4byte 0x00000C42
_0807FB74:
	cmp r0, #63
	ble _0807FB7E
	bl sub_0807EC0C
	b _0807FBBC
_0807FB7E:
	cmp r0, #2
	bne _0807FB88
	bl sub_0807F904
	b _0807FBBC
_0807FB88:
	cmp r0, #8
	bne _0807FBB8
	bl sub_0807F904
	ldr r1, _0807FBB0  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #1
	ldr r2, _0807FBB4  @ =0x000018D0
	add r1, r4, r2
	add r0, r0, r1
	ldrh r1, [r0]
	mov r3, #128
	lsl r3, r3, #6
	add r2, r3, #0
	orr r1, r1, r2
	strh r1, [r0]
	b _0807FBBC
	.byte 0x00
	.byte 0x00
_0807FBB0:
	.4byte 0x00000B08
_0807FBB4:
	.4byte 0x000018D0
_0807FBB8:
	bl sub_0807F904
_0807FBBC:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0807FADC

