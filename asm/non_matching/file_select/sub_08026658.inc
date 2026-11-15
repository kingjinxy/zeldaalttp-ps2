	THUMB_FUNC_START sub_08026658
sub_08026658: @ 0x08026658
	push {r4,lr}
	add r4, r0, #0
	bl 0x08009FDC
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, #0
	bne _08026688
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #60
	strb r1, [r0]
	sub r0, r0, #18
	ldrb r1, [r0]
	add r1, r1, #2
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	b _0802668E
_08026688:
	add r0, r4, #0
	bl 0x08008E50
_0802668E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026658

