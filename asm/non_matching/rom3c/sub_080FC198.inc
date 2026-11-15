	THUMB_FUNC_START sub_080FC198
sub_080FC198: @ 0x080FC198
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	mov r7, #0
	ldr r5, _080FC1D8  @ =gRam
	ldr r1, _080FC1DC  @ =0x00001002
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bne _080FC1F6
	mov r7, #1
	mov r0, #0
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #128
	and r1, r1, r0
	cmp r1, #0
	bne _080FC1E4
	ldr r1, _080FC1E0  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #160
	strb r1, [r0]
	b _080FC1F6
	.byte 0x00
	.byte 0x00
_080FC1D8:
	.4byte gRam
_080FC1DC:
	.4byte 0x00001002
_080FC1E0:
	.4byte 0x00000FD2
_080FC1E4:
	ldr r1, _080FC200  @ =0x00000FE2
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #127
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #93
	bl sub_080CF140
_080FC1F6:
	add r0, r7, #0
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080FC200:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080FC198

