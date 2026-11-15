	THUMB_FUNC_START sub_0809A190
sub_0809A190: @ 0x0809A190
	push {r4,r5,lr}
	ldr r0, _0809A1B8  @ =gRam
	ldr r2, _0809A1BC  @ =0x0000176C
	add r1, r0, r2
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #0
	beq _0809A1F0
	ldr r1, _0809A1C0  @ =0x000017D4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809A1C4
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
	bl sub_080988C0
	b _0809A230
_0809A1B8:
	.4byte gRam
_0809A1BC:
	.4byte 0x0000176C
_0809A1C0:
	.4byte 0x000017D4
_0809A1C4:
	ldr r0, _0809A1D8  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809A1E0
	ldr r2, _0809A1DC  @ =0x00001718
	add r1, r4, r2
	mov r0, #23
	strb r0, [r1]
	b _0809A230
	.byte 0x00
	.byte 0x00
_0809A1D8:
	.4byte gMoonPearl
_0809A1DC:
	.4byte 0x00001718
_0809A1E0:
	ldr r0, _0809A1EC  @ =0x00001718
	add r1, r4, r0
	mov r0, #28
	strb r0, [r1]
	b _0809A230
	.byte 0x00
	.byte 0x00
_0809A1EC:
	.4byte 0x00001718
_0809A1F0:
	mov r5, #0
	ldr r1, _0809A238  @ =0x000017D4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809A22A
	ldr r2, _0809A23C  @ =0x00001718
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #6
	beq _0809A20E
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
_0809A20E:
	ldr r0, _0809A240  @ =0x0000176E
	add r1, r4, r0
	mov r0, #32
	strb r0, [r1]
	ldr r1, _0809A244  @ =0x0000180D
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809A248  @ =0x00001710
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #28
	add r0, r4, r1
	strb r5, [r0]
	mov r5, #4
_0809A22A:
	ldr r2, _0809A23C  @ =0x00001718
	add r0, r4, r2
	strb r5, [r0]
_0809A230:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809A238:
	.4byte 0x000017D4
_0809A23C:
	.4byte 0x00001718
_0809A240:
	.4byte 0x0000176E
_0809A244:
	.4byte 0x0000180D
_0809A248:
	.4byte 0x00001710
	THUMB_FUNC_END sub_0809A190

