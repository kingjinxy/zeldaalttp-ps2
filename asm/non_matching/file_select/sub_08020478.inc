	THUMB_FUNC_START sub_08020478
sub_08020478: @ 0x08020478
	push {r4,lr}
	add r4, r0, #0
	mov r0, #38
	bl sub_08012468
	add r2, r0, #0
	cmp r2, #0
	beq _080204E2
	add r0, r4, #0
	add r0, r0, #112
	ldrh r0, [r0]
	strh r0, [r2, #50]
	add r0, r4, #0
	add r0, r0, #114
	ldrh r0, [r0]
	strh r0, [r2, #54]
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	add r1, r2, #0
	add r1, r1, #82
	strb r0, [r1]
	add r0, r4, #0
	add r0, r0, #116
	ldrh r1, [r0]
	add r0, r2, #0
	add r0, r0, #116
	strh r1, [r0]
	add r0, r4, #0
	add r0, r0, #118
	ldrh r0, [r0]
	add r1, r2, #0
	add r1, r1, #118
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #120
	ldrh r1, [r0]
	add r0, r2, #0
	add r0, r0, #120
	strh r1, [r0]
	add r0, r4, #0
	add r0, r0, #122
	ldrh r0, [r0]
	add r1, r2, #0
	add r1, r1, #122
	strh r0, [r1]
	add r1, r1, #2
	mov r0, #150
	lsl r0, r0, #2
	strh r0, [r1]
	add r0, r2, #0
	bl sub_08008D90
_080204E2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08020478

