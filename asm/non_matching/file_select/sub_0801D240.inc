	THUMB_FUNC_START sub_0801D240
sub_0801D240: @ 0x0801D240
	push {r4,r5,lr}
	add r4, r0, #0
	mov r0, #25
	bl sub_08012468
	add r5, r0, #0
	cmp r5, #0
	beq _0801D292
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08044018
	mov r1, #0
	str r1, [r4, #96]
	add r0, r4, #0
	add r0, r0, #104
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #2
	strb r1, [r0]
	add r0, r0, #1
	mov r3, #0
	strh r1, [r0]
	mov r0, #2
	strb r0, [r5, #10]
	str r4, [r5, #84]
	str r5, [r4, #84]
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	strb r3, [r4, #26]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
_0801D292:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D240

