	THUMB_FUNC_START sub_08011ADC
sub_08011ADC: @ 0x08011ADC
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _08011B04  @ =gUnknown_02016D60
	mov r2, #1
	strb r2, [r1, #27]
	ldrb r0, [r4, #21]
	cmp r0, #0
	bne _08011B5C
	strb r2, [r4, #21]
	ldrb r0, [r1, #26]
	strb r0, [r4, #24]
	ldrb r0, [r1, #26]
	cmp r0, #2
	beq _08011B12
	cmp r0, #2
	bgt _08011B08
	cmp r0, #0
	beq _08011B0E
	b _08011B1A
	.byte 0x00
	.byte 0x00
_08011B04:
	.4byte gUnknown_02016D60
_08011B08:
	cmp r0, #3
	beq _08011B16
	b _08011B1A
_08011B0E:
	mov r3, #0
	b _08011B1C
_08011B12:
	mov r3, #1
	b _08011B1C
_08011B16:
	mov r3, #3
	b _08011B1C
_08011B1A:
	mov r3, #2
_08011B1C:
	ldr r2, _08011B58  @ =gUnknown_081380C2
	ldrb r0, [r4, #11]
	lsl r0, r0, #1
	lsl r1, r3, #1
	add r1, r1, r3
	lsl r1, r1, #1
	add r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	add r3, r4, #0
	add r3, r3, #98
	strh r0, [r3]
	ldrb r0, [r4, #11]
	lsl r0, r0, #1
	add r1, r1, #1
	add r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	add r2, r4, #0
	add r2, r2, #101
	strb r0, [r2]
	ldrh r0, [r4, #50]
	add r1, r4, #0
	add r1, r1, #96
	strh r0, [r1]
	add r0, r4, #0
	mov r2, #20
	bl sub_0803D7E8
	b _08011B6E
_08011B58:
	.4byte gUnknown_081380C2
_08011B5C:
	add r0, r4, #0
	bl sub_0803D8AC
	cmp r0, #0
	beq _08011B6E
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #0
	strb r0, [r4, #21]
_08011B6E:
	add r0, r4, #0
	bl sub_08011BE0
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08011ADC

	.byte 0x00
	.byte 0x00
