	THUMB_FUNC_START sub_08026A6C
sub_08026A6C: @ 0x08026A6C
	push {r4,r5,lr}
	add r4, r0, #0
	bl sub_08000580
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _08026AAE
	add r5, r4, #0
	add r5, r5, #120
	ldrh r1, [r5]
	ldr r0, _08026AA8  @ =0x0000FFFF
	cmp r1, r0
	beq _08026AAC
	add r0, r4, #0
	add r0, r0, #124
	ldrh r0, [r0]
	add r1, r4, #0
	add r1, r1, #80
	ldrh r1, [r1]
	bl 0x08008F58
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r5, [r5]
	cmp r0, r5
	bne _08026AAC
	mov r0, #16
	b _08026AAE
	.byte 0x00
	.byte 0x00
_08026AA8:
	.4byte 0x0000FFFF
_08026AAC:
	mov r0, #0
_08026AAE:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08026A6C

