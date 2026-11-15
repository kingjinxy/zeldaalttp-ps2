	THUMB_FUNC_START sub_080C90F4
sub_080C90F4: @ 0x080C90F4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r3, _080C9124  @ =gRam
	ldr r2, _080C9128  @ =0x00000FB2
	add r0, r3, r2
	add r4, r1, r0
	ldr r6, _080C912C  @ =0x00001082
	add r0, r3, r6
	add r0, r1, r0
	ldrb r5, [r4]
	ldrb r2, [r0]
	cmp r5, r2
	beq _080C915A
	ldr r6, _080C9130  @ =0x00000996
	add r0, r3, r6
	ldrb r3, [r0]
	mov r0, #31
	and r0, r0, r3
	cmp r0, #0
	beq _080C9134
	mov r0, #0
	b _080C915C
	.byte 0x00
	.byte 0x00
_080C9124:
	.4byte gRam
_080C9128:
	.4byte 0x00000FB2
_080C912C:
	.4byte 0x00001082
_080C9130:
	.4byte 0x00000996
_080C9134:
	add r0, r5, #0
	eor r0, r0, r2
	mov r5, #2
	and r0, r0, r5
	cmp r0, #0
	bne _080C9158
	add r0, r1, #0
	eor r0, r0, r3
	lsr r0, r0, #5
	orr r0, r0, r5
	mov r1, #3
	and r0, r0, r1
	mov r1, #2
	and r1, r1, r2
	eor r0, r0, r1
	strb r0, [r4]
	mov r0, #0
	b _080C915C
_080C9158:
	strb r2, [r4]
_080C915A:
	mov r0, #1
_080C915C:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C90F4

	.byte 0x00
	.byte 0x00
