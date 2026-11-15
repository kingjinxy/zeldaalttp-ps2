	THUMB_FUNC_START sub_0812E410
sub_0812E410: @ 0x0812E410
	push {r4,lr}
	bl sub_08126D5C
	bl sub_0812E0A0
	bl sub_081295CC
	ldr r2, _0812E44C  @ =gRam
	ldr r0, _0812E450  @ =0x000009AD
	add r3, r2, r0
	ldrb r1, [r3]
	cmp r1, #0
	bne _0812E470
	ldr r4, _0812E454  @ =0x000009AC
	add r0, r2, r4
	strb r1, [r0]
	ldr r4, _0812E458  @ =0x00001AE2
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812E460
	ldr r4, _0812E45C  @ =0x0000099D
	add r0, r2, r4
	strb r1, [r0]
	add r4, r4, #75
	add r0, r2, r4
	strh r1, [r0]
	mov r0, #14
	b _0812E46E
	.byte 0x00
	.byte 0x00
_0812E44C:
	.4byte gRam
_0812E450:
	.4byte 0x000009AD
_0812E454:
	.4byte 0x000009AC
_0812E458:
	.4byte 0x00001AE2
_0812E45C:
	.4byte 0x0000099D
_0812E460:
	ldr r4, _0812E478  @ =0x0000099D
	add r0, r2, r4
	strb r1, [r0]
	add r4, r4, #75
	add r0, r2, r4
	strh r1, [r0]
	mov r0, #15
_0812E46E:
	strb r0, [r3]
_0812E470:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812E478:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_0812E410

