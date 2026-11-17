	THUMB_FUNC_START sub_08020E2C
sub_08020E2C: @ 0x08020E2C
	push {r4-r6,lr}
	add r3, r0, #0
	ldr r1, [r3, #84]
	add r0, r1, #0
	add r0, r0, #125
	ldrb r0, [r0]
	cmp r0, #1
	bne _08020E42
	mov r0, #3
	strb r0, [r3, #20]
	b _08020EAC
_08020E42:
	ldrh r5, [r3, #50]
	ldrh r6, [r3, #54]
	ldrb r0, [r3, #11]
	cmp r0, #0
	beq _08020E54
	ldrh r0, [r1, #50]
	strh r0, [r3, #50]
	ldrh r0, [r1, #54]
	b _08020E7A
_08020E54:
	ldr r0, _08020EB4  @ =gUnknown_03000E20
	ldrh r0, [r0]
	add r0, r0, #1
	mov r1, #7
	and r0, r0, r1
	add r0, r0, #120
	add r4, r3, r0
	ldrb r1, [r4]
	mov r0, #15
	and r0, r0, r1
	ldr r1, _08020EB8  @ =0x0000FFF8
	add r0, r0, r1
	add r0, r5, r0
	strh r0, [r3, #50]
	ldrb r0, [r4]
	lsr r0, r0, #4
	add r0, r0, r1
	ldrh r1, [r3, #54]
	add r0, r0, r1
_08020E7A:
	strh r0, [r3, #54]
	ldr r2, [r3, #88]
	cmp r2, #0
	beq _08020EA6
	ldr r0, _08020EB4  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	add r0, r0, #120
	add r4, r2, r0
	ldrh r1, [r3, #50]
	sub r1, r1, r5
	add r1, r1, #8
	mov r2, #15
	and r1, r1, r2
	ldrh r0, [r3, #54]
	sub r0, r0, r6
	add r0, r0, #8
	and r0, r0, r2
	lsl r0, r0, #4
	orr r1, r1, r0
	strb r1, [r4]
_08020EA6:
	add r0, r3, #0
	bl GetNextFrame
_08020EAC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08020EB4:
	.4byte gUnknown_03000E20
_08020EB8:
	.4byte 0x0000FFF8
	THUMB_FUNC_END sub_08020E2C

