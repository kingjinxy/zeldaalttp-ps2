	THUMB_FUNC_START sub_080F2010
sub_080F2010: @ 0x080F2010
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C7A48
	ldr r1, _080F2038  @ =gRam
	ldr r2, _080F203C  @ =0x000015E2
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #8
	beq _080F2044
	ldr r0, _080F2040  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080F204E
	.byte 0x00
	.byte 0x00
_080F2038:
	.4byte gRam
_080F203C:
	.4byte 0x000015E2
_080F2040:
	.4byte 0x00000F52
_080F2044:
	ldr r2, _080F2054  @ =0x00000FA2
	add r0, r1, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_080F204E:
	pop {r4}
	pop {r0}
	bx r0
_080F2054:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F2010

