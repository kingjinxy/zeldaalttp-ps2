	THUMB_FUNC_START sub_08067A70
sub_08067A70: @ 0x08067A70
	push {r4-r7,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_08068014
	add r7, r0, #0
	mov r0, #4
	orr r4, r4, r0
	add r0, r4, #0
	bl sub_08068014
	add r5, r0, #0
	ldrh r1, [r5, #2]
	ldr r6, _08067AD8  @ =gUnknown_0814C620
	mov r0, #3
	add r2, r6, #0
	bl sub_08067F84
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldrh r1, [r5, #4]
	ldr r0, _08067ADC  @ =0x0000FFFF
	cmp r1, r0
	beq _08067AC6
	mov r0, #1
	and r0, r0, r2
	cmp r0, #0
	bne _08067AB6
	mov r0, #1
	add r2, r6, #0
	bl sub_08067F84
_08067AB6:
	mov r0, #2
	and r4, r4, r0
	cmp r4, #0
	bne _08067AC6
	ldrh r1, [r5, #4]
	add r2, r6, #0
	bl sub_08067F84
_08067AC6:
	ldrh r1, [r7, #2]
	ldr r2, _08067AD8  @ =gUnknown_0814C620
	mov r0, #3
	bl sub_08067F84
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08067AD8:
	.4byte gUnknown_0814C620
_08067ADC:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08067A70

