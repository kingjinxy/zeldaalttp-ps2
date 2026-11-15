	THUMB_FUNC_START sub_080ECF74
sub_080ECF74: @ 0x080ECF74
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r6, #0
	ldr r5, _080ED048  @ =gRam
	ldr r0, _080ED04C  @ =0x00001152
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #3
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C7A48
	lsl r0, r0, #24
	cmp r0, #0
	bne _080ED018
	add r0, r4, #0
	bl sub_080C1F70
	ldr r1, _080ED050  @ =0x00000F72
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	strb r0, [r2]
	ldr r7, _080ED054  @ =0x00000F82
	add r0, r5, r7
	add r0, r4, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r5, r3
	strb r1, [r0]
	add r7, r7, #224
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080ED058  @ =0x00000964
	add r3, r5, r1
	strb r0, [r3]
	add r7, r7, #32
	add r0, r5, r7
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r7, _080ED05C  @ =0x00000965
	add r0, r5, r7
	strb r1, [r0]
	ldr r1, _080ED060  @ =0x00001622
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r7, _080ED064  @ =0x00001623
	add r0, r5, r7
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bhi _080ED014
	ldr r1, _080ED068  @ =0x00001624
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080ED06C  @ =0x00001625
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r3]
	sub r0, r0, r1
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bhi _080ED014
	mov r6, #1
_080ED014:
	cmp r6, #0
	beq _080ED042
_080ED018:
	ldr r2, _080ED048  @ =gRam
	ldr r3, _080ED070  @ =0x000010A2
	add r1, r2, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	mov r3, #0
	strb r0, [r1]
	ldr r7, _080ED074  @ =0x00000FC2
	add r0, r2, r7
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080ED078  @ =0x00000F22
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	sub r7, r7, #176
	add r2, r2, r7
	add r2, r4, r2
	strb r3, [r2]
_080ED042:
	pop {r4-r7}
	pop {r0}
	bx r0
_080ED048:
	.4byte gRam
_080ED04C:
	.4byte 0x00001152
_080ED050:
	.4byte 0x00000F72
_080ED054:
	.4byte 0x00000F82
_080ED058:
	.4byte 0x00000964
_080ED05C:
	.4byte 0x00000965
_080ED060:
	.4byte 0x00001622
_080ED064:
	.4byte 0x00001623
_080ED068:
	.4byte 0x00001624
_080ED06C:
	.4byte 0x00001625
_080ED070:
	.4byte 0x000010A2
_080ED074:
	.4byte 0x00000FC2
_080ED078:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080ECF74

