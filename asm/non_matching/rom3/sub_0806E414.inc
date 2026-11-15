	THUMB_FUNC_START sub_0806E414
sub_0806E414: @ 0x0806E414
	push {lr}
	bl sub_0809E034
	ldr r1, _0806E440  @ =gRam
	ldr r0, _0806E444  @ =0x00000B0C
	add r2, r1, r0
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0806E45C
	ldr r3, _0806E448  @ =0x00000B0A
	add r0, r1, r3
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0806E44C
	mov r0, #10
	b _0806E44E
	.byte 0x00
	.byte 0x00
_0806E440:
	.4byte gRam
_0806E444:
	.4byte 0x00000B0C
_0806E448:
	.4byte 0x00000B0A
_0806E44C:
	mov r0, #24
_0806E44E:
	strh r0, [r2]
	ldr r1, _0806E460  @ =gRam
	ldr r0, _0806E464  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0806E45C:
	pop {r0}
	bx r0
_0806E460:
	.4byte gRam
_0806E464:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806E414

