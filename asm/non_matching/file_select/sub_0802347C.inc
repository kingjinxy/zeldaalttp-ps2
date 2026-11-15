	THUMB_FUNC_START sub_0802347C
sub_0802347C: @ 0x0802347C
	push {r4,lr}
	add r4, r0, #0
	ldr r2, _080234CC  @ =gUnknown_08137B10
	ldr r0, [r4, #124]
	add r0, r0, #126
	ldrb r1, [r0]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r0, [r4, #84]
	add r0, r0, #125
	ldrb r2, [r0]
	ldr r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _080234C6
	add r0, r4, #0
	bl sub_0803CC20
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080234C6
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #32
	str r0, [r4, #12]
	ldrh r1, [r4, #50]
	add r0, r4, #0
	add r0, r0, #112
	mov r2, #0
	strh r1, [r0]
	add r0, r0, #3
	strb r2, [r0]
	sub r0, r0, #1
	strb r2, [r0]
_080234C6:
	pop {r4}
	pop {r0}
	bx r0
_080234CC:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_0802347C

