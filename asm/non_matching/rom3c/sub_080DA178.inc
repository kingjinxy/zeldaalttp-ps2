	THUMB_FUNC_START sub_080DA178
sub_080DA178: @ 0x080DA178
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	mov r0, #3
	mov r1, #176
	bl sub_081337C8
	ldr r5, _080DA1BC  @ =gRam
	ldr r0, _080DA1C0  @ =0x00001644
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #15
	bhi _080DA198
	mov r0, #16
	strb r0, [r1]
_080DA198:
	ldr r1, _080DA1C4  @ =0x00000FC2
	add r0, r5, r1
	add r3, r4, r0
	ldrb r2, [r3]
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _080DA1CC
	ldr r1, _080DA1C8  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #80
	strb r0, [r3]
	b _080DA1F4
	.byte 0x00
	.byte 0x00
_080DA1BC:
	.4byte gRam
_080DA1C0:
	.4byte 0x00001644
_080DA1C4:
	.4byte 0x00000FC2
_080DA1C8:
	.4byte 0x00000F52
_080DA1CC:
	cmp r0, #120
	beq _080DA1F4
	cmp r1, #0
	blt _080DA1F4
	mov r0, #3
	and r0, r0, r2
	cmp r0, #0
	bne _080DA1F4
	mov r0, #17
	mov r1, #0
	bl sub_0812A324
	ldr r1, _080DA1FC  @ =0x00001052
	add r0, r5, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #14
	beq _080DA1F4
	add r0, r0, #4
	strb r0, [r1]
_080DA1F4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DA1FC:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DA178

