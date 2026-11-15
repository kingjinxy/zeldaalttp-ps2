	THUMB_FUNC_START sub_08067E18
sub_08067E18: @ 0x08067E18
	push {r4-r7,lr}
	add r7, r0, #0
	add r5, r1, #0
	add r6, r2, #0
	add r0, r7, #4
	mov r1, #4
	bl sub_080679B0
	add r4, r0, #0
	lsl r4, r4, #16
	lsr r4, r4, #16
	add r0, r5, #0
	add r1, r6, #0
	bl sub_080679B0
	add r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldrh r0, [r7]
	cmp r0, r4
	bne _08067E56
	lsl r0, r0, #16
	ldrh r1, [r7, #2]
	neg r0, r0
	lsr r0, r0, #16
	cmp r1, r0
	bne _08067E56
	ldr r1, [r7, #4]
	ldr r0, _08067E5C  @ =0x54463453
	cmp r1, r0
	beq _08067E60
_08067E56:
	mov r0, #0
	b _08067E62
	.byte 0x00
	.byte 0x00
_08067E5C:
	.4byte 0x54463453
_08067E60:
	mov r0, #1
_08067E62:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08067E18

