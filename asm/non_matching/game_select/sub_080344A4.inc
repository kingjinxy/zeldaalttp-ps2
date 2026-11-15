	THUMB_FUNC_START sub_080344A4
sub_080344A4: @ 0x080344A4
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl GetNextFrame
	ldr r1, _080344E0  @ =gUnknown_0813E4CC
	ldrb r0, [r4, #23]
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r1
	mov r1, #0
	ldrsh r0, [r0, r1]
	asr r0, r0, #6
	strh r0, [r4, #58]
	ldrb r0, [r4, #23]
	add r0, r0, #16
	strb r0, [r4, #23]
	ldr r0, _080344E4  @ =gUnknown_02016D60
	ldrb r0, [r0, #15]
	ldrb r1, [r4, #11]
	cmp r0, r1
	beq _080344D8
	mov r0, #2
	strb r0, [r4, #20]
_080344D8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080344E0:
	.4byte gUnknown_0813E4CC
_080344E4:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080344A4

