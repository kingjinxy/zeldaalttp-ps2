	THUMB_FUNC_START sub_0801A590
sub_0801A590: @ 0x0801A590
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x0800963C
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801A5CE
	mov r0, #16
	strb r0, [r4, #24]
	add r0, r4, #0
	bl sub_0801A868
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	lsr r1, r0, #3
	add r0, r4, #0
	add r0, r0, #42
	ldrb r2, [r0]
	cmp r1, r2
	beq _0801A5CE
	strb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
_0801A5CE:
	add r1, r4, #0
	add r1, r1, #124
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801A5E2
	mov r0, #4
	strb r0, [r4, #20]
_0801A5E2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A590

