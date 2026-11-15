	THUMB_FUNC_START sub_08073C00
sub_08073C00: @ 0x08073C00
	push {r4,lr}
	ldr r4, _08073C24  @ =gRam
	ldr r0, _08073C28  @ =0x000017AA
	add r1, r4, r0
	mov r0, #144
	strb r0, [r1]
	bl sub_0812FE54
	ldr r1, _08073C2C  @ =0x0000165C
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08073C34
	ldr r2, _08073C30  @ =0x00000A3C
	add r1, r4, r2
	mov r0, #14
	b _08073C3A
	.byte 0x00
	.byte 0x00
_08073C24:
	.4byte gRam
_08073C28:
	.4byte 0x000017AA
_08073C2C:
	.4byte 0x0000165C
_08073C30:
	.4byte 0x00000A3C
_08073C34:
	ldr r3, _08073C64  @ =0x00000A3C
	add r1, r4, r3
	mov r0, #7
_08073C3A:
	strh r0, [r1]
	ldr r1, _08073C68  @ =gRam
	ldr r2, _08073C6C  @ =0x000009AD
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _08073C70  @ =0x000009E8
	add r0, r1, r3
	strh r2, [r0]
	add r3, r3, #100
	add r0, r1, r3
	strh r2, [r0]
	mov r0, #201
	lsl r0, r0, #4
	add r1, r1, r0
	strh r2, [r1]
	bl sub_080BE9C8
	pop {r4}
	pop {r0}
	bx r0
_08073C64:
	.4byte 0x00000A3C
_08073C68:
	.4byte gRam
_08073C6C:
	.4byte 0x000009AD
_08073C70:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08073C00

