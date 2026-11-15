	THUMB_FUNC_START sub_080BC0F8
sub_080BC0F8: @ 0x080BC0F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r6, #15
	ldr r0, _080BC180  @ =gRam
	mov r8, r0
	ldr r1, _080BC184  @ =0x000009AD
	add r1, r1, r8
	mov r9, r1
	ldr r0, _080BC188  @ =0x00000FA2
	add r0, r0, r8
	mov r10, r0
_080BC114:
	ldr r0, _080BC18C  @ =0x00000FF2
	add r0, r0, r8
	add r7, r6, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080BC16A
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r0, _080BC190  @ =0x00001012
	add r0, r0, r8
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r1, _080BC194  @ =0x000015DC
	add r1, r1, r8
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r1, r9
	ldrb r5, [r1]
	mov r0, #0
	strb r0, [r1]
	mov r0, r10
	add r1, r4, r0
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r1, r9
	strb r5, [r1]
	mov r1, r10
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BC16A
	strb r0, [r7]
_080BC16A:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BC114
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BC180:
	.4byte gRam
_080BC184:
	.4byte 0x000009AD
_080BC188:
	.4byte 0x00000FA2
_080BC18C:
	.4byte 0x00000FF2
_080BC190:
	.4byte 0x00001012
_080BC194:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080BC0F8

