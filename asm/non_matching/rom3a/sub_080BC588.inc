	THUMB_FUNC_START sub_080BC588
sub_080BC588: @ 0x080BC588
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r6, #15
	ldr r7, _080BC670  @ =gRam
	ldr r0, _080BC674  @ =0x00000FA2
	add r0, r0, r7
	mov r10, r0
	ldr r1, _080BC678  @ =0x000009AD
	add r1, r1, r7
	mov r9, r1
_080BC5A2:
	ldr r2, _080BC67C  @ =0x00000FF2
	add r0, r7, r2
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BC63A
	ldr r3, _080BC680  @ =0x00000FD2
	add r0, r7, r3
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BC5C0
	sub r0, r0, #1
	strb r0, [r1]
_080BC5C0:
	ldr r1, _080BC684  @ =0x00000FE2
	add r0, r7, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BC5D0
	sub r0, r0, #1
	strb r0, [r1]
_080BC5D0:
	ldr r2, _080BC688  @ =0x000010B2
	add r0, r7, r2
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BC5E0
	sub r0, r0, #1
	strb r0, [r1]
_080BC5E0:
	ldr r3, _080BC68C  @ =0x00000D94
	add r1, r7, r3
	add r1, r6, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r1, _080BC690  @ =0x00001012
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r2, _080BC694  @ =0x000015DC
	add r1, r7, r2
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r3, r9
	ldrb r5, [r3]
	mov r0, #0
	strb r0, [r3]
	mov r2, r10
	add r1, r4, r2
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r3, r9
	strb r5, [r3]
	mov r1, r10
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BC63A
	mov r2, r8
	strb r0, [r2]
_080BC63A:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BC5A2
	ldr r2, _080BC670  @ =gRam
	ldr r3, _080BC698  @ =0x00000A02
	add r0, r2, r3
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #250
	lsl r0, r0, #1
	cmp r1, r0
	bne _080BC662
	ldr r0, _080BC69C  @ =0x00001022
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
_080BC662:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BC670:
	.4byte gRam
_080BC674:
	.4byte 0x00000FA2
_080BC678:
	.4byte 0x000009AD
_080BC67C:
	.4byte 0x00000FF2
_080BC680:
	.4byte 0x00000FD2
_080BC684:
	.4byte 0x00000FE2
_080BC688:
	.4byte 0x000010B2
_080BC68C:
	.4byte 0x00000D94
_080BC690:
	.4byte 0x00001012
_080BC694:
	.4byte 0x000015DC
_080BC698:
	.4byte 0x00000A02
_080BC69C:
	.4byte 0x00001022
	THUMB_FUNC_END sub_080BC588

