	THUMB_FUNC_START sub_0801E868
sub_0801E868: @ 0x0801E868
	push {r4,lr}
	add r4, r0, #0
	mov r1, #12
	bl 0x0800997C
	lsl r1, r0, #24
	lsr r2, r1, #24
	mov r1, #128
	and r1, r1, r0
	cmp r1, #0
	beq _0801E898
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #64
	str r0, [r4, #12]
	mov r0, #24
	and r0, r0, r2
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #1
	bl 0x08003870
_0801E898:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E868

	.byte 0x00
	.byte 0x00
