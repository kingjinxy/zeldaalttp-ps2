	THUMB_FUNC_START sub_080F44E4
sub_080F44E4: @ 0x080F44E4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F4538  @ =gRam
	ldr r2, _080F453C  @ =0x00000F62
	add r1, r1, r2
	add r6, r0, r1
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #63
	bne _080F4530
	ldr r4, _080F4540  @ =gUnknown_0200EE18
	ldrb r1, [r4]
	ldr r5, _080F4544  @ =gUnknown_0200EE19
	ldrb r0, [r5]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080F4548  @ =gUnknown_0200EE1A
	ldrb r0, [r3]
	lsl r0, r0, #16
	add r1, r1, r0
	ldr r2, _080F454C  @ =gUnknown_0200EE1B
	ldrb r0, [r2]
	lsl r0, r0, #24
	add r1, r1, r0
	mov r0, #0
	strb r0, [r6]
	add r1, r1, #1
	strb r1, [r4]
	lsr r0, r1, #8
	strb r0, [r5]
	lsr r0, r1, #16
	strb r0, [r3]
	lsr r1, r1, #24
	strb r1, [r2]
_080F4530:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F4538:
	.4byte gRam
_080F453C:
	.4byte 0x00000F62
_080F4540:
	.4byte gUnknown_0200EE18
_080F4544:
	.4byte gUnknown_0200EE19
_080F4548:
	.4byte gUnknown_0200EE1A
_080F454C:
	.4byte gUnknown_0200EE1B
	THUMB_FUNC_END sub_080F44E4

