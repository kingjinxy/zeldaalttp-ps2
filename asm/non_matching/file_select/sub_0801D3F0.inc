	THUMB_FUNC_START sub_0801D3F0
sub_0801D3F0: @ 0x0801D3F0
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _0801D418  @ =gUnknown_0813A7F2
	ldrb r1, [r4, #10]
	add r1, r1, r0
	ldrb r1, [r1]
	mov r0, #15
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _0801D410
	add r0, r4, #0
	bl sub_0803D3D0
_0801D410:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801D418:
	.4byte gUnknown_0813A7F2
	THUMB_FUNC_END sub_0801D3F0

