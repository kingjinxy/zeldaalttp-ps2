	THUMB_FUNC_START sub_080C5080
sub_080C5080: @ 0x080C5080
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080C50AC  @ =gRam
	ldr r2, _080C50B0  @ =0x00001132
	add r0, r1, r2
	add r0, r4, r0
	ldrb r5, [r0]
	mov r2, #0
	strb r2, [r0]
	mov r2, #161
	lsl r2, r2, #4
	add r0, r1, r2
	ldr r2, _080C50B4  @ =0x000010F2
	add r1, r1, r2
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _080C50B8
	mov r0, #0
	b _080C50CA
_080C50AC:
	.4byte gRam
_080C50B0:
	.4byte 0x00001132
_080C50B4:
	.4byte 0x000010F2
_080C50B8:
	add r0, r4, #0
	bl sub_080C46EC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080C50CA
	bl sub_080C51A8
_080C50CA:
	ldr r0, _080C50DC  @ =gRam
	ldr r1, _080C50E0  @ =0x00001132
	add r0, r0, r1
	add r0, r4, r0
	strb r5, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C50DC:
	.4byte gRam
_080C50E0:
	.4byte 0x00001132
	THUMB_FUNC_END sub_080C5080

