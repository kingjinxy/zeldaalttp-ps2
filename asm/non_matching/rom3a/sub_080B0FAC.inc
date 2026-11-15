	THUMB_FUNC_START sub_080B0FAC
sub_080B0FAC: @ 0x080B0FAC
	push {r4-r6,lr}
	ldr r4, _080B1008  @ =gRam
	ldr r0, _080B100C  @ =0x00000A02
	add r1, r4, r0
	mov r6, #0
	mov r0, #12
	strb r0, [r1]
	ldr r3, _080B1010  @ =0x00000CA2
	add r5, r4, r3
	mov r0, #15
	strh r0, [r5]
	bl sub_0812FA28
	strh r6, [r5]
	ldr r0, _080B1014  @ =0x00000CA9
	add r1, r4, r0
	mov r0, #5
	strb r0, [r1]
	mov r3, #202
	lsl r3, r3, #4
	add r2, r4, r3
	ldrb r0, [r2]
	mov r3, #128
	lsl r3, r3, #2
	add r1, r3, #0
	add r0, r0, r1
	strh r0, [r2]
	bl sub_081331F4
	bl sub_08130030
	ldr r0, _080B1018  @ =0x0000099B
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r3, _080B101C  @ =0x000009AD
	add r4, r4, r3
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	bl sub_080AF310
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B1008:
	.4byte gRam
_080B100C:
	.4byte 0x00000A02
_080B1010:
	.4byte 0x00000CA2
_080B1014:
	.4byte 0x00000CA9
_080B1018:
	.4byte 0x0000099B
_080B101C:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B0FAC

