	THUMB_FUNC_START sub_080D7874
sub_080D7874: @ 0x080D7874
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r4, _080D78D8  @ =gRam
	ldr r1, _080D78DC  @ =0x00001142
	add r0, r4, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D78D2
	ldr r0, _080D78E0  @ =0x00000F52
	add r1, r4, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	ldr r1, _080D78E4  @ =0x00000F22
	add r5, r4, r1
	add r0, r7, r5
	mov r6, #252
	strb r6, [r0]
	ldr r0, _080D78E8  @ =0x00000F12
	add r4, r4, r0
	add r0, r7, r4
	strb r6, [r0]
	add r0, r7, #0
	bl sub_080D7A94
	add r2, r0, #0
	add r0, r2, r5
	mov r1, #5
	strb r1, [r0]
	add r0, r2, r4
	strb r1, [r0]
	add r0, r7, #0
	bl sub_080D7A94
	add r2, r0, #0
	add r5, r2, r5
	strb r6, [r5]
	add r4, r2, r4
	mov r0, #4
	strb r0, [r4]
_080D78D2:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D78D8:
	.4byte gRam
_080D78DC:
	.4byte 0x00001142
_080D78E0:
	.4byte 0x00000F52
_080D78E4:
	.4byte 0x00000F22
_080D78E8:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080D7874

