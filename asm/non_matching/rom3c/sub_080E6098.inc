	THUMB_FUNC_START sub_080E6098
sub_080E6098: @ 0x080E6098
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080E65C8
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E60EC  @ =gRam
	ldr r3, _080E60F0  @ =0x00001082
	add r1, r2, r3
	add r1, r4, r1
	strb r0, [r1]
	sub r3, r3, #208
	add r1, r2, r3
	add r1, r4, r1
	strb r0, [r1]
	ldr r1, _080E60F4  @ =0x00000FC2
	add r0, r2, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080E60DE
	sub r1, r1, #112
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #32
	strb r0, [r3]
_080E60DE:
	add r0, r5, #0
	bl sub_080E68A0
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E60EC:
	.4byte gRam
_080E60F0:
	.4byte 0x00001082
_080E60F4:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E6098

