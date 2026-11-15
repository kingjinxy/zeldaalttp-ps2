	THUMB_FUNC_START sub_080DD71C
sub_080DD71C: @ 0x080DD71C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080C58F0
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DD784
	ldr r4, _080DD78C  @ =gRam
	ldr r1, _080DD790  @ =0x00000996
	add r0, r4, r1
	ldrb r2, [r0]
	lsr r2, r2, #3
	mov r0, #3
	and r2, r2, r0
	mov r0, #150
	lsl r0, r0, #4
	add r5, r4, r0
	strb r2, [r5]
	ldr r0, _080DD794  @ =0x00000F92
	add r1, r4, r0
	add r1, r6, r1
	mov r0, #1
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _080DD798  @ =0x00001122
	add r3, r4, r1
	add r3, r6, r3
	ldrb r0, [r3]
	mov r2, #191
	and r2, r2, r0
	ldrb r0, [r5]
	lsl r0, r0, #4
	mov r1, #64
	and r0, r0, r1
	orr r2, r2, r0
	strb r2, [r3]
	ldr r0, _080DD79C  @ =0x00000FC2
	add r4, r4, r0
	add r4, r6, r4
	ldrb r0, [r4]
	cmp r0, #0
	bne _080DD784
	add r0, r6, #0
	bl sub_080DD8AC
	mov r0, #47
	strb r0, [r4]
_080DD784:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DD78C:
	.4byte gRam
_080DD790:
	.4byte 0x00000996
_080DD794:
	.4byte 0x00000F92
_080DD798:
	.4byte 0x00001122
_080DD79C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080DD71C

