	THUMB_FUNC_START sub_080BB87C
sub_080BB87C: @ 0x080BB87C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	bl sub_080BDB54
	mov r5, #9
	ldr r6, _080BB900  @ =gRam
	ldr r1, _080BB904  @ =0x00000E75
	add r7, r6, r1
_080BB896:
	ldr r0, _080BB908  @ =0x00000FF2
	add r4, r6, r0
	add r1, r5, r4
	mov r0, #18
	strb r0, [r1]
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	add r2, r5, r7
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
	sub r5, r5, #1
	cmp r5, #7
	bgt _080BB896
	mov r5, #7
	ldr r1, _080BB90C  @ =0xFFFFF00E
	add r6, r4, r1
	ldr r1, _080BB904  @ =0x00000E75
	add r7, r6, r1
_080BB8C2:
	ldr r1, _080BB908  @ =0x00000FF2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #168
	strb r1, [r0]
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CEB84
	add r0, r4, #0
	bl sub_080F6AD4
	add r2, r5, r7
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
	sub r5, r5, #1
	cmp r5, #0
	bge _080BB8C2
	mov r0, r8
	bl sub_080B9454
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BB900:
	.4byte gRam
_080BB904:
	.4byte 0x00000E75
_080BB908:
	.4byte 0x00000FF2
_080BB90C:
	.4byte 0xFFFFF00E
	THUMB_FUNC_END sub_080BB87C

