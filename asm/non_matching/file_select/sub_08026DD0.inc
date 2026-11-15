	THUMB_FUNC_START sub_08026DD0
sub_08026DD0: @ 0x08026DD0
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r3, r4, #0
	add r3, r3, #41
	ldrb r1, [r3]
	cmp r1, #1
	bne _08026DEA
	add r0, r4, #0
	bl sub_08026EA0
	b _08026E1C
_08026DEA:
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _08026DFE
	add r0, r4, #0
	bl DeleteThisEntity
	b _08026E1C
_08026DFE:
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08026E1C
	strb r2, [r3]
	ldrb r0, [r4, #24]
	cmp r0, #0
	bne _08026E16
	mov r0, #116
	bl 0x08003DFC
	b _08026E1C
_08026E16:
	mov r0, #157
	bl 0x08003DFC
_08026E1C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026DD0

	.byte 0x00
	.byte 0x00
