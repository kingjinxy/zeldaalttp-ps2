	THUMB_FUNC_START sub_080F2440
sub_080F2440: @ 0x080F2440
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r5, r1, #0
	ldr r4, _080F2460  @ =gRam
	ldr r0, _080F2464  @ =0x000009C6
	add r6, r4, r0
	ldrh r0, [r6]
	cmp r0, #27
	beq _080F2468
	add r0, r1, #0
	bl sub_080F2538
	b _080F250E
	.byte 0x00
	.byte 0x00
_080F2460:
	.4byte gRam
_080F2464:
	.4byte 0x000009C6
_080F2468:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F250E
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080F250E
	ldr r1, _080F2518  @ =0x00001622
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r3, _080F251C  @ =0x00001623
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r3, r3, #161
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	mov r0, #128
	lsl r0, r0, #15
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #80
	bhi _080F250E
	ldr r1, _080F2520  @ =0x00001624
	add r0, r4, r1
	ldrb r1, [r0]
	sub r3, r3, #159
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r3, r3, #155
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	mov r0, #240
	lsl r0, r0, #12
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #17
	bhi _080F250E
	ldr r3, _080F2524  @ =0x000009AD
	add r1, r4, r3
	mov r0, #35
	strb r0, [r1]
	mov r0, #187
	lsl r0, r0, #5
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080F2528  @ =0x000009E8
	add r0, r4, r1
	mov r1, #0
	strh r2, [r0]
	ldr r2, _080F252C  @ =0x000016CD
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080F2530  @ =0x000016CE
	add r0, r4, r3
	strb r1, [r0]
	ldr r0, _080F2534  @ =0x00001718
	add r1, r4, r0
	mov r0, #20
	strb r0, [r1]
	ldrb r1, [r6]
	mov r0, #64
	and r0, r0, r1
	add r2, r2, #109
	add r1, r4, r2
	strb r0, [r1]
_080F250E:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F2518:
	.4byte 0x00001622
_080F251C:
	.4byte 0x00001623
_080F2520:
	.4byte 0x00001624
_080F2524:
	.4byte 0x000009AD
_080F2528:
	.4byte 0x000009E8
_080F252C:
	.4byte 0x000016CD
_080F2530:
	.4byte 0x000016CE
_080F2534:
	.4byte 0x00001718
	THUMB_FUNC_END sub_080F2440

