	THUMB_FUNC_START sub_08021BB8
sub_08021BB8: @ 0x08021BB8
	push {r4,r5,lr}
	add r5, r0, #0
	bl GetNextFrame
	add r0, r5, #0
	bl sub_0803CC20
	mov r1, #50
	ldrsh r0, [r5, r1]
	mov r2, #170
	lsl r2, r2, #2
	cmp r0, r2
	ble _08021C1E
	add r1, r5, #0
	add r1, r1, #63
	mov r4, #0
	mov r0, #1
	strb r0, [r1]
	strh r2, [r5, #50]
	ldrb r0, [r5, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #25
	mov r0, #192
	lsl r0, r0, #19
	add r1, r1, r0
	lsr r1, r1, #24
	add r0, r5, #0
	bl sub_08003870
	mov r0, #8
	strb r0, [r5, #20]
	str r4, [r5, #16]
	ldrb r0, [r5, #30]
	lsr r0, r0, #4
	add r0, r0, #1
	mov r1, #15
	and r0, r0, r1
	lsl r1, r0, #4
	orr r1, r1, r0
	strb r1, [r5, #30]
	add r1, r5, #0
	add r1, r1, #112
	mov r0, #180
	lsl r0, r0, #1
	strh r0, [r1]
	mov r0, #169
	bl play_sound
	b _08021C52
_08021C1E:
	mov r1, #128
	lsl r1, r1, #6
	add r0, r5, #0
	bl sub_08003594
	cmp r0, #0
	bne _08021C52
	ldrb r0, [r5, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #25
	mov r0, #144
	lsl r0, r0, #20
	add r1, r1, r0
	lsr r1, r1, #24
	add r0, r5, #0
	bl sub_08003870
	mov r0, #90
	strb r0, [r5, #24]
	mov r0, #7
	strb r0, [r5, #20]
	add r0, r5, #0
	bl sub_080229CC
_08021C52:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021BB8

