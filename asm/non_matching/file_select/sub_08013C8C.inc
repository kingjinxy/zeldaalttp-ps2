	THUMB_FUNC_START sub_08013C8C
sub_08013C8C: @ 0x08013C8C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	lsl r3, r3, #24
	lsr r6, r3, #24
	ldrh r0, [r5]
	ldr r1, _08013CE0  @ =0x0000FFFF
	cmp r0, r1
	beq _08013D16
	ldr r7, _08013CE4  @ =gUnknown_0202A760
	mov r8, r1
_08013CA4:
	add r0, r5, #0
	add r1, r6, #0
	bl sub_080138F0
	cmp r0, #0
	beq _08013D0E
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _08013D0E
	add r1, r5, #0
	add r2, r6, #0
	bl sub_0800A148
	cmp r0, #0
	beq _08013D0E
	add r0, r4, #0
	add r0, r0, #82
	strb r6, [r0]
	ldrb r0, [r4, #8]
	cmp r0, #6
	bne _08013D0E
	ldrb r0, [r4, #9]
	cmp r0, #33
	beq _08013CE8
	cmp r0, #45
	beq _08013D02
	b _08013D0E
	.byte 0x00
	.byte 0x00
_08013CE0:
	.4byte 0x0000FFFF
_08013CE4:
	.4byte gUnknown_0202A760
_08013CE8:
	ldrb r0, [r4, #10]
	bl sub_08013D54
	add r1, r4, #0
	add r1, r1, #32
	strb r0, [r1]
	ldrb r1, [r4, #23]
	mov r0, #3
	and r0, r0, r1
	add r0, r0, r7
	ldrb r1, [r4, #10]
	strb r1, [r0]
	b _08013D0E
_08013D02:
	ldrb r0, [r4, #23]
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r7
	ldrb r0, [r4, #11]
	strb r0, [r1]
_08013D0E:
	add r5, r5, #8
	ldrh r0, [r5]
	cmp r0, r8
	bne _08013CA4
_08013D16:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08013C8C

