	THUMB_FUNC_START sub_08026C00
sub_08026C00: @ 0x08026C00
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #100
	ldrh r0, [r0]
	bl 0x08000A40
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r4, #23]
	cmp r0, r1
	bcs _08026C1E
	add r0, r4, #0
	mov r1, #90
	bl sub_08026CC0
_08026C1E:
	ldrh r1, [r4, #50]
	mov r2, #50
	ldrsh r0, [r4, r2]
	cmp r0, #0
	beq _08026C36
	sub r0, r1, #1
	strh r0, [r4, #50]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08026C36
	mov r0, #4
	strb r0, [r4, #20]
_08026C36:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026C00

