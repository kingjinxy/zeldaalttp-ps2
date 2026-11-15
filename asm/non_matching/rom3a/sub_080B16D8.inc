	THUMB_FUNC_START sub_080B16D8
sub_080B16D8: @ 0x080B16D8
	push {r4-r6,lr}
	ldr r6, _080B1714  @ =gRam
	ldr r0, _080B1718  @ =0x0000099D
	add r1, r6, r0
	mov r0, #0
	strb r0, [r1]
	ldr r0, _080B171C  @ =0x000009AD
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080B1720  @ =0x000009A4
	add r4, r6, r0
	ldrb r5, [r4]
	bl sub_08068F38
	ldrb r0, [r4]
	cmp r5, r0
	beq _080B170C
	strb r5, [r4]
	ldr r0, _080B1724  @ =0x000009E8
	add r1, r6, r0
	mov r0, #1
	strh r0, [r1]
	bl sub_080B128C
_080B170C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B1714:
	.4byte gRam
_080B1718:
	.4byte 0x0000099D
_080B171C:
	.4byte 0x000009AD
_080B1720:
	.4byte 0x000009A4
_080B1724:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080B16D8

