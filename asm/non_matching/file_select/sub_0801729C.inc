	THUMB_FUNC_START sub_0801729C
sub_0801729C: @ 0x0801729C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _080172AC
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _080172DA
_080172AC:
	mov r1, #160
	lsl r1, r1, #10
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _080172DA
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #24]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #10
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	mov r0, #94
	bl 0x08003DFC
_080172DA:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801729C

