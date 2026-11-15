	THUMB_FUNC_START sub_080E1084
sub_080E1084: @ 0x080E1084
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _080E10B8  @ =gRam
	ldr r0, _080E10BC  @ =0x00001012
	add r1, r2, r0
	add r1, r4, r1
	ldrb r3, [r1]
	mov r0, #224
	and r0, r0, r3
	strb r0, [r1]
	ldr r0, _080E10C0  @ =0x00001624
	add r2, r2, r0
	ldrb r0, [r2]
	add r0, r0, #3
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl sub_080E0D04
	pop {r4}
	pop {r0}
	bx r0
_080E10B8:
	.4byte gRam
_080E10BC:
	.4byte 0x00001012
_080E10C0:
	.4byte 0x00001624
	THUMB_FUNC_END sub_080E1084

