	THUMB_FUNC_START sub_080F57D4
sub_080F57D4: @ 0x080F57D4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r0, #172
	add r1, r7, #0
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080F5868
	lsl r0, r6, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r4, _080F5870  @ =gRam
	ldr r1, _080F5874  @ =0x00000F52
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080F5878  @ =0x00000F62
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _080F587C  @ =0x00001142
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #8
	strb r1, [r0]
	ldr r2, _080F5880  @ =0x00001152
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #22
	strb r1, [r0]
	bl GetRandomInt
	ldr r2, _080F5884  @ =0x00000968
	add r1, r4, r2
	strb r0, [r1]
	ldr r0, _080F5888  @ =0x00000961
	add r5, r4, r0
	ldrb r1, [r5]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	bl GetRandomInt
	ldr r2, _080F588C  @ =0x0000096C
	add r1, r4, r2
	strb r0, [r1]
	ldr r1, _080F5890  @ =0x00000965
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r0, r7, #0
	mov r1, #10
	bl sub_080C2DCC
	ldr r1, _080F5894  @ =0x00000F12
	add r0, r4, r1
	add r0, r6, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080F5898  @ =0x00000F22
	add r4, r4, r0
	add r4, r6, r4
	ldrb r0, [r5]
	strb r0, [r4]
_080F5868:
	add r0, r6, #0
	pop {r4-r7}
	pop {r1}
	bx r1
_080F5870:
	.4byte gRam
_080F5874:
	.4byte 0x00000F52
_080F5878:
	.4byte 0x00000F62
_080F587C:
	.4byte 0x00001142
_080F5880:
	.4byte 0x00001152
_080F5884:
	.4byte 0x00000968
_080F5888:
	.4byte 0x00000961
_080F588C:
	.4byte 0x0000096C
_080F5890:
	.4byte 0x00000965
_080F5894:
	.4byte 0x00000F12
_080F5898:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F57D4

