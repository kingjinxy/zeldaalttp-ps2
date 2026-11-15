	THUMB_FUNC_START sub_080FB19C
sub_080FB19C: @ 0x080FB19C
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080FB1D8  @ =gRam
	ldr r1, _080FB1DC  @ =0x00001152
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FB1D4
	ldr r1, _080FB1E0  @ =0x00001142
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FB1D4
	ldr r0, _080FB1E4  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r2, #0
	mov r1, #59
	bl sub_080CF140
_080FB1D4:
	pop {r0}
	bx r0
_080FB1D8:
	.4byte gRam
_080FB1DC:
	.4byte 0x00001152
_080FB1E0:
	.4byte 0x00001142
_080FB1E4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FB19C

