	THUMB_FUNC_START sub_080EB0A0
sub_080EB0A0: @ 0x080EB0A0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080EB0FC  @ =gRam
	ldr r2, _080EB100  @ =0x00000FB2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r5, [r0]
	add r2, r2, #16
	add r0, r1, r2
	add r3, r4, r0
	ldrb r2, [r3]
	add r6, r1, #0
	cmp r2, #0
	bne _080EB0C6
	ldr r1, _080EB104  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	strb r2, [r0]
_080EB0C6:
	ldrb r0, [r3]
	cmp r0, #15
	bhi _080EB0E6
	cmp r0, #15
	bne _080EB0E0
	add r0, r4, #0
	bl sub_080EB114
	ldr r2, _080EB108  @ =0x00000FD2
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
_080EB0E0:
	add r0, r5, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
_080EB0E6:
	ldr r1, _080EB10C  @ =0x00000F92
	add r0, r6, r1
	add r0, r4, r0
	ldr r1, _080EB110  @ =gUnknown_08177D98
	add r1, r5, r1
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EB0FC:
	.4byte gRam
_080EB100:
	.4byte 0x00000FB2
_080EB104:
	.4byte 0x00000F52
_080EB108:
	.4byte 0x00000FD2
_080EB10C:
	.4byte 0x00000F92
_080EB110:
	.4byte gUnknown_08177D98
	THUMB_FUNC_END sub_080EB0A0

