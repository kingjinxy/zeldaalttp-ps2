	THUMB_FUNC_START sub_080B1958
sub_080B1958: @ 0x080B1958
	push {r4-r6,lr}
	ldr r6, _080B1980  @ =gRam
	ldr r0, _080B1984  @ =0x000009A4
	add r4, r6, r0
	ldrb r5, [r4]
	bl sub_08068F38
	ldrb r0, [r4]
	cmp r5, r0
	beq _080B197A
	strb r5, [r4]
	ldr r0, _080B1988  @ =0x000009E8
	add r1, r6, r0
	mov r0, #1
	strh r0, [r1]
	bl sub_080B128C
_080B197A:
	pop {r4-r6}
	pop {r0}
	bx r0
_080B1980:
	.4byte gRam
_080B1984:
	.4byte 0x000009A4
_080B1988:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080B1958

