	THUMB_FUNC_START sub_080D9130
sub_080D9130: @ 0x080D9130
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	ldr r6, _080D9188  @ =gRam
	ldr r1, _080D918C  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	add r4, r5, #0
	eor r4, r4, r0
	mov r0, #3
	and r4, r4, r0
	cmp r4, #0
	bne _080D91A6
	add r0, r5, #0
	mov r1, #31
	bl sub_080C35FC
	bl sub_080CA32C
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _080D9190  @ =0x00000FB2
	add r0, r6, r2
	add r3, r5, r0
	ldrb r0, [r3]
	cmp r1, r0
	beq _080D9194
	ldrb r2, [r3]
	sub r0, r1, r2
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080D917A
	add r0, r2, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
_080D917A:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r0, #15
	and r2, r2, r0
	strb r2, [r3]
	b _080D91A6
_080D9188:
	.4byte gRam
_080D918C:
	.4byte 0x00000996
_080D9190:
	.4byte 0x00000FB2
_080D9194:
	ldr r1, _080D91AC  @ =0x00000F52
	add r0, r6, r1
	add r0, r7, r0
	strb r4, [r0]
	ldr r2, _080D91B0  @ =0x00000FC2
	add r0, r6, r2
	add r0, r7, r0
	mov r1, #48
	strb r1, [r0]
_080D91A6:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D91AC:
	.4byte 0x00000F52
_080D91B0:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080D9130

