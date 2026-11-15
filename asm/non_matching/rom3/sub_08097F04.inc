	THUMB_FUNC_START sub_08097F04
sub_08097F04: @ 0x08097F04
	push {lr}
	ldr r2, _08097F48  @ =gRam
	ldr r1, _08097F4C  @ =0x000017DA
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08097F42
	ldr r3, _08097F50  @ =0x000017CA
	add r0, r2, r3
	ldrh r1, [r0]
	cmp r1, #0
	beq _08097F2A
	sub r3, r3, #8
	add r0, r2, r3
	strh r1, [r0]
	ldr r0, _08097F54  @ =0x000017B8
	add r1, r2, r0
	mov r0, #1
	strh r0, [r1]
_08097F2A:
	ldr r1, _08097F58  @ =0x000017CC
	add r0, r2, r1
	ldrh r1, [r0]
	cmp r1, #0
	beq _08097F42
	ldr r3, _08097F5C  @ =0x000017C4
	add r0, r2, r3
	strh r1, [r0]
	ldr r0, _08097F60  @ =0x000017BA
	add r1, r2, r0
	mov r0, #1
	strh r0, [r1]
_08097F42:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08097F48:
	.4byte gRam
_08097F4C:
	.4byte 0x000017DA
_08097F50:
	.4byte 0x000017CA
_08097F54:
	.4byte 0x000017B8
_08097F58:
	.4byte 0x000017CC
_08097F5C:
	.4byte 0x000017C4
_08097F60:
	.4byte 0x000017BA
	THUMB_FUNC_END sub_08097F04

