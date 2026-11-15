	THUMB_FUNC_START sub_080F984C
sub_080F984C: @ 0x080F984C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r3, _080F98A4  @ =gRam
	ldr r1, _080F98A8  @ =0x00001052
	add r0, r3, r1
	add r4, r2, r0
	ldrb r1, [r4]
	mov r6, #3
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080F989C
	ldr r0, _080F98AC  @ =0x00001152
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F9886
	ldr r0, _080F98B0  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F9886:
	ldrb r1, [r4]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080F989C
	add r0, r5, #0
	bl sub_080F9E78
	add r0, r5, #0
	bl sub_080F98B4
_080F989C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F98A4:
	.4byte gRam
_080F98A8:
	.4byte 0x00001052
_080F98AC:
	.4byte 0x00001152
_080F98B0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F984C

