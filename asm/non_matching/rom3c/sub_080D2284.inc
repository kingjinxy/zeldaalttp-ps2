	THUMB_FUNC_START sub_080D2284
sub_080D2284: @ 0x080D2284
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r5, #1
	ldr r0, _080D22F8  @ =gFlute
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080D22A2
	add r0, r4, #0
	bl sub_080D24F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D22A2
	mov r5, #0
_080D22A2:
	ldr r2, _080D22FC  @ =gRam
	cmp r5, #0
	beq _080D22DC
	ldr r0, _080D2300  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080D2304  @ =0x00000FB2
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080D2308  @ =0x00001627
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D230C  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #176
	strb r1, [r0]
	ldr r0, _080D2310  @ =0x00001770
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
_080D22DC:
	ldr r1, _080D230C  @ =0x00000FC2
	add r0, r2, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080D22F2
	mov r0, #25
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080D2654
_080D22F2:
	pop {r4,r5}
	pop {r0}
	bx r0
_080D22F8:
	.4byte gFlute
_080D22FC:
	.4byte gRam
_080D2300:
	.4byte 0x00000F52
_080D2304:
	.4byte 0x00000FB2
_080D2308:
	.4byte 0x00001627
_080D230C:
	.4byte 0x00000FC2
_080D2310:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080D2284

