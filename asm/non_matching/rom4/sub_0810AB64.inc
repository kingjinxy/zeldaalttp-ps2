	THUMB_FUNC_START sub_0810AB64
sub_0810AB64: @ 0x0810AB64
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r1, _0810AB8C  @ =gRam
	ldr r3, _0810AB90  @ =0x00000FC2
	add r0, r1, r3
	add r4, r2, r0
	ldrb r0, [r4]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _0810AB98
	ldr r4, _0810AB94  @ =0x00000F92
	add r1, r1, r4
	add r1, r2, r1
	lsr r0, r0, #26
	add r0, r0, #15
	strb r0, [r1]
	b _0810ABCE
_0810AB8C:
	.4byte gRam
_0810AB90:
	.4byte 0x00000FC2
_0810AB94:
	.4byte 0x00000F92
_0810AB98:
	ldr r6, _0810ABD4  @ =0x00001092
	add r0, r1, r6
	add r0, r2, r0
	strb r3, [r0]
	ldr r6, _0810ABD8  @ =0x00000F52
	add r0, r1, r6
	add r0, r2, r0
	strb r3, [r0]
	ldr r6, _0810ABDC  @ =0x00001142
	add r0, r1, r6
	add r0, r2, r0
	strb r3, [r0]
	mov r0, #64
	strb r0, [r4]
	mov r2, #0
	ldr r4, _0810ABE0  @ =0x000009DA
	add r0, r1, r4
	ldrh r0, [r0]
	cmp r0, #205
	bne _0810ABC2
	mov r2, #1
_0810ABC2:
	cmp r2, #0
	beq _0810ABCE
	ldr r6, _0810ABE4  @ =0x00000FA2
	add r0, r1, r6
	add r0, r5, r0
	strb r3, [r0]
_0810ABCE:
	pop {r4-r6}
	pop {r0}
	bx r0
_0810ABD4:
	.4byte 0x00001092
_0810ABD8:
	.4byte 0x00000F52
_0810ABDC:
	.4byte 0x00001142
_0810ABE0:
	.4byte 0x000009DA
_0810ABE4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_0810AB64

