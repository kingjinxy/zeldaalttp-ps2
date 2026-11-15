	THUMB_FUNC_START sub_080FB054
sub_080FB054: @ 0x080FB054
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	bl sub_080FAC20
	ldr r3, _080FB090  @ =gRam
	ldr r2, _080FB094  @ =0x00001142
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #1
	strb r2, [r1]
	ldr r2, _080FB098  @ =0x00001152
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #16
	strb r2, [r1]
	ldr r2, _080FB09C  @ =0x00001052
	add r1, r3, r2
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	ldr r0, _080FB0A0  @ =0x00001663
	add r3, r3, r0
	strb r4, [r3]
	pop {r4}
	pop {r0}
	bx r0
_080FB090:
	.4byte gRam
_080FB094:
	.4byte 0x00001142
_080FB098:
	.4byte 0x00001152
_080FB09C:
	.4byte 0x00001052
_080FB0A0:
	.4byte 0x00001663
	THUMB_FUNC_END sub_080FB054

