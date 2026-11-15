	THUMB_FUNC_START sub_08014658
sub_08014658: @ 0x08014658
	push {r4,r5,lr}
	lsl r0, r0, #16
	lsr r3, r0, #16
	lsl r1, r1, #16
	lsr r4, r1, #16
	lsl r2, r2, #16
	lsr r5, r2, #16
	mov r0, #172
	lsl r0, r0, #1
	cmp r3, r0
	bne _080146C4
	ldr r0, _080146C0  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	cmp r0, #1
	beq _080146C4
	add r0, r3, #0
	add r1, r4, #0
	add r2, r5, #0
	bl 0x08008F78
	add r0, r4, #0
	add r1, r5, #0
	bl sub_080145D8
	add r0, r4, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	bl sub_080145D8
	sub r0, r4, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	bl sub_080145D8
	add r0, r4, #0
	add r0, r0, #64
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	bl sub_080145D8
	add r0, r4, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	bl sub_080145D8
	b _080146CE
	.byte 0x00
	.byte 0x00
_080146C0:
	.4byte gUnknown_03006C80
_080146C4:
	add r0, r3, #0
	add r1, r4, #0
	add r2, r5, #0
	bl sub_080144F0
_080146CE:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08014658

