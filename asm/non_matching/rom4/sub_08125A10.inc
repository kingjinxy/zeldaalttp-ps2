	THUMB_FUNC_START sub_08125A10
sub_08125A10: @ 0x08125A10
	push {r4-r6,lr}
	ldr r1, _08125AB8  @ =gRam
	ldr r0, _08125ABC  @ =0x00001B90
	add r2, r1, r0
	ldrb r4, [r2]
	add r0, r4, r2
	ldrb r3, [r0]
	sub r0, r4, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r1, #0
	cmp r0, #0
	beq _08125A42
	add r1, r2, #0
_08125A2C:
	add r2, r0, r1
	ldrb r6, [r2]
	cmp r3, r6
	bls _08125A38
	add r4, r0, #0
	ldrb r3, [r2]
_08125A38:
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _08125A2C
_08125A42:
	mov r0, #222
	lsl r0, r0, #5
	add r2, r5, r0
	mov r1, #7
	and r1, r1, r3
	lsl r1, r1, #2
	mov r0, #56
	and r3, r3, r0
	lsl r0, r3, #5
	ldr r3, _08125AC0  @ =gUnknown_0200F330
	add r0, r0, r3
	add r1, r1, r0
	str r1, [r2]
	ldr r6, _08125AC4  @ =0x00001BCE
	add r0, r5, r6
	strb r4, [r0]
	ldr r1, _08125AC8  @ =0x00001BD8
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _08125ABC  @ =0x00001B90
	add r3, r5, r2
	ldrb r0, [r3]
	lsr r0, r0, #1
	sub r6, r6, #10
	add r1, r5, r6
	strb r0, [r1]
	add r2, r4, r3
	ldrb r1, [r2]
	add r6, r6, #2
	add r0, r5, r6
	strb r1, [r0]
	ldrb r1, [r2]
	ldr r2, _08125ACC  @ =0x00001BD0
	add r0, r5, r2
	strb r1, [r0]
	sub r0, r4, #1
	add r0, r0, r3
	ldrb r2, [r0]
	ldr r3, _08125AD0  @ =0x00001BC5
	add r1, r5, r3
	strb r2, [r1]
	ldrb r1, [r0]
	add r6, r6, #9
	add r0, r5, r6
	strb r1, [r0]
	bl sub_08125CC0
	cmp r0, #0
	bne _08125AB0
	bl sub_08125D98
	cmp r0, #0
	bne _08125AB0
	bl sub_08125AD4
_08125AB0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08125AB8:
	.4byte gRam
_08125ABC:
	.4byte 0x00001B90
_08125AC0:
	.4byte gUnknown_0200F330
_08125AC4:
	.4byte 0x00001BCE
_08125AC8:
	.4byte 0x00001BD8
_08125ACC:
	.4byte 0x00001BD0
_08125AD0:
	.4byte 0x00001BC5
	THUMB_FUNC_END sub_08125A10

