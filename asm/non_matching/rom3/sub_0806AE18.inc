	THUMB_FUNC_START sub_0806AE18
sub_0806AE18: @ 0x0806AE18
	push {r4,r5,lr}
	bl sub_080AA794
	lsl r0, r0, #24
	cmp r0, #0
	bne _0806AE2E
	ldr r0, _0806AEA4  @ =gRam
	ldr r1, _0806AEA8  @ =0x00000A4C
	add r0, r0, r1
	mov r1, #1
	strh r1, [r0]
_0806AE2E:
	bl sub_080AA748
	lsl r0, r0, #24
	cmp r0, #0
	bne _0806AE42
	ldr r0, _0806AEA4  @ =gRam
	ldr r2, _0806AEA8  @ =0x00000A4C
	add r0, r0, r2
	mov r1, #1
	strh r1, [r0]
_0806AE42:
	ldr r4, _0806AEA4  @ =gRam
	ldr r0, _0806AEA8  @ =0x00000A4C
	add r5, r4, r0
	ldrh r0, [r5]
	cmp r0, #0
	bne _0806AE94
	ldr r1, _0806AEAC  @ =0x000016E8
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	bl sub_0807166C
	ldr r2, _0806AEB0  @ =0x000016D5
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	mov r1, #4
	sub r2, r2, #9
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _0806AEB4  @ =0x000009AE
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _0806AEB8  @ =0x000009AD
	add r1, r4, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0806AEBC  @ =0x000009E8
	add r1, r4, r0
	mov r0, #16
	strh r0, [r1]
	ldr r2, _0806AEC0  @ =0x00001770
	add r1, r4, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0806AE94:
	mov r0, #0
	strh r0, [r5]
	bl sub_080AA6D8
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806AEA4:
	.4byte gRam
_0806AEA8:
	.4byte 0x00000A4C
_0806AEAC:
	.4byte 0x000016E8
_0806AEB0:
	.4byte 0x000016D5
_0806AEB4:
	.4byte 0x000009AE
_0806AEB8:
	.4byte 0x000009AD
_0806AEBC:
	.4byte 0x000009E8
_0806AEC0:
	.4byte 0x00001770
	THUMB_FUNC_END sub_0806AE18

