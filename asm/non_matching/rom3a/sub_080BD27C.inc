	THUMB_FUNC_START sub_080BD27C
sub_080BD27C: @ 0x080BD27C
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _080BD2D8  @ =gRam
	ldr r0, _080BD2DC  @ =0x00000A3C
	add r6, r4, r0
	ldrh r0, [r6]
	mov r8, r0
	bl sub_080BDB54
	ldr r0, _080BD2E0  @ =0x00000FF2
	add r1, r4, r0
	mov r0, #214
	strb r0, [r1]
	mov r0, #0
	bl sub_080CEB84
	add r0, r5, #0
	bl sub_080B9584
	mov r0, #0
	bl sub_0810A440
	ldr r0, _080BD2E4  @ =0x00000B6D
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080BD2E8  @ =0x00000FC2
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
	ldr r0, _080BD2EC  @ =0x00000F52
	add r4, r4, r0
	mov r0, #7
	strb r0, [r4]
	mov r0, r8
	strh r0, [r6]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BD2D8:
	.4byte gRam
_080BD2DC:
	.4byte 0x00000A3C
_080BD2E0:
	.4byte 0x00000FF2
_080BD2E4:
	.4byte 0x00000B6D
_080BD2E8:
	.4byte 0x00000FC2
_080BD2EC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080BD27C

