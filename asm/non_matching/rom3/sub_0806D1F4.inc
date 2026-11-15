	THUMB_FUNC_START sub_0806D1F4
sub_0806D1F4: @ 0x0806D1F4
	push {r4,lr}
	bl sub_08096F30
	bl sub_0806D158
	cmp r0, #0
	beq _0806D242
	ldr r1, _0806D248  @ =gRam
	ldr r2, _0806D24C  @ =0x00001703
	add r0, r1, r2
	ldrb r0, [r0]
	add r3, r1, #0
	cmp r0, #2
	beq _0806D214
	cmp r0, #4
	bne _0806D21C
_0806D214:
	ldr r4, _0806D250  @ =0x0000172C
	add r1, r3, r4
	mov r0, #0
	strb r0, [r1]
_0806D21C:
	ldr r1, _0806D254  @ =0x0000172F
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _0806D258  @ =0x000016FC
	add r0, r3, r2
	mov r2, #0
	strh r1, [r0]
	ldr r4, _0806D24C  @ =0x00001703
	add r0, r3, r4
	strb r2, [r0]
	ldr r2, _0806D25C  @ =0x00000ABE
	add r0, r3, r2
	strh r1, [r0]
	ldr r4, _0806D260  @ =0x000009E8
	add r1, r3, r4
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0806D242:
	pop {r4}
	pop {r0}
	bx r0
_0806D248:
	.4byte gRam
_0806D24C:
	.4byte 0x00001703
_0806D250:
	.4byte 0x0000172C
_0806D254:
	.4byte 0x0000172F
_0806D258:
	.4byte 0x000016FC
_0806D25C:
	.4byte 0x00000ABE
_0806D260:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806D1F4

