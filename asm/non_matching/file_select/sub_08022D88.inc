	THUMB_FUNC_START sub_08022D88
sub_08022D88: @ 0x08022D88
	push {r4-r7,lr}
	add r7, r0, #0
	mov r5, #0
	mov r6, #31
_08022D90:
	mov r0, #15
	mov r1, #13
	mov r2, #32
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _08022DCA
	add r0, r7, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldrh r0, [r4, #54]
	sub r0, r0, #16
	strh r0, [r4, #54]
	bl sub_0800099C
	and r0, r0, r6
	lsl r0, r0, #8
	str r0, [r4, #12]
	bl sub_0800099C
	and r0, r0, r6
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0803CC20
_08022DCA:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #3
	bls _08022D90
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08022D88

	.byte 0x00
	.byte 0x00
