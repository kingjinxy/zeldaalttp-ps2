	THUMB_FUNC_START sub_0806DCBC
sub_0806DCBC: @ 0x0806DCBC
	push {r4,r5,lr}
	bl sub_08130FF8
	ldr r4, _0806DD2C  @ =gRam
	ldr r1, _0806DD30  @ =0x00000CFA
	add r0, r4, r1
	ldrh r5, [r0]
	cmp r5, #0
	bne _0806DD5A
	ldr r3, _0806DD34  @ =0x000016C1
	add r0, r4, r3
	ldrb r2, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	add r3, r3, #71
	add r1, r4, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _0806DCEC
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_0806DCEC:
	ldr r1, _0806DD38  @ =0x00001709
	add r0, r4, r1
	strb r2, [r0]
	bl sub_0806E3A8
	ldr r3, _0806DD3C  @ =0x000009DA
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #137
	beq _0806DD5A
	cmp r0, #79
	beq _0806DD5A
	cmp r0, #167
	beq _0806DD4C
	ldr r0, _0806DD40  @ =0x000009DE
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	ldr r3, _0806DD44  @ =0x00000B48
	add r1, r4, r3
	mov r0, #1
	strh r0, [r1]
	ldr r0, _0806DD48  @ =0x00000504
	add r1, r4, r0
	mov r0, #70
	bl sub_0812A324
	bl sub_0806FE5C
	b _0806DD5A
	.byte 0x00
	.byte 0x00
_0806DD2C:
	.4byte gRam
_0806DD30:
	.4byte 0x00000CFA
_0806DD34:
	.4byte 0x000016C1
_0806DD38:
	.4byte 0x00001709
_0806DD3C:
	.4byte 0x000009DA
_0806DD40:
	.4byte 0x000009DE
_0806DD44:
	.4byte 0x00000B48
_0806DD48:
	.4byte 0x00000504
_0806DD4C:
	ldr r1, _0806DD60  @ =0x00000B48
	add r0, r4, r1
	strh r5, [r0]
	ldr r3, _0806DD64  @ =0x000009DE
	add r1, r4, r3
	mov r0, #1
	strh r0, [r1]
_0806DD5A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0806DD60:
	.4byte 0x00000B48
_0806DD64:
	.4byte 0x000009DE
	THUMB_FUNC_END sub_0806DCBC

