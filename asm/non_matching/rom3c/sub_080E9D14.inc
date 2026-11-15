	THUMB_FUNC_START sub_080E9D14
sub_080E9D14: @ 0x080E9D14
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080E9D78  @ =gRam
	ldr r1, _080E9D7C  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080E9D80  @ =0x00000EF2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080E9D84  @ =0x00000EE2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080E9D88  @ =0x00000F02
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #0
	bl sub_080C781C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #64
	beq _080E9D70
	ldr r1, _080E9D8C  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #5
	strb r1, [r0]
_080E9D70:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9D78:
	.4byte gRam
_080E9D7C:
	.4byte 0x00000ED2
_080E9D80:
	.4byte 0x00000EF2
_080E9D84:
	.4byte 0x00000EE2
_080E9D88:
	.4byte 0x00000F02
_080E9D8C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E9D14

